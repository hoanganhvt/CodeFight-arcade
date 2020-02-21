int arrayChange(std::vector<int> inputArray) {
   int tt = 0;
   for(int i = 0; i < inputArray.size()-1;i++)
   {
       int j = i+1;
       if(inputArray[i]>=inputArray[j])
       {
          tt += inputArray[i]+1-inputArray[j];
          inputArray[j]+=inputArray[i]+1-inputArray[j];
       }
   }
   return tt;
}