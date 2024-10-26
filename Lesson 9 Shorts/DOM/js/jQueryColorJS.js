
$(document).ready(function() {

    $('.jQueryButton').click(function() {
        $("#colorDiv").css('background-color', this.innerHTML.toLowerCase());
    });
});