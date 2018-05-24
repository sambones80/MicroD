// Hide owl carousel item depending on date

$(document).ready(function() { // Get today's date
	var today = new Date();
	var dd = today.getDate();
	var mm = today.getMonth()+1;
	var yyyy = today.getFullYear();
	if(dd<10) {
	    dd = '0'+dd
	} 
	if(mm<10) {
	    mm = '0'+mm
	} 

	var todaysDate = mm + '/' + dd + '/' + yyyy; // Build today's date string

	// Compare today's date to effective dates and remove specific slides
	if (todaysDate != "12/24/2017" || "12/25/2017") {
		$('#homepageslideshow .owl-wrapper .owl-item:first-child a').remove();
		console.log("XXX slide removed");
	}
	else {
		$('#homepageslideshow .owl-wrapper .owl-item:nth-child(2)').remove();
		console.log("XXX slide removed");
	}
});


// Better way to do it -
// create multiple slideshows each with a unique ID
// and hide the ones you're not using during specified dates

$(document).ready(function() { // Get today's date
	var today = new Date();
	var dd = today.getDate();
	var mm = today.getMonth()+1;
	var yyyy = today.getFullYear();
	if(dd<10) {
	    dd = '0'+dd
	} 

	if(mm<10) {
	    mm = '0'+mm
	} 

	var todaysDate = mm + '/' + dd + '/' + yyyy; // Build today's date string

	// Compare today's date to effective dates and remove unwanted slideshows
	if (todaysDate === "12/21/2017" || "12/22/2017" || "12/23/2017") {
		$('#homepageslideshow-christmas').remove();
		$('#homepageslideshow-countdown').remove();
		console.log(todaysDate + " - christmas & countdown slideshows removed");
	}
	else if (todaysDate === "12/24/2017" || "12/25/2017") {
		$('#homepageslideshow').remove();
		$('#homepageslideshow-countdown').remove();
		console.log(todaysDate + " - homepage & countdown slideshows removed");
	}
	else {
		$('#homepageslideshow').remove();
		$('#homepageslideshow-christmas').remove();
		console.log(todaysDate + " - homepage & christmas slideshows removed");
	}
});
