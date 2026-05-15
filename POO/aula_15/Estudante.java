
public class Estudante extends Participante {
    private String curso;

    public String getCurso() {
        return curso;
    }

    public void setCurso(String curso) {
        this.curso = curso;
    }



    public void getDesc() {
        System.out.println("Nome:  " + getNome());
        System.out.println("Curso: " + curso);
    }
    
}


