int commonCharacterCount(std::string s1, std::string s2) {
    int cnt = 0;
   for(int i = 0; i < s1.length();i++)
   {
       for(int j = 0; j < s2.length();j++)
       {
           if(s1[i]==s2[j])
           {
               cnt++;
               s2[j] = ' ';
               break;
           }
       }
   }
   return cnt;
}
