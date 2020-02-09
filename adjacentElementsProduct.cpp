int adjacentElementsProduct(std::vector<int> inputArray) {
    int best = inputArray[0]*inputArray[1];
    for(int i = 0;i<inputArray.size()-1;i++)
    {
        int bb = inputArray[i]*inputArray[i+1];
        if(bb>best)
        {
            best = bb;
        }
    }
    return best;
}
