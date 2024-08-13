// https://leetcode.com/problems/richest-customer-wealth

public class Richest_Customer_Wealth_1672 {
    public static void main(String[] args) {
        int[][] accounts = {{1,5},{7,3},{3,5}};

        System.out.println(maxWealth(accounts));
    }

    public static int maxWealth(int[][] accounts) {
        int ans= Integer.MIN_VALUE;

        for(int i = 0; i <= accounts.length-1; i++){
            int sum = 0;
            for(int j = 0; j <= accounts[i].length-1; j++) {
                sum += accounts[i][j];
            }
            ans = Math.max(ans, sum);
        }
        return  ans;
    }
}