<script>
var array = [1, 3, 2, 4, 6, 5, 8, 7];
var temp_biggest = array[0];
var temp_smallest = array[0];
for (int i = 0; i < 8; i++) // searching biggest number
{
   if(temp_biggest > array[i])
   {
	   continue;
   }
   else if(temp_biggest < array[i])
   {
      temp_biggest = array[i];
   }
}
for (int i = 0; i < 8; i++) // searching smallest number
{
   if(temp_smallest < array[i])
   {
      continue;
   }
   else if(temp_smallest > array[i])
   {
      temp_smallest = array[i];
   }
}
alert("Biggest number is: " + temp_biggest);
alert("Smallest number is: " + temp_smallest);
</script>