let contagem = 1;

while (contagem < 101) {
    if (contagem % 3 === 0 && contagem % 5 === 0) {
        console.log("QuantoSobra");
    } else if (contagem % 3 === 0) {
        console.log("Quanto");
    } else if (contagem % 5 === 0) {
        console.log("Sobra");
    } else {
        console.log(contagem);
    }
    contagem++;
};
