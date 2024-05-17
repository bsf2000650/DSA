
class Solution {
  public:
    // Function to get the maximum total value in the knapsack.
    static bool cmp(pari<double,Item> a, pair<double,Item> b){
        return a.first > b.first;
    }
    double fractionalKnapsack(int w, Item arr[], int n) {
        vector<pair <double, Item> > v;

        for(int i=0; i<n; i++){
            double perUnitValue = (1.0*arr[i].value) / arr[i].weight;
            pair<double, Item> p = make_pair(perUnitValue, arr[i]);
            v.push_back(p);
        }

        sort(v.begin(), v.end(), cmp);

        double totalValue = 0;
        for(int i=0; i<n; i++){
            if(v.second.weight < 0){
                totalValue += W*v[i].first;
                W = 0;
            }else{
                totalValue += v[i].second.value;
                W = W - v[i].second.weight;
            }
        }
        return totalValue;
    }
};