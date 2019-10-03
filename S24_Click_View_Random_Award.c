S24_Click_View_Random_Award()
{	
	
//	web_reg_save_param_regexp(
//		"ParamName=ViewApplicantLink",
//		"RegExp=SIW_YMHD\\.start_url\\?(.*?)'\\)",
//		SEARCH_FILTERS,
//		"Scope=Body",
//		"IgnoreRedirections=No",
//		"RequestUrl=*/SIW_YMHD.start_url*",
//		LAST);

	web_url("SIW_YMHD.start_url",
		"URL=https://graduate-studies-apply-uat.ualberta.ca/urd/sits.urd/run/SIW_YMHD.start_url{ViewRandomAwardLink}",
		"Resource=0",
		"RecContentType=text/html",
		"Referer=https://graduate-studies-apply-uat.ualberta.ca/urd/sits.urd/run/siw_portal.url?A4647B9B434C45F6C_c0lQ0eBOilVChBT0qBQcfomDCqQgxLgklmDg72Ls_gH8g4BXD9fdD5jvvzvcAiOBNWul0rLuasv_X8CusZ2IoddlxE617IYDHEPwyfiDM3aAyZ-9wGK2KJmrFPMKbY",
		"Snapshot=t277.inf",
		"Mode=HTML",
		EXTRARES,
		"URL=../css/siw_dmx_lite.css?v=930.1", "Referer=https://graduate-studies-apply-uat.ualberta.ca/urd/sits.urd/run/SIW_YMHD.start_url?{CorrelationParameter_3}", ENDITEM,
		LAST);
	return 0;
}
