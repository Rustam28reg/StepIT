//#region Task 1
// let shoppingList = [
//     { name: "apple", quantity: 2, bought: false },
//     { name: "milk", quantity: 1, bought: true },
//     { name: "juse", quantity: 1, bought: false }
// ];

// function displayShoppingList() {
//     console.log("Список покупок:");
//     shoppingList.filter(item => !item.bought).forEach(item => console.log(`${item.name}: ${item.quantity}`));
//     shoppingList.filter(item => item.bought).forEach(item => console.log(`${item.name}: ${item.quantity}`));
// }


// function addItemToShoppingList(name, quantity) {
//     let existingItem = shoppingList.find(item => item.name === name);
//     if (existingItem) {
//         existingItem.quantity += quantity;
//     } else {
//         shoppingList.push({ name: name, quantity: quantity, bought: false });
//     }
// }

// function buyItem(name) {
//     let item = shoppingList.find(item => item.name === name);
//     if (item) {
//         item.bought = true;
//     } else {
//         console.log(`Product "${name}" not found.`);
//     }
// }

//#endregion


//#region Task 2
// let receipt = [
//     { name: "apple", quantity: 2, price: 30 },
//     { name: "milk", quantity: 1, price: 15 },
//     { name: "juse", quantity: 1, price: 25 },
// ];

// function printReceipt() {
//     console.log("cash receipt:");
//     receipt.forEach(item => console.log(`${item.name} x ${item.quantity} - ${item.price} $.`));
// }

// function calculateTotal() {
//     let total = 0;
//     receipt.forEach(item => total += item.quantity * item.price);
//     return total;
// }

// function getMostExpensivePurchase() {
//     let maxPrice = 0;
//     let mostExpensivePurchase = null;
//     receipt.forEach(item => {
//         let totalPrice = item.quantity * item.price;
//         if (totalPrice > maxPrice) {
//             maxPrice = totalPrice;
//             mostExpensivePurchase = item;
//         }
//     });
//     return mostExpensivePurchase;
// }

// function calculateAveragePrice() {
//     let totalQuantity = 0;
//     let totalPrice = 0;
//     receipt.forEach(item => {
//         totalQuantity += item.quantity;
//         totalPrice += item.quantity * item.price;
//     });
//     return totalPrice / totalQuantity;
// }


//#endregion


//#region Task 3
// let styles = [
//     { name: "color", value: "red" },
//     { name: "font-size", value: "20px" },
//     { name: "text-align", value: "center" },
//     { name: "text-decoration", value: "underline" }
// ];

// function printStyledText(styles, text) {
//     let styleString = styles.map(style => `${style.name}: ${style.value};`).join(" ");
//     document.write(`<p style="${styleString}">${text}</p>`);
// }
//#endregion


//#region Task 4

// let auditoriums = [
//     { name: "Auditorium 101", seats: 15, faculty: "Faculty of Information Technologies" },
//     { name: "Auditorium 102", seats: 20, faculty: "Faculty of Economics" },
// ];

// function displayAllAuditoriums() {
//     console.log("All auditorium:");
//     auditoriums.forEach(auditorium => console.log(`${auditorium.name} (${auditorium.faculty}): ${auditorium.seats} мест`));
// }

// function displayAuditoriumsForFaculty(faculty) {
//     console.log(`faculty auditorium "${faculty}":`);
//     auditoriums.filter(auditorium => auditorium.faculty === faculty)
//                .forEach(auditorium => console.log(`${auditorium.name}: ${auditorium.seats} мест`));
// }

// function displayAuditoriumsForGroup(group) {
//     console.log(`Suitable audiences for the group "${group.name}" (${group.faculty}):`);
//     auditoriums.filter(auditorium => auditorium.seats >= group.students && auditorium.faculty === group.faculty)
//                .forEach(auditorium => console.log(`${auditorium.name}: ${auditorium.seats} мест`));
// }

// function sortAuditoriumsBySeats() {
//     return auditoriums.slice().sort((a, b) => a.seats - b.seats);
// }

// function sortAuditoriumsByName() {
//     return auditoriums.slice().sort((a, b) => a.name.localeCompare(b.name));
// }



//#endregion