/* This question reverse a number (123 -> 321), but if we have 10400,
   then it ignore the last extra two zeros and become (10400 -> 401)
 */

public class Reverse_of_a_Number {
    public static void ReverseNumber(int n, int reverseNum){
        while(n > 0){
            int lastDigit = n % 10;
            reverseNum = (reverseNum * 10) + lastDigit;
            n = n/10;
        }
        System.out.println("Number of Digits: " + reverseNum);
    }

    public static void main(String[] args) {
        int n = 10400;
        int reverseNum = 0;

        ReverseNumber(n, reverseNum);
    }
}