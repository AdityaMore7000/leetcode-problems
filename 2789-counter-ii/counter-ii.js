/**
 * @param {integer} init
 * @return { increment: Function, decrement: Function, reset: Function }
 */
var createCounter = function(init) {
    var int = init;
    function increment(){
        int++;
        return int;
    }
    function decrement(){
        int--;
        return int;
    }
    function reset(){
        int = init;
        return int;
    }
    return {increment,decrement,reset}
};

/**
 * const counter = createCounter(5)
 * counter.increment(); // 6
 * counter.reset(); // 5
 * counter.decrement(); // 4
 */