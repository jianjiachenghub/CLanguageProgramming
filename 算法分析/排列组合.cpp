//���ǿ��԰�����ֽ����£�
//1������������1��n��Ԫ�ص����f(n,m) (m>=1 && m<=n;nΪ����Ԫ�ظ���)��
//2������f(n,m)�����Ǵ�����������ȡһ��Ԫ�أ�Ȼ���ٴ�ʣ�µ�n-1��Ԫ����ȡm-1��Ԫ�أ���f(n-1,m-1)��
//3���ظ���2����ֱ��f(n-m+1,1)������n-m+1��Ԫ����ȡ�����һ��Ԫ�أ�
//4������Ч�����ѹջ������ѹջǰ�жϸ������ջ���Ƿ���ڣ�������������Ԫ�ص��ظ�����������ظ���
var result = new Array();  //����������ϵ�����  
function getAllComb(myarr)  
{  
 var len=myarr.length;  
 for(var i=1;i<=len;i++)  
  getComb(myarr,len,i);  
 document.write("����("+myarr.join(",")+")�����е����(��"+ result.length+"��)���£�<hr>"+result.join("\t"));  
}  
  
//������myarr(n)����ѡm��Ԫ�ص��������(m>=1 && m<=n)��  
function getComb(myarr,n,m,rs)  
{  
 if(rs==null)  
  rs = new Array();  
 for(var i=n;i>=m;i�C)  
 {  
  rs[m-1]=myarr[i-1];      //ȡ����n��Ԫ����Ϊ��ϵĵ�һ��Ԫ��  
  if(m>1)  
   getComb(myarr,i-1,m-1,rs);  //�ݹ飬��n-1��Ԫ����ȡm-1��Ԫ��,ֱ��ȡ�����һ��Ԫ��  
  var comb = rs.join("");     //���һ�����  
  if(!checkExist(result,comb))  
   result.push(comb);  
 }  
}  
  
//����ĳԪ���Ƿ����������,���ڷ���true,�����ڷ���false  
function checkExist(myarr,e)  
{  
 for(var i=0;i<myarr.length;i++)  
  if(e==myarr[i]) return true;  
 return false;  
}  
  
//����  
var arr=new Array(1,2,3,3,4,5);  
getAllComb(arr);
