#include <iostream>
#include "Adapter/MySQLAdapter.h"
#include "Adapter/PostgresAdapter.h"
#include "Adapter/UnbelievableDatabaseConnector.h"

using GoF::Adapter::MySQLAdapter;
using GoF::Adapter::PostgresAdapter;
using GoF::Adapter::UnbelievableDatabaseParams;
using GoF::Adapter::UnbelievableDatabaseConnector;

int main(int argc, char * argv[]) {

    UnbelievableDatabaseParams mySQLParams =
        UnbelievableDatabaseParams(
            "localhost",
            "3360",
            "db_name",
            "admin",
            "admin"
        );

    MySQLAdapter * mySQLAdapter = new MySQLAdapter();
    mySQLAdapter->setParams(mySQLParams);

    UnbelievableDatabaseConnector databaseConnectorWithMySQLAdapter =
        UnbelievableDatabaseConnector(mySQLAdapter);

    databaseConnectorWithMySQLAdapter.connect();
    if ( databaseConnectorWithMySQLAdapter.isConnected() ) {
        std::cout << "\nMySQL Adapter is connected." << std::endl;
    } else {
        std::cout << "\nMySQL Adapter is not connected." << std::endl;
    }

    UnbelievableDatabaseParams postgreSQLParams =
        UnbelievableDatabaseParams(
            "127.0.0.1",
            "5432",
            "db_name",
            "admin",
            "admin"
        );

    PostgresAdapter * postgresAdapter = new PostgresAdapter();
    postgresAdapter->setParams(postgreSQLParams);

    UnbelievableDatabaseConnector databaseConnectorWithPostgreSQLAdapter =
        UnbelievableDatabaseConnector(postgresAdapter);

    databaseConnectorWithPostgreSQLAdapter.connect();
    if ( databaseConnectorWithPostgreSQLAdapter.isConnected() ) {
        std::cout << "PostgreSQL Adapter is connected." << std::endl;
    } else {
        std::cout << "PostgreSQL Adapter is not connected." << std::endl;
    }

    return 0;

}
