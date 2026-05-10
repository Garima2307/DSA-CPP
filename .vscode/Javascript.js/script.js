// let marks = [ 85,97,44,37,76,60];
// let sum = 0;
// for(let i =0 ; i<marks.length ; i++){
//     sum+= marks[i];

// }
// let avg = sum/marks.length;
// console.log(`Average marks = ${avg}`);

let prices =[250,645,300,900,50];
// let idx=0;
// for(let value of prices){
//     let offer = value /10;
//     prices[idx] = prices[idx] - offer;
//     console.log(`newPrice = ${prices[idx]}`);
//     idx++;

// };
for(let i =0 ; i<prices.length ; i++){
    let offer = prices[i]/10;
    prices[i]=prices[i]-offer;
}
console.log(prices);
