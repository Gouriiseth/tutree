#include<iostream>
#include<string>
#include<algorithm>

using namespace std;
//find all possible substrings ogf string 1 and string 2
void possiblesubstrg(string A, string B)
{ 
    //x,y stores sixe of A and B resp.
    int m,n; 
    if((m=B.length())>(n=A.length()))
    return;
    
	 for(int i=0;i<n-m;i++)
 {
	 
	if(is_permutation(A.begin() + i, A.begin() +i + m , B.begin()))
	{
		cout<<" substring " <<A.substr(i,m)<<" present at index "<<i<<"\n";
		
	}
 }
}
int main()
{
	string A="XYYZXZYZXXYZ";
	string B="XYZ";
	possiblesubstrg(A,B);
	return 0;
}
