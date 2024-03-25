//THIS JavaScript

//codigo antiguo
var obj = {
    foo: function () {return 'foo'; },
    bar: function (){
        var that = this;
        document.addEventListener('click', function (event) {
            that.foo()
        })
    }

};
//codigo nuevo
var obj = {
    foo: function () {return 'foo'; },
    bar: function (){
       
        document.addEventListener('click', function (event) {
            this.foo()
        }).bind(this)
    }
};