#include <iostream>
#include <cstring>  // For strlen function

using namespace std;

// Function to swap two characters using pointers
void swap(char* x, char* y) {
    char temp = *x;
    *x = *y;
    *y = temp;
}

// Recursive function to generate all permutations of the string
void permute(char* str, int left, int right) {
    if (left == right) {
        cout << str << endl;
    } else {
        for (int i = left; i <= right; i++) {
            swap((str + left), (str + i));   // Swap the current character with the leftmost
            permute(str, left + 1, right);   // Recursively call permute for the rest of the string
            swap((str + left), (str + i));   // Backtrack
        }
    }
}

int main() {
    char str[] = "king";  // Input string
    int n = strlen(str); // Find the length of the string
    permute(str, 0, n - 1); // Generate all permutations
    return 0;
}
