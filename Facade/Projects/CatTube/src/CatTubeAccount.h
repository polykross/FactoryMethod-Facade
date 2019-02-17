//
// Created by @PolinaShlepakova on 17.02.2019.
//

#ifndef CATTUBE_CAT_TUBE_ACCOUNT_H
#define CATTUBE_CAT_TUBE_ACCOUNT_H

#include <string>

class CatTubeAccount {
public:
	explicit CatTubeAccount(const std::string& nickname);
	~CatTubeAccount();
	CatTubeAccount(const CatTubeAccount&) = delete;
	CatTubeAccount& operator=(const CatTubeAccount&) = delete;

	const std::string& nickname() const;
	void postVideo(const std::string& filename, const std::string& title);

private:
	static const std::string format;
	const std::string _nickname;

};


#endif //CATTUBE_CAT_TUBE_ACCOUNT_H
