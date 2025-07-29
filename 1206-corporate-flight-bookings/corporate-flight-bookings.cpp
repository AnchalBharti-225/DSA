// Approach-I
// class Solution {
// public:
//     vector<int> corpFlightBookings(vector<vector<int>>& bookings, int n) {
//         long long first,last,seats;
//         vector<int> answer(n,0);
//          for(int i=0;i<bookings.size();i++)
//          {
//              first=bookings[i][0];
//              last=bookings[i][1];
//              seats=bookings[i][2];
//              for(int j=0;j<n;j++)
//              {
//                 if(j>=first- 1 && j<=last-1)
//                 {
//                     answer[j]=answer[j]+seats;
//                 }
//              }
//          }
//          return answer;
         
//     }
// };
// Approach-II
class Solution
{
    public: 
      vector<int>corpFlightBookings(vector<vector<int>>&bookings,int n)
      {
           vector<int>res(n,0);
           for(int i=0;i<bookings.size();i++)
           {
                 res[bookings[i][0]-1]+=bookings[i][2];
                 if(bookings[i][1]<n) res[bookings[i][1]]-=bookings[i][2];
           }
           for(int i=1;i<n;i++)
           {
               res[i]+=res[i-1];
           }
           return res;
      }
};