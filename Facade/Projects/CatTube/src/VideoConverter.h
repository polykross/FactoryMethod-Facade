//
// Created by @PolinaShlepakova on 18.02.2019.
//

#ifndef CATTUBE_VIDEOCONVERTER_H
#define CATTUBE_VIDEOCONVERTER_H

#include <string>
#include "VideoFramework/VideoFile.h"

class VideoConverter {
public:
	static VideoConverter* getInstance();

	~VideoConverter();
	VideoConverter(const VideoConverter&) = delete;
	VideoConverter& operator=(const VideoConverter&) = delete;

	VideoFile convertVideo(const std::string& filename, const std::string& format);

private:
	static VideoConverter* _instance;
	VideoConverter();

};


#endif //CATTUBE_VIDEOCONVERTER_H
