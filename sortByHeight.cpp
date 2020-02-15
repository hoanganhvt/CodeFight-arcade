std::vector<int> sortByHeight(std::vector<int> a) {
    vector<int>arr;
    for(int i = 0; i < a.size();i++)
    {
        if(a[i]!=-1)
        {
            arr.push_back(a[i]);
        }
    }
    for(int i = 0; i < arr.size();i++)
    {
        for(int j = 0; j < arr.size();j++)
        {
            if(arr[i]<arr[j])
            {
                swap(arr[i],arr[j]);
            }
        }
    }
    for(int i = 0; i < a.size();i++)
    {
        if(a[i]==-1)
        {
            arr.insert(arr.begin()+i,-1);
        }
    }
    return arr;
}
