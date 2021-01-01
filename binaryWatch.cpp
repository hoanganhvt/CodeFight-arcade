#include<iostream>
#include<vector>
using namespace std;
int arr[11];
int cnt;
string hour="          ";
vector<string>result;
void inDay(){
    for(int i = 1; i <= 10;i++){
        cout << arr[i];
        if(i == 4){
            cout << ":";
        }
    }
    cout << endl;
}
string transfer(){

}
void Try(int i,int N){
    for(int j = 0; j <= 1;j++){
        if(j == 1){
            cnt+=1;
            if(cnt <= N){
                arr[i] = 1;
                hour[i-1] = '1';
            }
        }
        else if(j != 1 || cnt > N){
            arr[i] = 0;
            hour[i-1] = '0';
        }
        if(i == 10 && cnt == N){
            inDay();
            cout << hour << endl;
        }
        if(i < 10){
            Try(i+1,N);
        }
        if(j == 1){
            cnt -= 1;
        }
    }
}
int main(){
    cnt = 0;
    Try(1,1);
}
