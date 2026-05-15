package automacao;

public class Smartphone extends DispositivoEletronico implements Conectavel {
    private String operadora;

    public void setOperadora(String operadora) {
        this.operadora = operadora;
    }
    

    public String getOperadora() {
        return operadora;
    }

    

    public void conectarWIFI(){
        System.out.println("sim");
    }




    public void ligar() {
		System.out.println("ligar");
	}

	
	public void exibirInfos() {
		System.out.println("marca: " + getMarca());
        System.out.println("modelo: " + getModelo());
        System.out.println("operadora: " + getOperadora());
	}
}
