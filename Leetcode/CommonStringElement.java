import java.util.Hashtable; 

public class Solution {
    public boolean canConstruct(String ransomNote, String magazine) {
        Hashtable<Character, Integer> hashtable1 = 
              new Hashtable<Character, Integer>();
        Hashtable<Character, Integer> hashtable2 = 
              new Hashtable<Character, Integer>();
        char[] array1= ransomNote.toCharArray();
        char[] array2= magazine.toCharArray();
        for(int i = 0; i < array1.length; i++)
        {
            if(hashtable1.containsKey(array1[i]))
            {
                int val = hashtable1.get(array1[i]);
                hashtable1.put(array1[i], val+1);
            }
            else
            {
                hashtable1.put(array1[i], 1);
            }
        }
        
        for(int i = 0; i < array2.length; i++)
        {
            if(hashtable2.containsKey(array2[i]))
            {
                int val = hashtable2.get(array2[i]);
                hashtable2.put(array2[i], val+1);
            }
            else
            {
                hashtable2.put(array2[i], 1);
            }
        }
        for(int i = 0; i < array1.length; i++)
        {
            if(!hashtable2.containsKey(array1[i]) || hashtable2.get(array1[i]) < hashtable1.get(array1[i]))
            return false;
        }
        return true;
    }
}

/* Leetcode Solution

 public boolean canConstruct(String ransomNote, String magazine) {
        Map<Character, Integer> magM = new HashMap<>();
        for (char c:magazine.toCharArray()){
            int newCount = magM.getOrDefault(c, 0)+1;
            magM.put(c, newCount);
        }
        for (char c:ransomNote.toCharArray()){
            int newCount = magM.getOrDefault(c,0)-1;
            if (newCount<0)
                return false;
            magM.put(c, newCount);
        }
        return true;
    }
    
    public boolean canConstruct(String ransomNote, String magazine) {
    int[] table = new int[128];
    for (char c : magazine.toCharArray())   table[c]++;
    for (char c : ransomNote.toCharArray())
        if (--table[c] < 0) return false;
    return true;
}

public boolean canConstruct2(String ransomNote, String magazine) {
    int[] table = new int[26];
    for (char c : magazine.toCharArray())   table[c - 'a']++;
    for (char c : ransomNote.toCharArray())
        if (--table[c - 'a'] < 0) return false;
    return true;
}

public boolean canConstruct3(String ransomNote, String magazine) {
    Map<Character, Integer> map = new HashMap<>();
    for (char c : magazine.toCharArray()) {
        int count = map.containsKey(c) ? map.get(c) + 1 : 1;
        map.put(c, count);
    }
    for (char c : ransomNote.toCharArray()) {
        int newCount = map.containsKey(c) ? map.get(c) - 1 : -1;
        if (newCount == -1) return false;
        map.put(c, newCount);
    }
    return true;
}

    
*/