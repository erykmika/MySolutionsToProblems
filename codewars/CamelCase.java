class CamelCase{
	
	/*
	Complete the method/function so that it converts dash/underscore delimited words into camel casing.
	The first word within the output should be capitalized only if the original word was capitalized 
	(known as Upper Camel Case, also often referred to as Pascal case). The next words should be always 
	capitalized.
	*/
	
    static String toCamelCase(String s){
        String[] split = s.split("_|-", -1);
        String result = split[0];
        for(int i=1; i<split.length; i++){
            result += (split[i].substring(0, 1).toUpperCase() + split[i].substring(1));
        }
        return result;
    }
}