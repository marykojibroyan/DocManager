#ifndef DOCMANAGER_H
#define DOCMANAGER_H
#include <string>
#include <vector>

class DocManager {

public:
	void create();
	void edit(const std::string& context);
	void view();
	void show();

private:
	std::vector<std::string> files;
};
#endif
