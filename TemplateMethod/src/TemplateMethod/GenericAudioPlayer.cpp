#include "TemplateMethod/GenericAudioPlayer.h"

namespace GoF {

    namespace TemplateMethod {

        void GenericAudioPlayer::play(AudioSource * source)
        {
            source->execute();
        }

        void GenericAudioPlayer::stop(AudioSource * source)
        {
            source->close();
        }

    }

}
