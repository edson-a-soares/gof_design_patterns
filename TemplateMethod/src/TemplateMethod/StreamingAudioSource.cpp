#include <iostream>
#include "TemplateMethod/StreamingAudioSource.h"

namespace GoF {

    namespace TemplateMethod {

        StreamingAudioSource::StreamingAudioSource()
            : AudioSource()
        { }

        void StreamingAudioSource::open()
        {
            std::cout << "\nOpening the streaming audio resource " << getAudioResource() << std::endl;
        }

        void StreamingAudioSource::close()
        {
            std::cout << "Closing the streaming audio resource ...\n"   << std::endl;
        }

        void StreamingAudioSource::start()
        {
            std::cout << "Starting the streaming audio resource ..."   << std::endl;
        }

        bool StreamingAudioSource::isAudioResourceValid() const
        {
            return getAudioResource() != "";
        }

    }

}
