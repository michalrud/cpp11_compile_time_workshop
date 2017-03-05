#include <iostream>
#include <string>
#include <map>

using TranslateString = std::map<std::string, std::string>;
using TranslateInt    = std::map<int, std::string>;
using TranslateBool   = std::map<bool, std::string>;

TranslateBool boolEnglish = {
	{true, "true"},
	{false, "false"}
};
TranslateInt intEnglish = {
	{1, "one"},
	{2, "two"},
	{3, "three"}
};
TranslateString polishToEnglish = {
	{"Czesc", "Hello"},
	{"Zegnaj", "Goodbye"}
};

int main() {
	std::cout << polishToEnglish["Czesc"] << " "
		<< intEnglish[2] << " " << boolEnglish[true] << std::endl;	
}
