#include <vector>
#include <iostream>
int main()
{
    std::vector <int> v = {5,6,1,4,3,0,2};
    std::cout << "[" << v[0] << ", " << v[1] << ", " << v[2] << ", " << v[3] << ", " << v[4] <<  "]" << std::endl;  
    
    int last;
    bool haslast = false;
    size_t i = 0;
    size_t k = 0;
    std::vector<int> low;
    std::vector<int> big;
    if (v.size() % 2 != 0)
    {
        haslast = true;
        last = v[v.size() - 1];
        v.pop_back();
        std::cout << "last = " << last << std::endl;
    }
    // while(k < v.size())
    // {
    //     std::cout << "v = " << v[k] << std::endl;
    //     k++;
    // }
    // k = 0;
    while (i + 1 < v.size())
    {
        if (v[i] > v[i + 1])
        {
            low.push_back(v[i + 1]);
            big.push_back(v[i]);
        }
        else
        {
            low.push_back(v[i]);
            big.push_back(v[i + 1]);
        }
        i += 2;
        k++;
    }
    std::cout << std::endl;
    k = 0;
    while(k < low.size())
    {
        std::cout << "low = " << low[k] << std::endl;
        k++;
    }
    std::cout << std::endl;
    k = 0;
    while(k < big.size())
    {
        std::cout << "big = " << big[k] << std::endl;
        k++;
    }
}