
function (name, src) {
    return new Promise(function (resolve, reject) {
        setTimeout(function () {
            reject("load data timeout");
        }, 3000);
        var orig_send = XMLHttpRequest.prototype.send;
        XMLHttpRequest.prototype.send = function () {
            var orig_onload = this.onload;
            var orig_onerror = this.onerror;
            var orig_ontimeout = this.ontimeout;
            var orig_onabort = this.onabort;
            this.onload = function () {
                orig_onload.apply(this, arguments);
                resolve(window[name]); // DataManager.loadDataFile 加载成功后会设置这个全局变量
            };
            this.onerror = function () {
                orig_onerror.apply(this, arguments);
                resolve(null);
            };
            this.ontimeout = function () {
                orig_ontimeout.apply(this, arguments);
                reject("XMLHttpRequest ontimeout");
            };
            this.onabort = function () {
                orig_onabort.apply(this, arguments);
                reject("XMLHttpRequest onabort");
            };
            orig_send.apply(this, arguments);
        };
        DataManager.loadDataFile(name, src);
        XMLHttpRequest.prototype.send = orig_send;
    });
}
