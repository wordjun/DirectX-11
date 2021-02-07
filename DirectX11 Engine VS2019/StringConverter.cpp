#include "StringConverter.h"

std::wstring StringConverter::StringToWide(std::string str) {
	std::wstring wide_String(str.begin(), str.end());
	return wide_String;
}