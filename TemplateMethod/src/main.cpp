#include "TemplateMethod/FileAudioSource.h"
#include "TemplateMethod/GenericAudioPlayer.h"
#include "TemplateMethod/StreamingAudioSource.h"

using GoF::TemplateMethod::FileAudioSource;
using GoF::TemplateMethod::GenericAudioPlayer;
using GoF::TemplateMethod::StreamingAudioSource;

int main(int argc, char * argv[]) {

    GenericAudioPlayer player;

    FileAudioSource * audioFile = new FileAudioSource();
    audioFile->setAudioResource("/home/ubuntu/Music/Song.mp3");

    player.play(audioFile);
    player.stop(audioFile);

    StreamingAudioSource * audioStreaming = new StreamingAudioSource();
    audioStreaming->setAudioResource("http://live-aacplus-64.kexp.org/kexp64.aac");

    player.play(audioStreaming);
    player.stop(audioStreaming);


    delete audioFile;
    delete audioStreaming;

    return 0;

}
