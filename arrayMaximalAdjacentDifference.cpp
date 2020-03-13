int arrayMaximalAdjacentDifference(std::vector<int> inputArray) {
    int max = 0;
    for(int i = 0; i < inputArray.size()-1;i++)
    {
        int etm = inputArray[i] - inputArray[i+1];
        if(etm<0)
        {
            etm*=-1;
        }
        if(etm>max)
        {
            max  = etm;
        }
    }
    return max;
}
