//date -:8feb
#include <bits/stdc++.h>
using namespace std;
void printUnion(int a[], int n, int b[], int m)
{
	map<int, int> mp;

	
	for (int i = 0; i < n; i++)
		mp.insert({ a[i], 1 });

	for (int i = 0; i < m; i++)
  {	
       if(mp.find(b[i]) != mp.end())
    {
        (mp.find(b[i]))->second++; 
    }
    else
    {    
        mp.insert({ b[i], 1 });
    }
    
    }
    
	cout << "The union" << endl;
	for (auto itr = mp.begin(); itr != mp.end(); itr++)
		cout << itr->first<< " ";
    cout<<" the union" << endl;
    for (auto itr= mp.begin();itr != mp.end();itr++)
    {     if(itr->second>1)
          cout<<itr->first<<" ";
    }    

}

int main()
{
	int a[7] = { 1, 2, 5, 6, 2, 3, 5 };
	int b[9] = { 2, 4, 5, 6, 8, 9, 4, 6, 5 };
	printUnion(a, 7, b, 9);
}
