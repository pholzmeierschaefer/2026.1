public class ExemploOperadores {
    public static void main(String[] args){
        //operadores aritméticos
        // + = * / %
        double d1 = 9.0;
        double d2 = 13.0;

//o LN atras do print é o que pula para a próxima linha automaticamente
        //subtração e junção de valores com strings (aritméticos)
        System.out.println();
        System.out.println("o dado 1 é: " + d1);
        System.out.println("o dado 2 é: " + d2);
        System.out.println("a diferença do dado 1 para o dado 2 é: " + (d1 - d2));

        //concatenação de palavras
        String str1 = "abra";
        String str2 = "cadabra";
        System.out.println();
        System.out.println("a primeira palavra é: " + str1);
        System.out.println("a segunda palavra é: " + str2);
        System.out.println("a concatenacao de ambas palavras é: " + (str1 + str2));

        //operadores relacionais
        //< > <= >= == !=
        System.out.println();
        System.out.println("d1 == d2 ?: " + (d1 == d2));

        //operadores unarios
        int a =9;
        int b;
        System.out.println();
        //a++
        b = a++ + 10;
        System.out.println("a: " + a);
        System.out.println("b: " + b);
        // se for a++ o 1 é somado ao a depois do seu uso na expressão, 9 + 10 = 19, e ai 9+1 = 10
        // se for ++a o 1 é somado ao a antes do seu uso na expressão, 10(a)+1 = 11, e ai 11+10 = 21
        b = ++a + 10;
         System.out.println("a: " + a);
        System.out.println("b: " + b);


        boolean b1 = true;
        boolean b2 = false;
        System.out.println("b1 || b2: " + (b1 || b2)); //ou

    }
}
