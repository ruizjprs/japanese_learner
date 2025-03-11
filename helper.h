#include <unordered_map>
#include <string>
#include <vector>
#include  <utility>


namespace helper{

void print();


static std::vector<std::pair<std::string, std::string >> english_to_japanese_kanji =
{
    {"nichi" , "日"},
    {"tsuki", "月"},
    {"hi", "火"},
    {"mizu", "水"},
    {"ki", "木"},
    {"kin", "金"},
    {"do", "土"},
    {"ten", "天"},
    {"yama", "山"},
    {"kawa", "川"},
    {"hito", "人"},
    {"ame", "雨"}
}; 



void play_game(int option);

}