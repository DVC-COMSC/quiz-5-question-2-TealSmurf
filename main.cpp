#include    <iostream>
using namespace std;

int main()
{
   int N, M;
   
   cout << "Enter your N, M(0 < N < 10,  1 <= M <= 10): ";
   cin >> N >> M;
   if(0 < N < 10 && 1 <= M <= 10)
   {
      for(int i = 0; i < M; i++)
      {
         if(N = 0)
         {
            cout << 0;
         }  
         else if(i = 0)
         {
            cout << 1;
         }
         else
         {
            for(int i = 0; i < M-1; i++)
            {
               int a = N;
               a *= N;
               cout << a;
            }
         }
      }
   }
  
}
