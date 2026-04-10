

public class Main {
    public static void main(String[] argd){

        
        Funcionario f = new Funcionario();
        f.setSalario(8000);

        System.out.println("remuneracao: " + f.calcRemun());


        Gerente g = new Gerente();
        g.setSalario(8000);
        g.setBonus(2000);

        System.out.println("remuneracao: " + g.calcRemun());

        
        
          

        
    }
}
