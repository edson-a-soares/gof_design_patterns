#include "Decorator/MediaStereoDecorator.h"

namespace GoF {

    namespace Decorator {

        MediaStereoDecorator::MediaStereoDecorator(ICar * car)
            : CarDecorator(car, 250.75, "\n\twith Digital Media Stereo")
        { }

    }

}
