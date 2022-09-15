class calc
{
    int num1;
    int num2;
    int result;
  public void perform()
  {
      result=num1+num2;
  }  
}
public class objectdemo
{
     public static void main(String[] args)  
     {
         calc obj=new calc();           //knowns something and does sokenthing
         obj.num1=2;
         obj.num2=4;
         obj.perform();

        System.out.println(obj.result);
         

     }
}