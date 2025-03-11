#include <unordered_map>
#include <string>
#include <vector>
#include <utility>

namespace helper {

void print();

static std::vector<std::pair<std::string, std::string>> japanese_to_romaji_kanji =
{
    {"日", "nichi"},
    {"月", "tsuki"},
    {"火", "hi"},
    {"水", "mizu"},
    {"木", "ki"},
    {"金", "kin"},
    {"土", "do"},
    {"天", "ten"},
    {"山", "yama"},
    {"川", "kawa"},
    {"人", "hito"},
    {"雨", "ame"}
};

static std::vector<std::pair<std::string, std::string>> english_japanese_kanji =
{
    {"day","日"},
    {"moon", "月"},
    {"fire", "火"},
    {"water", "水"},
    {"tree", "木"},
    {"gold", "金"},
    {"soil", "土"},
    {"heaven", "天"},
    {"mountain", "山"},
    {"river", "川"},
    {"person", "人"},
    {"rain", "雨"}
};

void play_game(int option);

}