'use strict';

process.stdin.resume();
process.stdin.setEncoding('utf-8');

let inputString = '';
let currentLine = 0;

process.stdin.on('data', inputStdin => {
    inputString += inputStdin;
});

process.stdin.on('end', _ => {
    inputString = inputString.trim().split('\n').map(string => {
        return string.trim();
    });
    
    main();    
});

function readLine() {
    return inputString[currentLine++];
}

/*
 * Complete the vowelsAndConsonants function.
 * Print your output using 'console.log()'.
 */
const v = ["a","e","i","o","u"];
function vowelsAndConsonants(s) {
    let a=[];
    let b=[];
    for(var i=0;i<s.length;i++){
        if(v.indexOf(s[i]) > -1){
            a.push(s[i]);                
        }  
        else{
            b.push(s[i]);
        }             
    }
    for(var j=0; j<a.length; j++){
        console.log(a[j]);
    }
    for(var k=0; k<b.length; k++){
        console.log(b[k]);
    }
}


function main() {
    const s = readLine();
    
    vowelsAndConsonants(s);
}
