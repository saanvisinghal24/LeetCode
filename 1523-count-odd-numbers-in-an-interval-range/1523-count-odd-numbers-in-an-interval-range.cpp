class Solution {
public:
    int countOdds(int low, int high) {
        return (high + 1) / 2 - low / 2;
    }
int main() {
    int low, high;
    cin >> low >> high;

    cout << countOdds(low, high) << endl;
    return 0;
}    
};