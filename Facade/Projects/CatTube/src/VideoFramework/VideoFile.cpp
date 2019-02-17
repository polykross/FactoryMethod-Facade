//
// Created by polia on 17.02.2019.
//

#include "VideoFile.h"

VideoFile::VideoFile(const std::string& filename)
	: _filename(filename) {}

VideoFile::VideoFile(const VideoFile& other)
	: _filename(other.filename()) {}

VideoFile& VideoFile::operator=(const VideoFile& other) {
	if (this == &other) {
		return *this;
	}
	_filename = other.filename();
	return *this;
}

const std::string& VideoFile::filename() const {
	return _filename;
}

void VideoFile::save() {

}

VideoFile::~VideoFile() = default;


