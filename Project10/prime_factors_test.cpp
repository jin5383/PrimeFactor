#include "gmock/gmock.h"
#include "prime_factors.cpp"
#include <vector>

using std::vector;
class PrimeFixture : public testing::Test
{
public:
	PrimeFactors prime_factor;
	vector<int> expected;

};
TEST_F(PrimeFixture, Of1)
{
	expected = {};
	EXPECT_EQ(expected, prime_factor.of(1));
}

TEST_F(PrimeFixture, Of12)
{
	expected = { 2,2,3 };
	EXPECT_EQ(expected, prime_factor.of(12));
}

TEST_F(PrimeFixture, Of2)
{
	expected = { 2 };
	EXPECT_EQ(expected, prime_factor.of(2));
}

TEST_F(PrimeFixture, Of9)
{
	expected = { 3,3 };
	EXPECT_EQ(expected, prime_factor.of(9));
}

TEST_F(PrimeFixture, Of30)
{
	expected = { 2,3,5 };
	EXPECT_EQ(expected, prime_factor.of(30));
}

TEST_F(PrimeFixture, Of100)
{
	expected = { 2,2,5,5 };
	EXPECT_EQ(expected, prime_factor.of(100));
}

TEST_F(PrimeFixture, Of97)
{
	expected = { 97 };
	EXPECT_EQ(expected, prime_factor.of(97));
}