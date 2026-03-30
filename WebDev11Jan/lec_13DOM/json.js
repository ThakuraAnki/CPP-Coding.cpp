const { useLayoutEffect } = require("react");

let codingblocks={
    name:'CB',
    place:'Delhi',
    language:['cpp','java']
}

let x=JSON.stringify(codingblocks);
console.log(x);

console.log(JSON.parse(x));


