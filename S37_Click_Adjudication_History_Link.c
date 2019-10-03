S37_Click_Adjudication_History_Link()
{
	web_url("SIW_POD.start_url",
		"URL=https://graduate-studies-apply-uat.ualberta.ca/urd/sits.urd/run/SIW_POD.start_url?{AdjudicationHistoryLink}",
		"Resource=0",
		"RecContentType=text/html",
		"Referer=https://graduate-studies-apply-uat.ualberta.ca/urd/sits.urd/run/siw_portal.url?{AdjudicationPortalTabLink}",
		"Snapshot=t337.inf",
		"Mode=HTML",
		EXTRARES,
		"URL=../plugins/javascript/chosen/chosen.jquery.min.js?v=930.1", "Referer=https://graduate-studies-apply-uat.ualberta.ca/urd/sits.urd/run/SIW_POD.start_url?{AdjudicationHistoryLink}", ENDITEM,
		"URL=../plugins/css/chosen/chosen.css?v=930.1", "Referer=https://graduate-studies-apply-uat.ualberta.ca/urd/sits.urd/run/SIW_POD.start_url?{AdjudicationHistoryLink}", ENDITEM,
		"URL=../plugins/css/chosen/chosen-sprite.png", "Referer=https://graduate-studies-apply-uat.ualberta.ca/urd/sits.urd/plugins/css/chosen/chosen.css?v=930.1", ENDITEM,
		LAST);


	return 0;
}
