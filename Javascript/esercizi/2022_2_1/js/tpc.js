//
//
//
let p = [ { x: 0.0, y: 12.0 }, { x: 5.0, y: 0.0 } ]
console.log("Provo a colpire il nemico con la mia arma");
ca = Math.floor(Math.random()*20);
tpc = Math.floor(Math.random()*20);
if(tpc>ca)
{
    console.log("E l'ho colpito");
}
else
{
    console.log("E l'ho mancato");
}