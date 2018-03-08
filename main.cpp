#include <iostream>
#include <fstream>
#include <dirent.h>
#include <string>
#include <stdio.h>
#include <vector>
#include <map>

int main(int argc, char** argv) {
    //TODO: Let this use an arg for directory
    char data_dir[1024] = "data";
    DIR *dir;
    struct dirent *dp;
    std::vector<std::string> files;

    dir = opendir(data_dir);
    while ((dp = readdir(dir)) != NULL) {
        files.push_back(dp->d_name);
    }
    closedir(dir);

    // Remove directory navigation
    files.erase(files.begin());
    files.erase(files.begin());

    size_t i = 0;
    while (i < files.size()) {
        std::printf("File found: %s\n", files.at(i).c_str());
        i++;
    }

    //TODO: do stuff with args
    //TODO: implement flags


    return 0;
}
