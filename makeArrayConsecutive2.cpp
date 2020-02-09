int makeArrayConsecutive2(std::vector<int> statues) {
    int count = 0;
    for(int i = 0; i < statues.size();i++)
    {
        for(int j = 0; j <statues.size();j++)
        {
            if(statues[i]<statues[j])
            {
                swap(statues[i],statues[j]);
            }
        }
    }
    for(int a = 0; a < statues.size()-1;a++)
    {
        if(statues[a+1]-statues[a]!=1)
        {
            count+=statues[a+1]-statues[a]-1;
        }
    }
    return count;
}
