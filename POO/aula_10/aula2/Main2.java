package aula2;

public class Main2{
public static void main(String[] argd){

        
        Funcionario2 f = new Funcionario2(8000);
        

        System.out.println("remuneracao: " + f.calcRemun());


        Gerente2 g = new Gerente2(8000, 2000);
        

        System.out.println("remuneracao: " + g.calcRemun());

        
    }     
          

        
}