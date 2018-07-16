#include <iostream>
#include <fstream>
 
using namespace std;
 
int main()
{ 
    char ch; 
    int cnt = 0; 
    int max = 0;
    int b = 0;
    char s[100]; 
    
    ifstream fin("INPUT.txt"); 
    ofstream fout("OUTPUT.txt");
    
    while((fin.get(ch)) && (!fin.eof()))
    {
        s[cnt] = ch;
        cnt++;
    }
 	
 	for(int i = 0; i < cnt; i++){
 		if (s[i] == '1')
            b++;
            if(s[i]=='0'){ 
				if(max<b)
				max=b; 
				b=0; 
				} 
	 }
 	
    fout << max;
    cout << max;
 
    fin.close();
    fout.close();
    return 0;
}
