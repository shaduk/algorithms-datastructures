/* https://www.hackerearth.com/code-monk-graph-theory-i/algorithm/monk-at-the-graph-factory/ */

#include <iostream>
using namespace std;

int main()
{
   int N, sum = 0;
   cin >> N;
   int vertices = N;
   while(N--)
   {
   	  int degree;
   	  cin >> degree;
   	  sum = sum + degree;
   }
   int edges = sum / 2;
   if(vertices > edges)
   cout << "Yes" << endl;
   else
   cout << "No" << endl;
}
