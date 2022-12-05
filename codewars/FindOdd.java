public class FindOdd {
	/*
	Given an array of integers, find the one that appears an odd number of times.
	There will always be only one integer that appears an odd number of times.
	*/
	public static int findIt(int[] a) {
    int odd = a[0];
    for(int i=1; i<a.length; i++){
      odd ^= a[i];
	}
  	return odd;
  }
}