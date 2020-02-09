bool almostIncreasingSequence(std::vector<int> sequence) {
    int cnt = 0;
    bool con = true;
for(int i=0; i<sequence.size()-1; i++){
if(sequence[i] >= sequence[i+1]){
cnt++;
if(sequence[i-1]>=sequence[i+1] && i-1>=0&& sequence[i]>=sequence[i+2] && i+2<sequence.size()) {
cnt++;
}
}
}
if(cnt>1){
con = false;

}
return con;
}