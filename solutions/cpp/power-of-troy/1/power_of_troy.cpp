#include "power_of_troy.h"

namespace troy {
    void give_new_artifact (human& h, const std::string& ss) {
        if(!h.possession) h.possession = std::make_unique<artifact>(ss); 
        h.possession->name = ss; 
    }

    void exchange_artifacts (std::unique_ptr<artifact>& a, std::unique_ptr<artifact>& b) {
        a.swap(b);
    }

    void manifest_power (human& h, const std::string& ss) {
        h.own_power = std::make_shared<power>(ss);
    }

    void use_power (human& caster, human& target) {
        if (!caster.own_power) return;
        else if (!target.influenced_by) target.influenced_by = std::make_shared<power>(caster.own_power->effect);
        target.influenced_by = caster.own_power;
    }

    int power_intensity (const human& h) {
        if (!h.own_power) return 0;
        return h.own_power.use_count();
    }
}  // namespace troy
