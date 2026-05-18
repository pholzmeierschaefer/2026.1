package automacao;

public class Smartwatch extends DispositivoEletronico implements Conectavel {

    private String batimentos;

    public void setBatimentos(String batimentos) {
        this.batimentos = batimentos;
    }
    

    public String getBatimentos() {
        return batimentos;
    }

    public void conectarWIFI(){
        System.out.println("nao");
    }


    public void ligar() {
		System.out.println("ligar");
	}

	
	public void exibirInfos() {
		System.out.println("marca: " + getMarca());
        System.out.println("modelo: " + getModelo());
        System.out.println("batimentos: " + getBatimentos());
	}
    
}
