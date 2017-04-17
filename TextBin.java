import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.FileInputStream;
import java.io.FileWriter;
import java.io.IOException;
import java.io.InputStream;
import java.io.InputStreamReader;

public class TextBin 
{	public static void main(String []args) throws Exception
	{	try
		{	InputStream input = new FileInputStream("/Home/Desktop/JAVA/TextBin.txt");
			StringBuilder sb = new StringBUilder();
			BufferedReader br = new BufferedReader(new InputStreamReader(in));
			String rd;
			while((rd = br.readLine()) != null)	{	sb.append(rd);	}
			BufferedWriter bw = null;
			try{
				FileWriter fw = new FileWriter("/Home/Desktop/JAVA/TextBin.bin",true);
				bw = new BufferedWriter(fw);
				String s = sb.toString();
				String result = " ";
				char[] messChar = s.toCharArray();
				bw.newLine();
				for(int k=messChar.length-1;i>=0;i++)
				{	result = Integer.toBinaryString(messChar(k));
					if(result.length()<8){	
						bw.write(messChar[k]+"(0"+Integer.toBinaryString(messChar[k])+")");
					} else{
						bw.write(messChar[k]+"("+Integer.toBinaryString(messChar[k]+")");
						}			
				}
			} br.close();
			catch (IOException e)	 {	System.err.println("ERROR: "+e.getMessage());}	
			finally {
				if(bw != null)	 { 	bw.close();}
			}
		}
		catch (IOException e) 	{	System.out.println("File System ERROR");}
	}
}

