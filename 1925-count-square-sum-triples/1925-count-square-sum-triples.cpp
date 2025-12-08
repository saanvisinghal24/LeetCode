class Solution {
public:
    int countTriples(int n) {
         int count = 0;
    for (int a = 1; a <= n; a++) {
        for (int b = a; b <= n; b++) {
            int c2 = a * a + b * b;
            int c = sqrt(c2);

            // Check perfect square and c within limit
            if (c * c == c2 && c <= n) {
                if (a == b)
                    count += 1;   // only (a,b,c)
                else
                    count += 2;   // both (a,b,c) and (b,a,c)
            }
        }
    }
    return count;
    }
   int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;

    cout << "Number of square triples = " << countTriples(n) << endl;
    return 0;
} 
};
