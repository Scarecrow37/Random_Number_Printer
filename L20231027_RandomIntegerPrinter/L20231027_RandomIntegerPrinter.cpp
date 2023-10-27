#include <iostream>
#include <random>

// 1 ~ 52
int main(int argc, char* argv[])
{
    int numbers[4] = {0,0,0,0};
    srand(time(nullptr));

    int pivot = 0;
    while(numbers[3] == 0)
    {
        bool is_new_number = true;
        const int random_number = rand() % 53;
        for (const int number : numbers)
        {
            if (number == random_number)
            {
                is_new_number = false;
                break;
            }
        }
        if (is_new_number)
        {
            numbers[pivot] = random_number;
            pivot++;
        }
    }

    for (const int number : numbers)
    {
        std::cout << number << ' ';
    }

    std::cout << std::endl;

    return 0;
}
