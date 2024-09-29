 /* The function is expected to return an INTEGER_ARRAY.
 * The function accepts following parameters:
 *  1. INTEGER_ARRAY a
 *  2. INTEGER k
 *  3. INTEGER_ARRAY queries
 *  4. INTEGER_ARRAY ans 
 */

vector<int> circularArrayRotation(vector<int> a, int k, vector<int> queries) {
    int n = a.size();
    k = k % n;                  
    vector<int> ans;
    
    for (int it : queries) {
        int new_index = (it - k + n) % n; 
        ans.push_back(a[new_index]);
    }
    return ans;
}
