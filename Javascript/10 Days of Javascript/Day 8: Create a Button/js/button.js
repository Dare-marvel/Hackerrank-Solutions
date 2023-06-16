counter = 0
function ClickHandler(){
    const myBtn = document.getElementById("btn");
    counter++
    myBtn.innerHTML = counter;
}