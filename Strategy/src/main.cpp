#include "Strategy/GenericVideoPlayer.h"

using GoF::Strategy::GenericVideoPlayer;

int main(int argc, char * argv[]) {

    GenericVideoPlayer player;

    player.setFileExtension(".mp4");
    player.play();
    player.stop();

    player.setFileExtension(".mkv");
    player.play();
    player.stop();

    player.setFileExtension(".avi");
    player.play();
    player.stop();

    player.setFileExtension(".flv");
    player.play();
    player.stop();

    player.setFileExtension(".mov");
    player.play();
    player.stop();

    player.setFileExtension(".wmv");
    player.play();

    return 0;

}
