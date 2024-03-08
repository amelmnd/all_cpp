#include "replaceInFile.hpp"

std::string recoverFileContent(const char *path)
{
	std::ifstream file(path);
	std::string line;
	std::string fileContent;
	if (!file.is_open())
	{
		std::cout << "Error: invalid file" << std::endl;
		return ("");
	}
	while (std::getline(file, line))
		fileContent += line;
	file.close();
	return (fileContent);
}

int searchOccurrence(std::string fileContent, std::string search, size_t start)
{
	size_t index = fileContent.find(search, start);
	if ((index = fileContent.find(search, start)) != std::string::npos)
		return (index);
	else
		return (-1);
}

std::string ft_replace(std::string fileContent, std::string search, std::string replace, int indexOccurrence)
{
	std::string newContent;

	newContent = fileContent.erase(indexOccurrence, search.length());
	newContent = newContent.insert(indexOccurrence, replace);
	return (newContent);
}

void generateNewFile(std::string file, std::string newContent)
{
	std::string fileName = file;

	if (searchOccurrence(fileName, ".", 0) >= 0)
		fileName = fileName.insert(searchOccurrence(fileName, ".", 0), ".replace");
	else
		fileName = fileName + ".replace";

	std::ofstream newFile(fileName.c_str());
	newFile << newContent;
}

std::string checkAllFile(std::string newContent, std::string search, std::string replace, int indexOccurrence)
{
	while (indexOccurrence >= 0)
	{
		newContent = ft_replace(newContent, search, replace, indexOccurrence);
		indexOccurrence = searchOccurrence(newContent, search, indexOccurrence + 1);
	}
	return (newContent);
}