#ifndef DOENER_H
#define DOENER_H
#include <string>
struct Doener
{
	static std::string mit(const std::string senf) { return senf == "senf" ? "doener mit senf" : "";  }
};
#endif // DOENER_H