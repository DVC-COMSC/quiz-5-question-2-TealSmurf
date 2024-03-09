#include    <iostream>
using namespace std;

int main()
{
   int N, M;
   
   cout << "Enter your N, M(0 < N < 10,  1 <= M <= 10): ";
   cin >> N >> M;

   if((0 < N && N < 10) && (1 <= M && M <= 10))
   {
      for(int i = 0; i < M; i++)
      {
         if(i == 0)
         {
            cout << "1";
         }
         else
         {
            int a = 1;
            for(int j = 0; j < M-1; j++)
            {
               a *= N;
               cout << a << " ";
            }
         }
      }
   }
  
}
