#include <fstream>
#include <iostream>
#include <string>

#ifndef REPLACE_IN_FILE_HPP
#define REPLACE_IN_FILE_HPP

int searchOccurrence(std::string fileContent, std::string search, size_t start);

std::string recoverFileContent(const char *path);

std::string ft_replace(std::string fileContent, std::string search, std::string replace, int indexOccurrence);

std::string checkAllFile(std::string newContent, std::string search, std::string replace, int indexOccurrence);

void generateNewFile(std::string file, std::string newContent);

#endif