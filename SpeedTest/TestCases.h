#pragma once
#include "TestOperation.h"
#include <vector>
struct Random4KFiles
{
	void operator()(std::vector<TestOperation>& test) const;
};

struct BigFile
{
	void operator()(std::vector<TestOperation>& test) const;
};
