//#region Task1
// let automobile =  {
//     manufacturer: "BMW",
//     model: "m5",
//     year: 2024,
//     averageSpeed: 150,

//     info: function(){
//         console.log(`Manufacturer: ${this.manufacturer}
//         model: ${this.model}
//         Year: ${this.year}
//         Average Speed: ${this.averageSpeed}`)
//     },
    
//     timeFromDistance: function(distance){
//         let time = distance / this.averageSpeed
//         if(time > 4){
//             let count = Math.floor(time / 4);
//             return (time += count).toFixed(2);
//         }else{
//             return time;
//         }           
//     }
// }

// automobile.info();

// console.log(automobile.timeFromDistance(2000));
//#endregion

//#region Task2

// class Fraction {
//     constructor(numerator, denominator) {
//         this.numerator = numerator;
//         this.denominator = denominator;
//     }


//     add(otherFraction) {
//         let newNumerator = this.numerator * otherFraction.denominator + otherFraction.numerator * this.denominator;
//         let newDenominator = this.denominator * otherFraction.denominator;
//         return new Fraction(newNumerator, newDenominator);
//     }


//     subtract(otherFraction) {
//         let newNumerator = this.numerator * otherFraction.denominator - otherFraction.numerator * this.denominator;
//         let newDenominator = this.denominator * otherFraction.denominator;
//         return new Fraction(newNumerator, newDenominator);
//     }

// й
//     multiply(otherFraction) {
//         let newNumerator = this.numerator * otherFraction.numerator;
//         let newDenominator = this.denominator * otherFraction.denominator;
//         return new Fraction(newNumerator, newDenominator);
//     }


//     divide(otherFraction) {
//         let newNumerator = this.numerator * otherFraction.denominator;
//         let newDenominator = this.denominator * otherFraction.numerator;
//         return new Fraction(newNumerator, newDenominator);
//     }


//     reduce() {
//         let gcd = findGCD(this.numerator, this.denominator);
//         this.numerator /= gcd;
//         this.denominator /= gcd;
//     }
// }


// #endregion

//#region Task3

// const time = {
//     hours: 0,
//     minutes: 0,
//     seconds: 0,


//     displayTime: function() {
//         let hoursStr = this.hours < 10 ? "0" + this.hours : this.hours;
//         let minutesStr = this.minutes < 10 ? "0" + this.minutes : this.minutes;
//         let secondsStr = this.seconds < 10 ? "0" + this.seconds : this.seconds;
//         console.log(hoursStr + ":" + minutesStr + ":" + secondsStr);
//     },

    
//     changeSeconds: function(seconds) {
//         this.seconds += seconds;
//         if (this.seconds >= 60) {
//             let minutesToAdd = Math.floor(this.seconds / 60);
//             this.seconds %= 60;
//             this.changeMinutes(minutesToAdd);
//         }
//     },

    
//     changeMinutes: function(minutes) {
//         this.minutes += minutes;
//         if (this.minutes >= 60) {
//             let hoursToAdd = Math.floor(this.minutes / 60);
//             this.minutes %= 60;
//             this.changeHours(hoursToAdd);
//         }
//     },

    
//     changeHours: function(hours) {
//         this.hours += hours;
//         if (this.hours >= 24) {
//             this.hours %= 24;
//         }
//     }
// };


// time.hours = 20;
// time.minutes = 30;
// time.seconds = 45;

// time.displayTime(); 

// time.changeSeconds(30);
// time.displayTime(); 

// time.changeMinutes(60);
// time.displayTime(); 

// time.changeHours(5);
// time.displayTime(); 


//#endregion
