
vector<int> candyStore(int candies[], int N, int K)
{
   sort(candies, candies+N);

   int mini = 0;
   int buy = 0;
   int free = N-1;

   while (buy <= free)
   {
        mini = mini + candies[buy];
        buy++;
        free = free - K;
   }
       
    int maxi = 0;
    int buy = N-1;
    int free = 0;

    while (free <= buy)
    {
        maxi = maxi + candies[buy];
        buy--;
        free = free - K;
    }

    vecto<int> ans; 
    ans.push_back(mini);
    ans.push_back(maxi);
    return ans;
}