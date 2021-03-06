//
// Created by @PolinaShlepakova on 18.02.2019.
//

#include "VideoConverter.h"
#include "VideoFramework/Codec.h"
#include "VideoFramework/BitrateReader.h"

VideoConverter* VideoConverter::_instance = 0;

VideoConverter* VideoConverter::getInstance() {
	if (_instance == 0) {
		_instance = new VideoConverter();
	}

	return _instance;
}

VideoConverter::VideoConverter() = default;
VideoConverter::~VideoConverter() = default;

VideoFile VideoConverter::convertVideo( const std::string& filename,
										const std::string& format) {
	VideoFile file(filename);
	Codec srcCodec(file);
	Codec destCodec(format);
	BitrateReader buffer(filename, srcCodec);
	buffer.convertTo(destCodec);
	return buffer.extract();
}
