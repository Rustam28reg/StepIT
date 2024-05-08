//#region task 1
function foo(num1, num2)
{
    if(num1 < num2){
            return -1;
        }else if(num1 > num2){
            return 1;
        }else{
            return 0;
        }    
}
console.log(foo(1,2));
//#endregion

//#region task 2
function factorial(num) {
    if (num < 0) {
        return "number < 0";
    }
    else if (num === 0) {
        return 1;
    } 
    else {
        let result = 1;
        for (let i = 1; i <= num; i++) {
            result *= i;
        }
        return result;
    }
}
console.log(factorial(5));
//#endregion

//#region task 3
function foo(num1, num2, num3)
{
    //return `${num1}${num2}${num3}`
    const veriable = num1.toString() + num2.toString() + num3.toString();
    return parseInt(veriable);
}
console.log(foo(1,2,3));
//#endregion

//#region task 4
function calculateArea(length, width = null) {
    if (width === null) {        
        return length * length; 
    } else {        
        return length * width; 
    }
}
console.log(calculateArea(5)); 
console.log(calculateArea(4, 6)); 
//#endregion

//#region task 5
function isPerfectNumber(number) {
    let sum = 0;
    for (let i = 1; i < number; i++) {
        if (number % i === 0) {
            sum += i;
        }
    }
    return sum === number;
}
console.log(isPerfectNumber(6)); 
//#endregion

//#region task 6
function printPerfectNumbers(min, max) {
    for (let i = min; i <= max; i++) {
        if (isPerfectNumber(i)) {
            console.log(i);
        }
    }
}
printPerfectNumbers(1, 1000); 
//#endregion

//#region task 7
function formatTime(hours, minutes = 0, seconds = 0) {
    const formattedHours = hours < 10 ? "0" + hours : hours;
    const formattedMinutes = minutes < 10 ? "0" + minutes : minutes;
    const formattedSeconds = seconds < 10 ? "0" + seconds : seconds;
    return `${formattedHours}:${formattedMinutes}:${formattedSeconds}`;
}
console.log(formatTime(15, 8, 30));
console.log(formatTime(7));
//#endregion

//#region task 8
function timeToSeconds(hours, minutes, seconds) {
    return hours * 3600 + minutes * 60 + seconds;
}
console.log(timeToSeconds(2, 30, 0)); 
//#endregion

//#region task 9
function secondsToTime(seconds) {
    const hours = Math.floor(seconds / 3600);
    const remainingSeconds = seconds % 3600;
    const minutes = Math.floor(remainingSeconds / 60);
    const remainingSecondsFinal = remainingSeconds % 60;
    return formatTime(hours, minutes, remainingSecondsFinal);
}
console.log(secondsToTime(9000)); 
//#endregion

//#region task 10
function formatTime(hours, minutes = 0, seconds = 0) {
    const formattedHours = hours < 10 ? "0" + hours : hours;
    const formattedMinutes = minutes < 10 ? "0" + minutes : minutes;
    const formattedSeconds = seconds < 10 ? "0" + seconds : seconds;
    return `${formattedHours}:${formattedMinutes}:${formattedSeconds}`;
}
function timeToSeconds(hours, minutes, seconds) {
    return hours * 3600 + minutes * 60 + seconds;
}
function secondsToTime(seconds) {
    const hours = Math.floor(seconds / 3600);
    const remainingSeconds = seconds % 3600;
    const minutes = Math.floor(remainingSeconds / 60);
    const remainingSecondsFinal = remainingSeconds % 60;
    return formatTime(hours, minutes, remainingSecondsFinal);
}
function diffBetweenDates(hours1, minutes1, seconds1, hours2, minutes2, seconds2) {
    const time1 = timeToSeconds(hours1, minutes1, seconds1);
    const time2 = timeToSeconds(hours2, minutes2, seconds2);
    const diff = Math.abs(time1 - time2);
    return secondsToTime(diff);
}

console.log(diffBetweenDates(10, 5, 0, 8, 5, 1)); 
//#endregion