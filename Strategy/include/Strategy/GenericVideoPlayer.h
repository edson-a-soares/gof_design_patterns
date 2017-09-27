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

#ifndef GOF_STRATEGY_GENERIC_VIDEO_PLAYER_H
#define GOF_STRATEGY_GENERIC_VIDEO_PLAYER_H

#include <set>
#include <string>
#include "Strategy/IVideoStrategy.h"

namespace GoF {

    namespace Strategy {

        class GenericVideoPlayer
        {
        public:
            GenericVideoPlayer();
            ~GenericVideoPlayer();

            void init();
            void play();
            void stop();
            std::string getFileExtension() const;
            void setFileExtension(const std::string &);

        private:
            IVideoStrategy * strategy;
            std::string fileExtension;
            std::set<std::string> videoFormats;

            void beforePlaying();
            void setStrategy(IVideoStrategy *);
            bool isFileExtensionAvailable(const std::string &);

        };

    }

}

#endif
