#include "lasagna_master.h"

namespace lasagna_master {

// TODO: add your solution here

int preparationTime (const std::vector<std::string>& layers, int time) {
    return layers.size() * time;
}

amount quantities (const std::vector<std::string>& layers) {
    amount result{0, 0};
    for(std::string ss : layers) {
        if (ss == "sauce") result.sauce += 0.2;
        else if (ss == "noodles") result.noodles += 50;
    }
    return result;
}

void addSecretIngredient (std::vector<std::string>& mine, const std::vector<std::string>& friends) {
    mine.back() = friends.back();
}

std::vector <double> scaleRecipe (const std::vector<double>& amounts, int portions) {
    std::vector <double> result;
    result.reserve(amounts.size());
    double ratio = portions / 2.0;
    for (double number : amounts) {
        result.emplace_back(number * ratio);
    }
    return result;
}

void addSecretIngredient (std::vector<std::string>& mine, const std::string& whisper) {
    mine.back() = whisper;
}

}  // namespace lasagna_master
