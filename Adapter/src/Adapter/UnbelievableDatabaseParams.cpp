#include "Adapter/UnbelievableDatabaseParams.h"

namespace GoF {

    namespace Adapter {

        UnbelievableDatabaseParams::UnbelievableDatabaseParams()
            : host(""),
              port(""),
              database(""),
              username(""),
              password("")
        { }

        UnbelievableDatabaseParams::UnbelievableDatabaseParams(
            const std::string & _host,
            const std::string & _port,
            const std::string & _database,
            const std::string & _username,
            const std::string & _password
        )
            : host(_host),
              port(_port),
              database(_database),
              username(_username),
              password(_password)
        { }

        std::string UnbelievableDatabaseParams::getHost() const
        {
            return host;
        }

        std::string UnbelievableDatabaseParams::getPort() const
        {
            return port;
        }

        std::string UnbelievableDatabaseParams::getDatabase() const
        {
            return database;
        }

        std::string UnbelievableDatabaseParams::getUsername() const
        {
            return username;
        }

        std::string UnbelievableDatabaseParams::getPassword() const
        {
            return password;
        }

    }

}
