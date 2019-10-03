S6_Perform_Interruption_Report_link()
{
	
	web_reg_save_param_regexp(
		"ParamName=ExportLink",
		"RegExp=\"\.\.\/run\/SIW_YGSL\.start_url\?(?:([^,;]*)\"(?:[^,;]|$))\' value=\'Export\'>",
		LAST);
	

	
	web_url("SIW_POD.start_url", 
		"URL=https://graduate-studies-apply-uat.ualberta.ca/urd/sits.urd/run/SIW_POD.start_url?{InterruptionReportLink}", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://graduate-studies-apply-uat.ualberta.ca/urd/sits.urd/run/siw_portal.url?83A8DC0A3A5843FE-NravpbLF8r7iCx9_I_7owOaGUJ-_AR6sVisa_wxnnPtPfJJSZUSW4-gLdmg8GfwvmOlpVkkyBsBt9RZgxWI_nubX7PMzuJZAfGeDwQ7aF8", 
		"Snapshot=t48.inf", 
		"Mode=HTML", 
		EXTRARES, 
		
		LAST);

	
	web_url("SIW_YMHD.start_url",
		"URL=https://graduate-studies-apply-uat.ualberta.ca/urd/sits.urd/run/SIW_YGSL.start_url{ExportLink}",
		"Resource=0",
		"RecContentType=text/html",
		"Referer=https://graduate-studies-apply-uat.ualberta.ca/urd/sits.urd/run/siw_portal.url?40AEB196D50A4297rhwYdDEqWyu83TDyn6bNxZisWwBWy9-jq7MKK2q9zFpx6EAEQtThxEUjZUbb6n9YBuPEgrSdgO47aRcmwBKnSwhQv2Z-aMXn27l8yO-F8IR6B-MgBHZ0aPOpFukS0O3b",
		"Snapshot=t6.inf",
		"Mode=HTML",
		LAST);
	
	return 0;
}
