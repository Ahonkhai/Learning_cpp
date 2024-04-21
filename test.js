var test_array = [1, 2, 3, 4, 5];

console.log(test_array[3]);

function sum() {
  var total = 0;
  for (let i = 0; i < test_array.length; i++) {
    total += test_array[i];
  }
  return total;
}

console.log("lol array sum", sum());

var multiple_array = [
  [1, 2, 3],
  [4, 5, 6],
  [7, 8, 9],
];

// Lets say i wanna log 8 what do we do
console.log(multiple_array[2][1]);

// now lets add everything

var array_sum = 0;
for (let a = 0; a < multiple_array.length; a++) {
  for (let b = 0; b < multiple_array[a].length; b++) {
    array_sum += multiple_array[a][b];
  }
}

console.log(array_sum);
