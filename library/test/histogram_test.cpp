#include <gtest/gtest.h>
#include <histogram.h>
#include <string>

TEST(CharacterHistogram, AlphabetCountCaseSensitive) {
    std::string raw_string = "Hello, my name is michael!";
    Histogram greeting_hist(raw_string);
    EXPECT_EQ(2, greeting_hist.count('a'));
    EXPECT_EQ(1, greeting_hist.count('H'));
    EXPECT_EQ(0, greeting_hist.count('z'));
    EXPECT_TRUE(true); 
}