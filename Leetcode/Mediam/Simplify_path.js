// Problem name : Simplify Path
// URL : https://leetcode.com/problems/simplify-path/description/?envType=study-plan-v2&envId=top-interview-150
var simplifyPath = function (path) {
  path = path.split("/");
  console.log(path); 

  let new_path = [];
  for (const part of path) {
    if (part === "..") {
      if (new_path.length > 0) {
        new_path.pop();
      }
    } else if(part && part != '.'){
      new_path.push(part);
    }
  }
  return "/" + new_path.join("/");
};
