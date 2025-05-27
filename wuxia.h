#include <Windows.h>
#include <iostream>
#include <vector>
#include <set>
#include "byte.h"
#include "util.h"
#include "apc.h"

inline std::wstring WuXiaName(L"WuXia_Client_dx12.exe");

inline std::set<HANDLE> WuXiaId = {};

inline std::string FilePath = {};

inline __int8 DrawMode = 'I';

void __WuXia(int argc, char* argv[]);

bool __GetWuXiaProcess();

void __call_rip(MappingParameter* Parameter);
