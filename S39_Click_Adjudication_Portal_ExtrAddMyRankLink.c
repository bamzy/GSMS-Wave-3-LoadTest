S39_Click_Adjudication_Portal_ExtrAddMyRankLink()
{
	
	
	web_reg_save_param_regexp(
		"ParamName=AddMyRankLink",
		"RegExp=SIW_POD\\.start_url\\?(.*?)\"\\ target",
		SEARCH_FILTERS,
		"Scope=Body",
		"IgnoreRedirections=No",
		"RequestUrl=*/siw_portal.url*",
		LAST);
	
	web_url("siw_portal.url_2",
		"URL=https://graduate-studies-apply-uat.ualberta.ca/urd/sits.urd/run/siw_portal.url?{AdjudicationPortalTabLink}",
		"Resource=0",
		"RecContentType=text/html",
		"Referer=https://graduate-studies-apply-uat.ualberta.ca/urd/sits.urd/run/siw_portal.url?076ACF90C76C4C3FoY0G18A2O8AFDAYVXk4vQWYiT2Bp209u3wl84B7b55Sua-P1GdfR5fGX7jwQrOPB40dJSPmYvo6vRwbazruh0hyQ_mJB-Cp-YYMnTyZ1RQXRS_dMW-0dfKMxRCmJ4Fa5",
		"Snapshot=t334.inf",
		"Mode=HTML",
		LAST);
	return 0;
}
