#include    <iostream>
using namespace std;

int main()
{
   int N, M;
   
   cout << "Enter your N, M(0 < N < 10,  1 <= M <= 10): ";
   cin >> N >> M;

   if((0 < N && N < 10) && (1 <= M && M <= 10))
   {
      int a = 1;
      for(int i = 0; i <= M; i++)
      {
            cout << a << " ";
            a *= N;
      }
   }
  
}
