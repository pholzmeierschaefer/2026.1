public class ExemploOperadores {
    public static void main(String[] args){
        //operadores aritméticos
        // + = * / %
        double d1 = 9.0;
        double d2 = 13.0;

//o LN atras do print é o que pula para a próxima linha automaticamente
        System.out.println();
        System.out.println("o dado 1 é: " + d1);
        System.out.println("o dado 2 é: " + d2);
        System.out.println("a diferença do dado 1 para o dado 2 é: " + (d1 - d2));

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
    }
}
