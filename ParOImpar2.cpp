package ExamenParcial2;
import java.util.*;

public class ParOImpar {
	public static void main(String[] args){
		        Scanner sc = new Scanner(System.in);
		        int num;
		        System.out.print("Introduzca un número entero: ");                                                        
		        num = sc.nextInt();
		        if (num % 2 == 0) {
		            System.out.println("PAR");
		        } else {
		            System.out.println("IMPAR");
		        }
		    }
		}
