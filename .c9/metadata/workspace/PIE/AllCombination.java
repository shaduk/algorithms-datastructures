{"filter":false,"title":"AllCombination.java","tooltip":"/PIE/AllCombination.java","undoManager":{"mark":22,"position":22,"stack":[[{"start":{"row":0,"column":0},"end":{"row":35,"column":1},"action":"insert","lines":["import java.io.*;","import java.util.*;","import static java.lang.Integer.parseInt;","","","","public class AllPermutation","{","    private static BufferedReader br;","    ","    static void p(Object l){","    System.out.println(l);","    }","    ","    public static void Permu(String s, String ans)","    {","        ","        if(s.length() == 0)","            p(ans);","        else","        {","            for(int i = 0; i < s.length(); i++)","            {","                String temp = ans + s.charAt(i);","                Permu(s.substring(0,i) + s.substring(i+1, s.length()), temp);","            }","        }","    }","    ","    public static void main(String[] args) throws IOException {","        br = new BufferedReader(new InputStreamReader(System.in));","        String word = br.readLine();","        Permu(word, \"\");","        System.exit(0);","    }","}"],"id":1}],[{"start":{"row":6,"column":26},"end":{"row":6,"column":27},"action":"remove","lines":["n"],"id":2}],[{"start":{"row":6,"column":25},"end":{"row":6,"column":26},"action":"remove","lines":["o"],"id":3}],[{"start":{"row":6,"column":24},"end":{"row":6,"column":25},"action":"remove","lines":["i"],"id":4}],[{"start":{"row":6,"column":23},"end":{"row":6,"column":24},"action":"remove","lines":["t"],"id":5}],[{"start":{"row":6,"column":22},"end":{"row":6,"column":23},"action":"remove","lines":["a"],"id":6}],[{"start":{"row":6,"column":21},"end":{"row":6,"column":22},"action":"remove","lines":["t"],"id":7}],[{"start":{"row":6,"column":20},"end":{"row":6,"column":21},"action":"remove","lines":["u"],"id":8}],[{"start":{"row":6,"column":19},"end":{"row":6,"column":20},"action":"remove","lines":["m"],"id":9}],[{"start":{"row":6,"column":18},"end":{"row":6,"column":19},"action":"remove","lines":["r"],"id":10}],[{"start":{"row":6,"column":17},"end":{"row":6,"column":18},"action":"remove","lines":["e"],"id":11}],[{"start":{"row":6,"column":16},"end":{"row":6,"column":17},"action":"remove","lines":["P"],"id":12}],[{"start":{"row":6,"column":16},"end":{"row":6,"column":17},"action":"insert","lines":["C"],"id":13}],[{"start":{"row":6,"column":17},"end":{"row":6,"column":18},"action":"insert","lines":["o"],"id":14}],[{"start":{"row":6,"column":18},"end":{"row":6,"column":19},"action":"insert","lines":["m"],"id":15}],[{"start":{"row":6,"column":19},"end":{"row":6,"column":20},"action":"insert","lines":["b"],"id":16}],[{"start":{"row":6,"column":20},"end":{"row":6,"column":21},"action":"insert","lines":["i"],"id":17}],[{"start":{"row":6,"column":21},"end":{"row":6,"column":22},"action":"insert","lines":["n"],"id":18}],[{"start":{"row":6,"column":22},"end":{"row":6,"column":23},"action":"insert","lines":["a"],"id":19}],[{"start":{"row":6,"column":23},"end":{"row":6,"column":24},"action":"insert","lines":["t"],"id":20}],[{"start":{"row":6,"column":24},"end":{"row":6,"column":25},"action":"insert","lines":["i"],"id":21}],[{"start":{"row":6,"column":25},"end":{"row":6,"column":26},"action":"insert","lines":["o"],"id":22}],[{"start":{"row":6,"column":26},"end":{"row":6,"column":27},"action":"insert","lines":["n"],"id":23}]]},"ace":{"folds":[],"scrolltop":0,"scrollleft":0,"selection":{"start":{"row":2,"column":41},"end":{"row":2,"column":41},"isBackwards":false},"options":{"guessTabSize":true,"useWrapMode":false,"wrapToView":true},"firstLineState":{"row":5,"state":"start","mode":"ace/mode/java"}},"timestamp":1479406552790,"hash":"c3455a68d4265e8e8a5462097bb52650617f8892"}