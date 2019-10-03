S35_Click_Award_Portal_ExtrAdjudicatoinPortalLink()
{
	
	web_reg_save_param_regexp(
		"ParamName=AdjudicationPortalTabLink",
		"RegExp=siw_portal\\.url\\?(.*?)\"\\ id",
		"Ordinal=4",
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
