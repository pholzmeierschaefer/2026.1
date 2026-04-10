package aula2;

public class Gerente2 extends Funcionario2 {

    private double bonus;

    public Gerente2(double salario, double bonus){
        super(salario);     //chama o construtor da superclasse funcionario e precisa ser a primeira coisa feita
                                //se trocar a ordem e colocar o this.bonus=bonus antes da erro
        this.bonus = bonus;
        
    }

    @Override
    public double calcRemun(){                  
        return super.calcRemun()+this.bonus;    //o super acessa o calcRemun da superclasse funcionario
    }
 
}


