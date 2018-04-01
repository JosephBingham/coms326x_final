import java.util.*;
import java.io.*;
import java.list
public class bf{

	public void compile(FileInputStream in, FileOutputStream out){
		if(in == null || out == null) throw new Exception;
		ArrayList buffer = new ArrayList();
		
	}

	public static void main(String[] args){
		try {
			String name = args[1];
			String firstName = name.split(".")[0];
			File f = new File(name);
			Process p = Runtime.getRuntime().exec(new String[]{"bash", "touch", firstName + ".c"});
			File a = new File(firstName + ".c");
			FileInputStream in = new FileInputStream(f);
			FileOutputStream out = new FileOutputStream(a);
			compile(in, out);
		} catch (Exception e) {
			System.out.println("something went wrong...");
		} finally {
			p.exec(new String[]{"bash", "rm", firstName + ".c"});
			a.close();
			f.close();
		}
	}
}
