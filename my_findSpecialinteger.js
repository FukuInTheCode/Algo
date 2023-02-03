/**
 * @param {number[]} arr
 * @return {number}
 */
var findSpecialInteger = function (arr) {
    const uniqueVals = new Set(arr);
    var specialInt;
    console.log(uniqueVals);
    uniqueVals.forEach(element => {
        console.log(element, arr.filter(x => x == element).length / arr.length)
        if (arr.filter(x => x == element).length / arr.length > 0.25 && typeof specialInt === 'undefined') {
            specialInt = element;
        }
    });

    return specialInt;
}

module.exports = { findSpecialInteger };