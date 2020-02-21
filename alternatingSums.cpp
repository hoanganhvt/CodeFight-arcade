std::vector<int> alternatingSums(std::vector<int> a) {
    vector<int>arr;
    arr.push_back(0);
    arr.push_back(0);
    for(int i = 0; i < a.size();i+=2)
    {
        arr[0]+=a[i];
    }
    for(int i = 1; i < a.size();i+=2)
    {
        arr[1]+=a[i];
    }
    return arr;
}
