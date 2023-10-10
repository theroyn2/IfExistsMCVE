#include "B.h"

#include "macros.h"

int B::hello()
{
	auto foo = [this]() -> void
	{
		ReadValueDef(3);
	};
	foo();
	return 5;
}