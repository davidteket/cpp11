#include <string>
#include <iostream>
#include <fstream>

#include "gtest/gtest.h"

#include "write_integers_to_file.h"

TEST(WriteIntegersToFile, IsValidFileContents)
{
    // Arrange:
    //
    std::string expected = std::string();

    for (int i = 0; i < 1000; ++i)
    {
        expected += std::to_string(i);
        if ((i % 10) == 0)
          expected += '\n';
        else
          expected += ' ';
    }

    // Act:
    //
    WriteIntegersToFile();

    std::string actual = std::string();
    std::string path = std::string();
    std::cout << "Enter the path for output file to be tested: "; std::cin >> path;
    std::ifstream file { path };

    std::string line = std::string();
    int linebreaks = 0;

    while (getline(file, line))
    {
        actual += line;
        ++linebreaks;

        line = std::string();
    }

    int bytes = actual.length() + linebreaks;

    // Assert:
    //
    // 1 char => 1 byte
    // [0..9] == 10 bytes
    // [10..99] == 180 bytes
    // [100..999] == 2700 bytes
    // \n == 101 bytes
    // ' ' == 900 bytes
    // expected sum => 3890 bytes
    //
    EXPECT_EQ(3891, bytes);
}
