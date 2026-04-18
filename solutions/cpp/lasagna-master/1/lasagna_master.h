#pragma once
#include <string>
#include <vector>
namespace lasagna_master {

struct amount {
    int noodles;
    double sauce;
};

int preparationTime (const std::vector<std::string>& layers, int time = 2);

amount quantities (const std::vector<std::string>& layers);

void addSecretIngredient (std::vector<std::string>& mine, const std::vector<std::string>& friends);

std::vector <double> scaleRecipe (const std::vector<double>& amounts, int portions);

void addSecretIngredient (std::vector<std::string>& mine, const std::string& whisper);

}  // namespace lasagna_master
