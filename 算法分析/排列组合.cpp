//我们可以把问题分解如下：
//1）求数组中由1到n个元素的组合f(n,m) (m>=1 && m<=n;n为数组元素个数)；
//2）对于f(n,m)，我们从数组中任意取一个元素，然后再从剩下的n-1个元素中取m-1个元素，既f(n-1,m-1)；
//3）重复第2步，直到f(n-m+1,1)，即从n-m+1个元素中取出最后一个元素；
//4）把有效的组合压栈，并在压栈前判断该组合在栈中是否存在，避免由于数组元素的重复而导致组合重复。
var result = new Array();  //保存所有组合的数组  
function getAllComb(myarr)  
{  
 var len=myarr.length;  
 for(var i=1;i<=len;i++)  
  getComb(myarr,len,i);  
 document.write("数组("+myarr.join(",")+")的所有的组合(共"+ result.length+"种)如下：<hr>"+result.join("\t"));  
}  
  
//从数组myarr(n)中任选m个元素的所有组合(m>=1 && m<=n)。  
function getComb(myarr,n,m,rs)  
{  
 if(rs==null)  
  rs = new Array();  
 for(var i=n;i>=m;i–)  
 {  
  rs[m-1]=myarr[i-1];      //取出第n个元素作为组合的第一个元素  
  if(m>1)  
   getComb(myarr,i-1,m-1,rs);  //递归，在n-1个元素中取m-1个元素,直到取出最后一个元素  
  var comb = rs.join("");     //获得一个组合  
  if(!checkExist(result,comb))  
   result.push(comb);  
 }  
}  
  
//查找某元素是否存在数组中,存在返回true,不存在返回false  
function checkExist(myarr,e)  
{  
 for(var i=0;i<myarr.length;i++)  
  if(e==myarr[i]) return true;  
 return false;  
}  
  
//测试  
var arr=new Array(1,2,3,3,4,5);  
getAllComb(arr);
