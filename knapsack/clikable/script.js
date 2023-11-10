let butt =  document.querySelector('button');
butt.addEventListener('click',inputMsg);

function inputMsg (){
    let name = prompt('Enter name of Student: ');
    butt.textContent = "Roll No .1 " + name;
    
}
