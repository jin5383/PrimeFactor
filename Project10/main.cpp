#include "gmock/gmock.h"

using namespace testing;

int main(void)
{
	testing::InitGoogleMock();

	RUN_ALL_TESTS();
	
	return 0;
}