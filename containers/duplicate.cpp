#include <iostream>
#include <unordered_set>

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 5, 6, 7, 7, 8};
    int n = sizeof(arr) / sizeof(int);

    std::unordered_set<int> set;
    std::cout << "Duplicates: ";
    for (int i = 0; i < n; ++i)
    {
        if (set.find(arr[i]) != set.end())
        {
            std::cout << arr[i] << " ";
        }
        else
        {
            set.insert(arr[i]);
        }
    }
    std::cout << std::endl;

    return 0;
}
