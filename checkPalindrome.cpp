bool checkPalindrome(std::string inputString) {
    bool is = true;
    string cl;
    for(int i = inputString.size()-1;i>=0;i--)
    {
        cl+=inputString[i];
    }
    
    for(int j = 0; j < inputString.size();j++)
    {
        if(cl[j]!=inputString[j])
        {

           is = false;
            break;
        }
       
    }
    return is;
}