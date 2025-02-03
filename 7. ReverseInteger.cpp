    #include <iostream>

    int reverse(int x) {
                int reverseNum = 0;
           while(x != 0){
            int lastDigit = x % 10;
            if((reverseNum > INT_MAX / 10) || (reverseNum < INT_MIN / 10)){
                return 0;
            }
            reverseNum = (reverseNum * 10) + lastDigit;
            x = x / 10;
        }
        return reverseNum;
    }

int main() {

int x = 123;
    int ans = reverse(x);
    cout << "Reversed Number: "<<ans;

    return 0;
}