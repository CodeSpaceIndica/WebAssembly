
window.addEventListener("load", (event) => {
    document.getElementById("factorialButton").addEventListener("click", function() {
        var result = Module.ccall(
            'factorial', 
            'number', //Return Type
            ['number'], //Argument Types in an array
            [5]
        );

        console.log(result);
    });
});