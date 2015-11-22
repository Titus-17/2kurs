public class calc_average{
	static float items[];
	public static void init_elements(){
		items = new float [100];
		for (int i = 0; i < 100; i++)
			items[i] = i;
	}
	public static float even_average(){
		float res = 0;
		int i;
		int b = 0;
		for (i = 0; i < 100; i++){
			if (items[i]%2 == 0){
				res += items[i];
				b++;
			}
		}
		res = res/b;
		return res;
	}
	public static void main (String[] args){
		float t;
		init_elements();
		t = even_average();
		System.out.println("Average = " + even_average());
	}
}