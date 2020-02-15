#include <cstring>
std::vector<std::string> allLongestStrings(std::vector<std::string> inputArray) {
    vector<string>arr;
    int max_size = inputArray[0].length();
    for(int i = 1; i < inputArray.size();i++)
    {
        if(inputArray[i].length()>max_size)
        {
            max_size = inputArray[i].length();
        }
    }
    for(int i = 0; i < inputArray.size();i++)
    {
        if(inputArray[i].length()>=max_size)
        {
            arr.push_back(inputArray[i]);
        }
    }
    return arr;
}
