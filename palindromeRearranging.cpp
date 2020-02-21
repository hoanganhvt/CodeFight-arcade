bool palindromeRearranging(std::string inputString) {
    ad:for(int i = 0; i < inputString.length();i++)
    {
        for(int j = i+1;j<inputString.length();j++)
        {
            if(inputString[i]==inputString[j])
            {
                inputString.erase(inputString.begin()+j);
                inputString.erase(inputString.begin()+i);
                goto ad;
            }
        }
    }
    return(inputString.length()==0||inputString.length()==1);
    
}
