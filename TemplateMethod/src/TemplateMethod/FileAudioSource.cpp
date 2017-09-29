#include <iostream>
#include "TemplateMethod/FileAudioSource.h"

namespace GoF {

    namespace TemplateMethod {

        FileAudioSource::FileAudioSource()
            : AudioSource()
        { }

        void FileAudioSource::open()
        {
            std::cout << "\nOpening the file resource " << getAudioResource() << std::endl;
        }

        void FileAudioSource::close()
        {
            std::cout << "Closing the file resource ...\n"   << std::endl;
        }

        void FileAudioSource::start()
        {
            std::cout << "Starting the file resource ..."   << std::endl;
        }

        bool FileAudioSource::isAudioResourceValid() const
        {
            return getAudioResource() != "";
        }

    }

}
