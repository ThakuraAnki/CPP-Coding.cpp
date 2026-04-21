const url='https://jsonplaceholder.typicode.com/posts';
function fetchTodos(){

}

function fetchSingleTodos(id){
    let res=await fetch(url);
    alltodos=await res.json();
    return alltodos;
}
function PrintTodos(){

}