package icu.lizinuo;
import com.alibaba.fastjson.JSON;
 
public class JsonTest 
{
	public static void main(String[] args) 
	{
		App demo= new App();
		demo.setA(111);
        demo.setB(222);
        demo.setC(333);
		String json=JSON.toJSONString(demo);
		System.out.println(json);
	}
	
}