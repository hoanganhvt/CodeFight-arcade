bool isLucky(int n) {
    int cnt1=0;int cnt2 = 0;
    vector<int>arr;
    while(n>0)
    {
        arr.push_back(n-n/10*10);
        n/=10;
    }
    int i = 0;
    int j = arr.size()-1;
    while(i<j)
    {
        cnt1+=arr[i];
        cnt2+=arr[j];
        i++;
        j--;
    }
    return (cnt1==cnt2);
    
}
