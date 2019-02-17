//
// Created by @PolinaShlepakova on 17.02.2019.
//

#ifndef CATTUBE_VIDEOFILE_H
#define CATTUBE_VIDEOFILE_H

#include <string>

class VideoFile {
public:
	explicit VideoFile(const std::string& filename);
	~VideoFile();

	VideoFile(const VideoFile& other);
	VideoFile& operator=(const VideoFile& other);

	const std::string& filename() const;
	void save();

private:
	std::string _filename;
	std::string _format;

};


#endif //CATTUBE_VIDEOFILE_H
