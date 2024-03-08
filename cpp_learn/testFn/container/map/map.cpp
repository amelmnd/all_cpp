#include <iostream>
#include <map>

int main() {
    // Déclaration d'un std::map avec une clé de type int et une valeur de type std::string
    std::map<int, std::string> mapExemple;

    // Insertion de quelques paires clé-valeur
    mapExemple[1] = "Un";
    mapExemple[2] = "Deux";
    mapExemple[3] = "Trois";

    // Utilisation de la méthode find pour rechercher une clé spécifique
    auto it = mapExemple.find(2);
    if (it != mapExemple.end()) {
        std::cout << "La valeur associée à la clé 2 est : " << it->second << std::endl;
    } else {
        std::cout << "Clé 2 non trouvée dans le map." << std::endl;
    }

    // Tentative de recherche d'une clé inexistante
    it = mapExemple.find(4);
    if (it != mapExemple.end()) {
        std::cout << "La valeur associée à la clé 4 est : " << it->second << std::endl;
    } else {
        std::cout << "Clé 4 non trouvée dans le map." << std::endl;
    }

    return 0;
}