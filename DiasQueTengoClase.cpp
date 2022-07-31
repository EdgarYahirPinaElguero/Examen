package ExamenParcial2;
import java.util.*;

public class DiasDePoo {
	public static void main (String[] args) {
		Scanner ingresar = new Scanner(System.in);
		int n;
		
		System.out.println("Programa que lea un numero y muestre el dia que hay clase de programacion y cuales no: ");
		System.out.println("-----");
		
		System.out.println("Que dia de la semana deseas del 1 al 7: ");
		n = ingresar.nextInt();
		
		switch(n) {
		case 1:
			System.out.println("Hoy es Lunes y si hay clase de programacion");
			break;
		case 2:
			System.out.println("Hoy es Martes y no hay clase de programacion");
			break;
		case 3:
			System.out.println("Hoy es Miercoles y no hay clase de programacion ");
			break;
		case 4:
			System.out.println("Hoy es Jueves y no hay clase de programacion");
			break;
		case 5:
			System.out.println("Hoy es Viernes y no hay clase de programacion");
			break;
		case 6:
			System.out.println("Hoy es Sabado y no hay clase de programacion");
			break;
		case 7:
			System.out.println("Hoy es Domingo y no hay clase de programacion");
			break;
			default:
				System.out.println("El numero que ingresaste no es valido");
				return;
		}
	}
}
