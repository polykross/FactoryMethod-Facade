//
// Created by @PolinaShlepakova on 18.02.2019.
//

#ifndef CATTUBE_VIDEOCONVERTER_H
#define CATTUBE_VIDEOCONVERTER_H

#include <string>
#include "VideoFramework/VideoFile.h"

class VideoConverter {
public:
	VideoConverter();
	~VideoConverter();
	VideoConverter(const VideoConverter&) = delete;
	VideoConverter& operator=(const VideoConverter&) = delete;

	VideoFile convertVideo(const std::string& filename, const std::string& format);

};


#endif //CATTUBE_VIDEOCONVERTER_H
