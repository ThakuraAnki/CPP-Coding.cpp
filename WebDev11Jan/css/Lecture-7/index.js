let arr=[1,2,3,"Hello",5,6];
// for(let i=0;i<arr.length;i++){
//     console.log(arr[i]);
// }

// arr[50]="ass";
// for(let data of arr){
//     console.log(data);
// }
// let i=0;
// while(i<arr.length){
//     console.log(arr[i]);
//     i++;
// }
let str="";
for(let i=0;i<arr.length;i++){
    str+=arr[i]+' ';
}
console.log(str);
