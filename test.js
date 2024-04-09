var test_array = [1,2,3,4,5]

console.log(test_array[3])

function sum() {
    var total = 0;
    for (let i = 0; i < test_array.length; i++) {
      total += test_array[i];
    }
    return total;
  }
  
  console.log("lol array sum", sum());