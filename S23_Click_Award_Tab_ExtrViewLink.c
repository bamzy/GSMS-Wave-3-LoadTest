S23_Click_Award_Tab_ExtrViewLink()
{
	
	web_reg_save_param_regexp(
		"ParamName=ViewRandomAwardLink",
//		"RegExp=JG: Test.*SIW_YMHD\.start_url\?(.*?)' target='_blank'>View",		
		"RegExp=2.3.22 App/Nom with all.*SIW_YMHD\.start_url\?(.*?)' target='_blank'>View",		
		"Ordinal=1",
		SEARCH_FILTERS,
		"Scope=Body",
		"IgnoreRedirections=No",
		"RequestUrl=*/siw_portal.url*",
		LAST);
	
	web_url("siw_portal.url",
		"URL=https://graduate-studies-apply-uat.ualberta.ca/urd/sits.urd/run/siw_portal.url?{AwardsTabLink}",
		"Resource=0",
		"RecContentType=text/html",
		"Referer=https://graduate-studies-apply-uat.ualberta.ca/urd/sits.urd/run/siw_portal.url?B237F31D3E2C4E0Cm2Ed0RLvaI-H3x3p2IhfRZ_osleugIFa8Zt0o4NjXF-S4wwGVCp6RXDu_7QXqX-a8YON6YUAugfeG2UhLse8IRJhOkQD_ot79cDKMNt8S3g",
		"Snapshot=t54.inf",
		"Mode=HTML",
		LAST);
	return 0;
}
