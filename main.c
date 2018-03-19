#include "sound.h"
#include <stdlib.h>

int main(void) {
	while(1){	//loop runs forever
	//run system command "arecord" to recall 1 sec of wav
	system("arecord -r16000 -c1 -f S16_LE -d1 test.wav");
	//display WAV header
	dispWAVHeader("test.wav");
	//display WAV strength as decimal values
	break;	// loop runs just once
	}
	return 0;
}
