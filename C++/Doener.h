#pragma once
#include <string>
#include <algorithm>
struct Doener
{
	static std::string mit(std::string senf) {return senf == "senf" ? "doener mit senf" : "doener ohne senf :("; }
};