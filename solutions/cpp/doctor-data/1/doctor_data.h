// ERROR: FILE CORRUPTED. Please supply valid C++ Code.

/*hp1, üapöhp2ö % Äcountöiöma1,
    öhp2ö % Älawöhp3öö / önextöstepö % Ädacöiöml1ö % Älawö7ö % Ädacöiömb1ö %
        Ärandomöö % Äscrö9sö % Äsirö9sö % Äxctöhr1ö % Äaddöiömx1ö %
        Ädacöiömx1ö % Äswapö % Äaddöiömy1ö % Ädacöiömy1ö % Ärandomö % Äscrö9sö %
        Äsirö9sö % Äxctöhr2ö % Ädacöiömdyö % Ädioöiömdxö % Äsetupö.hpt,
    3ö % Älacöranö % Ädacöiömth*/
#include <string>

namespace star_map {
    enum class System {
        Sol,
        BetaHydri,
        EpsilonEridani,
        AlphaCentauri,
        DeltaEridani,
        Omicron2Eridani
    };    
}

namespace heaven {
    class Vessel {
    public:
        std::string name;
        int generation;
        star_map::System current_system;
        int busters;
        Vessel (std::string n, int i, star_map::System s = star_map::System::Sol);
        Vessel replicate (std::string s);
        void make_buster ();
        bool shoot_buster ();
    };

    std::string get_older_bob (Vessel first, Vessel second);
    bool in_the_same_system (Vessel first, Vessel second);
}