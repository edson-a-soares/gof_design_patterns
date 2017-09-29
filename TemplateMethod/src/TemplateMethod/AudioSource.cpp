#include <iostream>
#include "TemplateMethod/AudioSource.h"

namespace GoF {

    namespace TemplateMethod {

        AudioSource::AudioSource()
            : audioSource("")
        { }

        void AudioSource::execute()
        {

            if ( !this->isAudioResourceValid() ) {
                std::cout << audioSource << " is not a valid audio resource." << std::endl;
                exit(1);
            }

            this->open();
            this->start();

        }

        void AudioSource::setAudioResource(const std::string & source)
        {
            audioSource = source;
        }

        std::string AudioSource::getAudioResource() const
        {
            return audioSource;
        }

    }

}
