
public class Funcionario {
    private double salario;

    //public Funcionario(double salario){
      //  this.salario = salario;
    //}

   
    public double calcRemun(){
        return this.salario;
    }

    public double getSalario(){
        return this.salario;
    }

    public void setSalario(double salario){
        this.salario=salario+1000.0;
    }
}
