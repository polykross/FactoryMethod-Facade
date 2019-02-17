//
// Created by @PolinaShlepakova on 17.02.2019.
//

#include "CatTubeAccount.h"
#include "VideoFramework/VideoFile.h"
#include "VideoConverter.h"
#include <iostream>

const std::string CatTubeAccount::format = "mp4";

CatTubeAccount::CatTubeAccount(const std::string& nickname)
	: _nickname(nickname) {}

CatTubeAccount::~CatTubeAccount() = default;

const std::string& CatTubeAccount::nickname() const {
	return _nickname;
}

void CatTubeAccount::postVideo(const std::string& filename, const std::string& title) {
	VideoFile postFile = VideoConverter::getInstance()->convertVideo(filename, format);
	postFile.save();
	std::cout << "User " << nickname() << " posted new video: " << title << std::endl;
}




