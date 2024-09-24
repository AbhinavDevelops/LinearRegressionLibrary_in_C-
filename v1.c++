#include <stdlib.h>
#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#define print(x) std::cout << x << std::endl;

void print_vector(const std::vector<float> &a)
{

    for (auto i : a)
    {

        print(i);
    }
}

void read_file(const std::string $fileName)
{

    std::ifstream fin($fileName);

    if (!fin)
    {

        std::cerr << "Error opening file!" << std::endl;
    }

    std::string line;

    // Read the file line by line
    while (std::getline(fin, line))
    {
        print(line)
    }

    // Close the file after reading
    fin.close();
}

int main(int argc, char *argv[])

{
    if (argc <= 1)
    {

        print("You have not entered a fileNmae");
        return EXIT_FAILURE;
    }
    std::string fileName = argv[1];

    std::vector<float> x = {1.1, 2.2, 3.3};

    std::vector<float> y = {1.3, 1.2, 4.5};

    print("hi");
    print_vector(x);

    read_file(fileName);
}
