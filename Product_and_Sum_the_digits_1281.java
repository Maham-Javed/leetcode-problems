// https://leetcode.com/problems/subtract-the-product-and-sum-of-digits-of-an-integer/description/

public class Product_and_Sum_the_digits_1281 {

    public static int ProductSumDigits(int n){
        int sum = 0;
         int product = 1;

         while (n > 0){
             int digit = n % 10;
             sum = sum + digit;
             product = product * digit;

             n = n/10;
         }
        return product - sum;
    }

    public static void main(String[] args) {
        int n = 234;
        int ans = ProductSumDigits(n);
        System.out.println(ans);
    }
}
