#include <iostream>
#include <map>

void maxElement(int *arr, int s)
{
    std::map<int, int> maxE;

    int maxInt = 0;
    int maxIntVal = 0;

    for(int i = 0; i <= s; i++)
    {
        maxE[arr[i]]++;
    }

    for(const auto &p : maxE)
    {
        std::cout << "key: " << p.first;
        std::cout << " value: " << p.second << std::endl;
        if(p.second > maxIntVal)
        {
            maxIntVal = p.second;
            maxInt = p.first;
        }
    }

    std::cout << "частое число: " << maxInt << std::endl;
    std::cout << "количество повторов: " << maxIntVal << std::endl;
}

int main(void)
{
    int n;
    std::cout << "n: ";
    std::cin >> n;
    int arr[n];
    int s = sizeof(arr) / sizeof(arr[0]);

    for(int i = 0; i <= s; i++)
    {
        std::cin >> arr[i];
    }

    maxElement(arr, s);
}
