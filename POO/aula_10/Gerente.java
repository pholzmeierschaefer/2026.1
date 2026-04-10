
public class Gerente extends Funcionario{

    private double bonus;


    public double getBonus(){
        return this.bonus;
    }

    public void setBonus(double bonus){
        this.bonus = bonus;
    }

    

    @Override
    public double calcRemun(){                  
        return super.calcRemun()+this.bonus;    //o super acessa o calcRemun da superclasse
    }



 
}
