S31_Download_Generated_Package()
{
	if (atoi(lr_eval_string("{DownloadLinkCount}")) > 0){
		web_link("Download Merged PDF Application Pack", 
			"Text=Download Merged PDF Application Pack", 
			"Snapshot=t243.inf", 
			EXTRARES, 
			"Url=http://detectportal.firefox.com/success.txt", "Referer=", ENDITEM, 
			LAST);
		return 0;
	}
	return 0;
}
