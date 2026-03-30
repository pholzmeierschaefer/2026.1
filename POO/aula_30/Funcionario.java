package aula_30;

public class Funcionario {
    private String nome;
    private double salario;
    private Data dataContratacao;

    public Funcionario(String nome, double salario, String dataContratacao){
        setNome(nome);
        setSalario(salario);
        setDataContratacao(dataContratacao);
    }

    public String getNome(){
        return nome;
    }
    public double getSalario(){                 //os getters servem para ter acesso ao atributo privato para poder imprimir por exemplo
        return salario;
    }
    public String getDataContratacao(){
        return (dataContratacao.dia + "/" + dataContratacao.mes + "/" + dataContratacao.ano);
        
    }

    public void setNome(String nome){
        if (nome.equals("")){
            System.out.println("Nome invalido");
        }
        else{
            this.nome = nome;
        }
    }

    public void setSalario(double salario){
        if (salario <= 0){
            System.out.println("Salario invalido");
        }

        else{
            this.salario = salario;
        }
    }

    public void setDataContratacao(String dataContratacao){

        if (this.dataContratacao == null){
            this.dataContratacao = new Data();
        }
        else{
        String[] partes = dataContratacao.split("/");
        this.dataContratacao.dia = Integer.parseInt(partes[0]);
        this.dataContratacao.mes = Integer.parseInt(partes[1]);
        this.dataContratacao.ano = Integer.parseInt(partes[2]);
        }

    }

    void imprime(){
        System.out.println("Funcionario");
        System.out.println("Nome: " + nome);
        System.out.println("Salario: " + salario);
        dataContratacao.imprime();
    }





}

