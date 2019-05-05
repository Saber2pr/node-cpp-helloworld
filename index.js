/*
 * @Author: saber2pr 
 * @Date: 2019-05-05 21:50:01 
 * @Last Modified by: saber2pr
 * @Last Modified time: 2019-05-05 22:52:31
 */
const concat = require('./build/Release/concat');

console.log(concat(1, 2, 3));
console.log(concat('a', 'b'));
console.log(concat('a', 'b', 'c'));