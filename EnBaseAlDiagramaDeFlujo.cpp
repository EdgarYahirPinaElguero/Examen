package ExamenParcial2;
import java.util.*;

public class DiagramaDeFlujo {
	 public static void main(String[] args) {
	        Scanner teclado = new Scanner(System.in);
	        String tema = "tema";
	        System.out.println("Sabes del tema que se esta hablando, escribe si o no: ");
	        tema = teclado.nextLine();
	        if (tema.equals("si")) {
	            System.out.println("Usted estas informado del tema puede hablar.");
	        } else if (tema.equals("no")) {
	            do {
	                System.out.println("Usted no sabe mejor informese del tema");
	                System.out.println("Ya estas comprendiendo el tema, Si o No ");
	                tema = teclado.nextLine();
	            } while (tema.equals("no"));
	            System.out.println("Usted ya esta capacitaodo del tema puedes hablar.");
	        }
	    }
	}
