function construirLargura(largura){
    const blocos = "#".repeat(largura);
    return blocos;
}

function returnDots(dots){
    return ".".repeat(dots);
}

function construirPiramide(altura){
    let width = 0;
    let totalDots = altura-1; 
    for(let i = 0; i < altura; i++){
        console.log(returnDots(totalDots) +'#' + construirLargura(width) + '  ' + '#' +  construirLargura(width));
        width++;
        totalDots--;
    }
}

construirPiramide(9);
