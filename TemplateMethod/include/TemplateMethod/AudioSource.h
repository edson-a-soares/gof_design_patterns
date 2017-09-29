/*
 * (C) Copyright 2017 Edson (http://edsonaraujosoares.com) and others.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
 * Contributors:
 *     Edson Araújo Soares
 */

#ifndef GOF_TEMPLATE_METHOD_AUDIO_SOURCE_H
#define GOF_TEMPLATE_METHOD_AUDIO_SOURCE_H

#include <string>

namespace GoF {

    namespace TemplateMethod {

        class AudioSource
        {
        public:
            AudioSource();
            virtual ~AudioSource()
            { }

            void execute();

            virtual void open() = 0;
            virtual void close() = 0;
            virtual void start() = 0;
            virtual bool isAudioResourceValid() const = 0;

            std::string getAudioResource() const;
            void setAudioResource(const std::string &);

        private:
            std::string audioSource;

        };

    }

}

#endif
