//
// Created by @PolinaShlepakova on 17.02.2019.
//

#include "BitrateReader.h"
#include <iostream>

BitrateReader::BitrateReader(const std::string& filename, const Codec& codec)
	: _filename(filename), _codec(codec) {}

BitrateReader::~BitrateReader() = default;

void BitrateReader::convertTo(const Codec& destCodec) {
	_filename += "_";
	_codec = destCodec;
}

VideoFile BitrateReader::extract() const {
	std::cout << "New VideoFile : " << filename() << '.' << codec().format() << std::endl;
	return VideoFile(filename());
}

const std::string BitrateReader::filename() const {
	return _filename;
}

const Codec& BitrateReader::codec() const {
	return _codec;
}