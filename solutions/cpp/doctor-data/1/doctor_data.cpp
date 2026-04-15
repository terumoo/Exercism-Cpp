// ERROR: FILE CORRUPTED. Please supply valid C++ Code.

/*hp4,ölacöiömthö%Äsmaö%Äsubö(311040ö%Äspaö%Äaddö(311040ö%Ädacöiömthö%Äcountö.hpt,hp4ö%Äxctöhd2ö%Ädacöiöma1
hp2,öjmpö.*/

#include "doctor_data.h"

heaven::Vessel::Vessel (std::string n, int i, star_map::System s) : name{n}, generation{i}, current_system{s}, busters{0} {}

heaven::Vessel heaven::Vessel::replicate (std::string s) {
    Vessel result = Vessel{s, this->generation + 1, this->current_system};
    return result;
}

void heaven::Vessel::make_buster () {
    this->busters++;
}

bool heaven::Vessel::shoot_buster () {
    if (this->busters > 0) {
        this->busters--;
        return true;
    }
    return false;  
}

std::string heaven::get_older_bob (Vessel first, Vessel second) {
    return (first.generation < second.generation) ? first.name : second.name;

}

bool heaven::in_the_same_system (Vessel first, Vessel second) {
    return first.current_system == second.current_system;
}
