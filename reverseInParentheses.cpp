std::string reverseInParentheses(std::string inputString) {
    string result;
    stack<string>tmpStr;
    for(int i = 0; i < inputString.length();i++)
    {
        if(inputString[i]!='('&&inputString[i]!=')')
        {
            result+=inputString[i];
        }
        else if(inputString[i]=='(')
        {
            tmpStr.push(result);
            result = "";
        }
        else if(inputString[i]==')')
        {
            reverse(result.begin(),result.end());
            result = tmpStr.top()+result;
            tmpStr.pop();
        }
    }
    return result;
}
