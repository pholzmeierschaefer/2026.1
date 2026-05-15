public class Funcionario extends Participante {
    private String cargo;

     public String getCargo() {
        return cargo;
    }

    public void setCargo(String cargo) {
        this.cargo = cargo;
    }

    public void getDesc() {
        System.out.println("Nome:  " + getNome());
        System.out.println("Cargo: " + cargo);
    }
    
}