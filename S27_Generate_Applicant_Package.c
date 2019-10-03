S27_Generate_Applicant_Package()
{
	
	
	web_url("Show_PDF",
		"URL=https://graduate-studies-apply-uat.ualberta.ca/PdfMergeAPI/Show_PDF?portal=awards&qrtyirsvcbgsklhd={qrtyirsvcbgsklhd}",
		"Resource=0",
		"RecContentType=text/html",
		"Referer=https://graduate-studies-apply-uat.ualberta.ca/urd/sits.urd/run/SIW_YMHD.start_url?{whatIneed}",
		"Snapshot=t291.inf",
		"Mode=HTML",
		EXTRARES,
		"URL=http://detectportal.firefox.com/success.txt", ENDITEM,
		"URL=../css/uoa_files/img/new-bg.gif", "Referer=https://graduate-studies-apply-uat.ualberta.ca/css/uoa_files/css/framework.css", ENDITEM,
		"URL=../css/uoa_files/font/DINWeb-Bold.woff", "Referer=https://graduate-studies-apply-uat.ualberta.ca/css/uoa_files/css/framework.css", ENDITEM,
		"URL=http://ciscobinary.openh264.org/openh264-win32-0410d336bb748149a4f560eb6108090f078254b1.zip", ENDITEM,
		LAST);
	

}
