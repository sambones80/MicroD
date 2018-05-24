
Updated that I created for Noah's

<page title="METADATA COMPANY | METADATA CITY, METADATA STATE" />
<metadata name="keywords" content="METADATA COMPANY, METADATA COMPANY Furniture Store, METADATA COMPANY Home Furnishings, Furniture Store, Home Furnishings, METADATA CITY, METADATA STATE METADATA ZIPCODE" />
<metadata name="description" content="METADATA COMPANY image gallery." />
<div class="grid-container">
	<div id="staticpagecontent">
		<div class="grid-100">
			<div class="pagetitle">
				<h1>Click to view larger image</h1>
			</div>
			<include file="CustomerContent/Gallery.inc"></include>
			<br />
			<br />
		</div>
		<div class="popup-gallery">
			<div class="grid-25 tablet-grid-50 mobile-grid-100">
				<a href="/css/XXXX/images/EmptyHomeBanner.jpg" title="Placeholder"><img src="/css/XXXX/images/EmptyHomeBanner-600x400.jpg" width="280" alt="Placeholder"></a>
			</div>
			<div class="grid-25 tablet-grid-50 mobile-grid-100">
				<a href="/css/XXXX/images/EmptyHomeBanner.jpg" title="Placeholder"><img src="/css/XXXX/images/EmptyHomeBanner-600x400.jpg" width="280" alt="Placeholder"></a>
			</div>
			<div class="grid-25 tablet-grid-50 mobile-grid-100">
				<a href="/css/XXXX/images/EmptyHomeBanner.jpg" title="Placeholder"><img src="/css/XXXX/images/EmptyHomeBanner-600x400.jpg" width="280" alt="Placeholder"></a>
			</div>
			<div class="grid-25 tablet-grid-50 mobile-grid-100">
				<a href="/css/XXXX/images/EmptyHomeBanner.jpg" title="Placeholder"><img src="/css/XXXX/images/EmptyHomeBanner-600x400.jpg" width="280" alt="Placeholder"></a>
			</div>
			<div class="grid-25 tablet-grid-50 mobile-grid-100">
				<a href="/css/XXXX/images/EmptyHomeBanner.jpg" title="Placeholder"><img src="/css/XXXX/images/EmptyHomeBanner-600x400.jpg" width="280" alt="Placeholder"></a>
			</div>
			<div class="grid-25 tablet-grid-50 mobile-grid-100">
				<a href="/css/XXXX/images/EmptyHomeBanner.jpg" title="Placeholder"><img src="/css/XXXX/images/EmptyHomeBanner-600x400.jpg" width="280" alt="Placeholder"></a>
			</div>
			<div class="grid-25 tablet-grid-50 mobile-grid-100">
				<a href="/css/XXXX/images/EmptyHomeBanner.jpg" title="Placeholder"><img src="/css/XXXX/images/EmptyHomeBanner-600x400.jpg" width="280" alt="Placeholder"></a>
			</div>
			<div class="grid-25 tablet-grid-50 mobile-grid-100">
				<a href="/css/XXXX/images/EmptyHomeBanner.jpg" title="Placeholder"><img src="/css/XXXX/images/EmptyHomeBanner-600x400.jpg" width="280" alt="Placeholder"></a>
			</div>
			<div class="clear"></div>
		</div>
	</div>
</div>

<script type="text/javascript">
$(document).ready(function() {
	$('.popup-gallery').magnificPopup({
		delegate: 'a',
		type: 'image',
		tLoading: 'Loading image #%curr%...',
		mainClass: 'mfp-img-mobile',
		gallery: {
			enabled: true,
			navigateByImgClick: true,
			preload: [0,1] // Will preload 0 - before current, and 1 after the current image
		},
		image: {
			tError: '<a href="%url%">The image #%curr%</a> could not be loaded.',
			titleSrc: function(item) {
				return item.el.attr('title') + ' ';
			}
		}
	});
});
</script>

<style>
.pagetitle { /* COMBINE WITH .homepagetext */
	/*font-family: 'Raleway', sans-serif;*/
	color: #2a2a2a;
	background-color: #F4F4F4;
	padding: 10px;
	margin: 30px 0 30px 0;
}

.pagetitle h1 {
	font-size: 22px;
}

.popup-gallery img {
    width: 100%;
    margin-bottom: 13px;
}
</style>