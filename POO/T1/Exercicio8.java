import java.util.Scanner;

public class Exercicio8 {
    public static void main (String[] args){

        Scanner sc = new Scanner(System.in);
        System.out.println("Digita a palavra: ");
        String palavra = sc.next().toLowerCase();;
        

        String invertida = "";

        for (int i = palavra.length()-1; i >= 0; i --){
            invertida += palavra.charAt(i);
        }

        System.out.println("palavra normal: " + palavra);
        System.out.println("palavra invertida: " + invertida);

        if(palavra.equals(invertida)){
            System.out.println("eh palindromo");
        }
        else{
            System.out.println("nao eh palindromo");
        }
        sc.close();


    
        
    }
}
