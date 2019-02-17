//
// Created by @PolinaShlepakova on 17.02.2019.
//

#ifndef CATTUBE_BITRATEREADER_H
#define CATTUBE_BITRATEREADER_H

#include <string>
#include "Codec.h"
#include "VideoFile.h"

class BitrateReader {
public:
	BitrateReader(const std::string& filename, const Codec& codec);
	~BitrateReader();
	BitrateReader(const BitrateReader&) = delete;
	BitrateReader& operator=(const BitrateReader&) = delete;

	const std::string filename() const;
	const Codec& codec() const;

	void convertTo(const Codec& destCodec);
	VideoFile extract() const;

private:
	std::string _filename;
	Codec _codec;

};


#endif //CATTUBE_BITRATEREADER_H
