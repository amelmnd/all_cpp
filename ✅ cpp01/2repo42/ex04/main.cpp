#include "replaceInFile.hpp"

int main(int argc, char *argv[])
{
	if (argc != 4)
	{
		std::cout << "Usage: " << argv[0] << " <file> <search word> <replace word>" << std::endl;
		return (1);
	}
	std::string fileContent = recoverFileContent(argv[1]);
	if (!fileContent.length())
		return (0);
	std::string newContent = fileContent;

	int indexOccurrence = searchOccurrence(fileContent, argv[2], 0);

	if (indexOccurrence >= 0)
		newContent = checkAllFile(fileContent, argv[2], argv[3], indexOccurrence);
	generateNewFile(argv[1], newContent);

	return (0);
}
