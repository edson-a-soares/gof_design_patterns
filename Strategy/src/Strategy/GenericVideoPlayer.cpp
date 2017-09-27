#include <iostream>
#include "Strategy/AVIStrategy.h"
#include "Strategy/FLVStrategy.h"
#include "Strategy/MKVStrategy.h"
#include "Strategy/MOVStrategy.h"
#include "Strategy/MP4Strategy.h"
#include "Strategy/GenericVideoPlayer.h"

namespace GoF {

    namespace Strategy {

        GenericVideoPlayer::GenericVideoPlayer()
            : fileExtension(".mp4"),
              videoFormats { }
        {
            init();
        }

        GenericVideoPlayer::~GenericVideoPlayer()
        {
            delete strategy;
        }

        void GenericVideoPlayer::init()
        {
            videoFormats.insert(".avi");
            videoFormats.insert(".flv");
            videoFormats.insert(".mkv");
            videoFormats.insert(".mov");
            videoFormats.insert(".mp4");
        }

        void GenericVideoPlayer::play()
        {
            std::cout << "\nPlaying a video file..." << std::endl;
            beforePlaying();
            strategy->execute();
        }

        void GenericVideoPlayer::stop()
        {
            std::cout << "stopped." << std::endl;
        }

        void GenericVideoPlayer::setStrategy(IVideoStrategy * _strategy)
        {
            strategy = _strategy;
        }

        void GenericVideoPlayer::setFileExtension(const std::string & extension)
        {
            fileExtension = extension;
        }

        std::string GenericVideoPlayer::getFileExtension() const
        {
            return fileExtension;
        }

        bool GenericVideoPlayer::isFileExtensionAvailable(const std::string & extension)
        {
            return videoFormats.find(extension) != videoFormats.end();
        }

        void GenericVideoPlayer::beforePlaying()
        {

            if( !isFileExtensionAvailable(getFileExtension()) ){
                std::cout << getFileExtension() << " is not a supported video format." << std::endl;
                exit(1);
            }

            if ( getFileExtension() == ".avi" ) setStrategy(new AVIStrategy());
            if ( getFileExtension() == ".flv" ) setStrategy(new FLVStrategy());
            if ( getFileExtension() == ".mkv" ) setStrategy(new MKVStrategy());
            if ( getFileExtension() == ".mov" ) setStrategy(new MOVStrategy());
            if ( getFileExtension() == ".mp4" ) setStrategy(new MP4Strategy());

        }

    }

}
