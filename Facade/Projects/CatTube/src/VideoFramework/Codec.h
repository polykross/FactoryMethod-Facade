//
// Created by @PolinaShlepakova on 17.02.2019.
//

#ifndef CATTUBE_CODEC_H
#define CATTUBE_CODEC_H

#include <string>
#include "VideoFile.h"

class Codec {
public:
	explicit Codec(const std::string& format);
	explicit Codec(const VideoFile& file);
	~Codec();
	Codec(const Codec& other);
	Codec& operator=(const Codec& other);

	const std::string& format() const;

private:
	std::string _format;

};


#endif //CATTUBE_CODEC_H
