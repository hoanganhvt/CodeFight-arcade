std::vector<int> thuTu(string inputString)
{
vector<int>a;
int i = 0;
while (inputString[i] != 0)
{
if (inputString[i] == '(')
{
a.push_back(i);
}
i++;
}
return a;
}
std::string tachVaGanChuoi(string& inputString, int i, int k)
{
string a, b, c;
a = inputString.substr(0, i);
b = inputString.substr(i + 1, k - i-1);
c = inputString.substr(k + 1);
for (int i = 0; i < b.size()/2; i++)
{
char tam;
tam = b[i];
b[i] = b[b.size() - 1 - i];
b[b.size() - 1 - i] = tam;

}
inputString = a + b + c;
return inputString;
}
std::string xuLyChuoi(string &inputString)
{
vector<int>a = thuTu(inputString);
int k = a.back();
int i = k;
while (inputString[i] != 0)
{
if (inputString[i] == ')')
{
break;
}
i++;
}
//luc nay i chinh la diem cuoi,k la diem dau
inputString = tachVaGanChuoi(inputString, k, i);
return inputString;
}
std::string reverseInParentheses(std::string inputString) {
vector<int>a=thuTu(inputString);
for (int i = 0; i < a.size(); i++)
{
xuLyChuoi(inputString);
}
return inputString;
}