//
// Created by @PolinaShlepakova on 17.02.2019.
//

#include "Codec.h"

Codec::Codec(const std::string& format) : _format(format) {}

Codec::Codec(const VideoFile& file)
	// just an imitation of code that determines format from file
	:_format(file.filename().length() % 2 == 0 ? "mp4" : "ogg") {}

Codec::~Codec() = default;

Codec::Codec(const Codec& other) : _format(other.format()) {}

Codec& Codec::operator=(const Codec& other) {
	_format = other.format();
	return *this;
}

const std::string& Codec::format() const {
	return _format;
}