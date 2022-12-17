public class Kata {
    /*
    You are going to be given an array of integers. Your job is to take that array and find an index N
    where the sum of the integers to the left of N is equal to the sum of the integers to the right of N.
    If there is no index that would make this happen, return -1. 
    */
    public static int findEvenIndex(int[] arr) {
      int sum = 0, leftSum = 0;
      for(int num : arr)
        sum += num;
      for(int i=0; i<arr.length; i++){
        if(leftSum == sum - leftSum - arr[i]) return i;
        leftSum += arr[i];
      }
      return -1;
    }
  }