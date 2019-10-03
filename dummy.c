dummy()
{

	web_url("success.txt", 
		"URL=http://detectportal.firefox.com/success.txt", 
		"Resource=1", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t108.inf", 
		LAST);

	web_url("success.txt_2", 
		"URL=http://detectportal.firefox.com/success.txt", 
		"Resource=1", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t109.inf", 
		LAST);

	web_url("success.txt_3", 
		"URL=http://detectportal.firefox.com/success.txt", 
		"Resource=1", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t110.inf", 
		LAST);

	web_url("success.txt_4", 
		"URL=http://detectportal.firefox.com/success.txt", 
		"Resource=1", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t111.inf", 
		LAST);

	lr_think_time(5);

	web_url("success.txt_5", 
		"URL=http://detectportal.firefox.com/success.txt", 
		"Resource=1", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t112.inf", 
		LAST);

	web_url("success.txt_6", 
		"URL=http://detectportal.firefox.com/success.txt", 
		"Resource=1", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t113.inf", 
		LAST);

	lr_think_time(7);

	web_url("success.txt_7", 
		"URL=http://detectportal.firefox.com/success.txt", 
		"Resource=1", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t114.inf", 
		LAST);

	web_set_sockets_option("SSL_VERSION", "TLS1.2");

	web_add_cookie("BIGipServerSharedIIS-UAT=757209772.20480.0000; DOMAIN=graduate-studies-apply-uat.ualberta.ca");

	web_add_auto_header("DNT", 
		"1");

	web_add_auto_header("Upgrade-Insecure-Requests", 
		"1");

	web_url("siw_lgn", 
		"URL=https://graduate-studies-apply-uat.ualberta.ca/urd/sits.urd/run/siw_lgn", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t115.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=http://detectportal.firefox.com/success.txt", "Referer=", ENDITEM, 
		"Url=../css/uoa_files/img/new-bg.gif", "Referer=https://graduate-studies-apply-uat.ualberta.ca/urd/sits.urd/css/uoa_files/css/framework.css", ENDITEM, 
		"Url=../css/uoa_files/index_files/modernizr.js", ENDITEM, 
		"Url=../css/uoa_files/css/framework-ie.css?v=930.1", ENDITEM, 
		"Url=../css/uoa_files/css/framework.css?v=930.1", ENDITEM, 
		"Url=../css/uoa_files/css/uoa-ipp.css?v=930.1", ENDITEM, 
		"Url=../css/uoa_files/index_files/all.js?v=930.1", ENDITEM, 
		"Url=../css/uoa_files/font/DINWeb-Bold.woff", "Referer=https://graduate-studies-apply-uat.ualberta.ca/urd/sits.urd/css/uoa_files/css/framework.css", ENDITEM, 
		"Url=../css/uoa_files/font/DINWeb-Medium.woff", "Referer=https://graduate-studies-apply-uat.ualberta.ca/urd/sits.urd/css/uoa_files/css/framework.css", ENDITEM, 
		"Url=../images/working.gif", ENDITEM, 
		"Url=../css/uoa_files/img/banner-bg.svg", "Referer=https://graduate-studies-apply-uat.ualberta.ca/urd/sits.urd/css/uoa_files/css/framework.css", ENDITEM, 
		LAST);

	web_add_cookie("EVISIONLOGINLANG=; DOMAIN=graduate-studies-apply-uat.ualberta.ca");

	web_add_cookie("EVISIONLOGINHTV=; DOMAIN=graduate-studies-apply-uat.ualberta.ca");

	web_add_cookie("EVISIONID_TEST=COOKIE_TEST; DOMAIN=graduate-studies-apply-uat.ualberta.ca");

	web_revert_auto_header("Upgrade-Insecure-Requests");

	lr_think_time(8);

	web_submit_data("SIW_LGN", 
		"Action=https://graduate-studies-apply-uat.ualberta.ca/urd/sits.urd/run/SIW_LGN", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://graduate-studies-apply-uat.ualberta.ca/urd/sits.urd/run/siw_lgn", 
		"Snapshot=t116.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=SCREEN_WIDTH.DUMMY.MENSYS.1", "Value=2560", ENDITEM, 
		"Name=SCREEN_HEIGHT.DUMMY.MENSYS.1", "Value=1080", ENDITEM, 
		"Name=%.DUMMY.MENSYS.1", "Value=FBYHC8QoCloevnM9St2pcr8mtuTxSudOQEXKFeo4na8=;new;;", ENDITEM, 
		"Name=RUNTIME.DUMMY.MENSYS.1", "Value=2019080110284990%1B279141707C3B67741D83745BE445307E47CE741FB123CEB3351051B5246235E967073E2BF65F44BD5F26E1124CB93CEB03AEBA46823154AF319DBE4B6E26074A%1B32A6BA4D86F444989D52A42774F18BA3%1BNONE", ENDITEM, 
		"Name=PARS.DUMMY.MENSYS.1", "Value=", ENDITEM, 
		"Name=MUA_CODE.DUMMY.MENSYS.1", "Value=88882005", ENDITEM, 
		"Name=PASSWORD.DUMMY.MENSYS.1", "Value=Qwerty12345", ENDITEM, 
		"Name=BP101.DUMMY_B.MENSYS.1", "Value=Log in", ENDITEM, 
		EXTRARES, 
		"Url=../fonts/glyphicons-halflings-regular.woff", "Referer=https://graduate-studies-apply-uat.ualberta.ca/urd/sits.urd/css/sv.css", ENDITEM, 
		LAST);

	web_add_cookie("EVISIONID=7AEEA40B6D47489E8BFEC5F70E6AB8B1; DOMAIN=graduate-studies-apply-uat.ualberta.ca");

	web_add_auto_header("Upgrade-Insecure-Requests", 
		"1");

	web_link("here", 
		"Text=here", 
		"Snapshot=t117.inf", 
		EXTRARES, 
		"Url=http://detectportal.firefox.com/success.txt", "Referer=", ENDITEM, 
		LAST);

	web_revert_auto_header("Upgrade-Insecure-Requests");

	lr_think_time(12);

	web_link("Awards Portal", 
		"Text=Awards Portal", 
		"Ordinal=1", 
		"Snapshot=t118.inf", 
		LAST);

	web_add_header("X-Requested-With", 
		"XMLHttpRequest");

	web_submit_data("SIW_INTRAY.getintray", 
		"Action=https://graduate-studies-apply-uat.ualberta.ca/urd/sits.urd/run/SIW_INTRAY.getintray", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://graduate-studies-apply-uat.ualberta.ca/urd/sits.urd/run/siw_portal.url?4896BC1A8CE34C14GAz0HO_i2LdJts-GZhKL8SCL5Yipvv1l3R5zt9bqMfjHgObOXxiecau7agnYgMV5ySFv8vi6TD8-w37Zn3JhN0P0Y3eRTzphccSyevOk8aJ2xMhsiCeP6IokARd8On5O", 
		"Snapshot=t119.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=NKEY", "Value=00F64DF5C6D648EAQZ1vDAX3hHGdIa--cu2Q_14_hCVFqMqKoX6BrA917jUoKaCqKPKp66YzGQ06dkMGmcN5wuGHNwfAkG1tdtYq0DTarwEoWLMT7fz7oiAsf3vl5VmbO6N-QVDTbFAp81BTj1Ai7T6ZGGxEDWOt_4Sm_3gzq2GsH_n7Tnbfgnb2lr7fLOC39qSVjzlBwkLkjLW7Qfuk95XbeshuuNDEGQmj0g", ENDITEM, 
		"Name=MHV_CODE", "Value=GSAWD_001", ENDITEM, 
		"Name=PAGE", "Value=", ENDITEM, 
		"Name=ORDR", "Value=", ENDITEM, 
		"Name=ISSC", "Value=86C11473-BFB4-4041-92AC-25891B285042", ENDITEM, 
		"Name=DIVID", "Value=divE397D53F-BCFF-4D02-8BCE-E199BB3FA6D3", ENDITEM, 
		EXTRARES, 
		"Url=../images/emailred.jpg", "Referer=https://graduate-studies-apply-uat.ualberta.ca/urd/sits.urd/run/siw_portal.url?4896BC1A8CE34C14GAz0HO_i2LdJts-GZhKL8SCL5Yipvv1l3R5zt9bqMfjHgObOXxiecau7agnYgMV5ySFv8vi6TD8-w37Zn3JhN0P0Y3eRTzphccSyevOk8aJ2xMhsiCeP6IokARd8On5O", ENDITEM, 
		"Url=../images/emailunr.jpg", "Referer=https://graduate-studies-apply-uat.ualberta.ca/urd/sits.urd/run/siw_portal.url?4896BC1A8CE34C14GAz0HO_i2LdJts-GZhKL8SCL5Yipvv1l3R5zt9bqMfjHgObOXxiecau7agnYgMV5ySFv8vi6TD8-w37Zn3JhN0P0Y3eRTzphccSyevOk8aJ2xMhsiCeP6IokARd8On5O", ENDITEM, 
		LAST);

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	web_url("siw_portal.url", 
		"URL=https://graduate-studies-apply-uat.ualberta.ca/urd/sits.urd/run/siw_portal.url?D285E79E8BF94E96_WnpRlMMznmSTk--k1EHHmvbTEUSTAH4DvyVJZ9EkRML6UiSmHyUYzb14V8dEaiQQiYzOsKlEPD2Hu2rqoY2O_IWE-Vx5dAY39XHbzpVPxGUzQQXgg_8tB06ELGNpTe3", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://graduate-studies-apply-uat.ualberta.ca/urd/sits.urd/run/siw_portal.url?4896BC1A8CE34C14GAz0HO_i2LdJts-GZhKL8SCL5Yipvv1l3R5zt9bqMfjHgObOXxiecau7agnYgMV5ySFv8vi6TD8-w37Zn3JhN0P0Y3eRTzphccSyevOk8aJ2xMhsiCeP6IokARd8On5O", 
		"Snapshot=t120.inf", 
		"Mode=HTML", 
		LAST);

	web_add_header("X-Requested-With", 
		"XMLHttpRequest");

	web_submit_data("SIW_INTRAY.getintray_2", 
		"Action=https://graduate-studies-apply-uat.ualberta.ca/urd/sits.urd/run/SIW_INTRAY.getintray", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://graduate-studies-apply-uat.ualberta.ca/urd/sits.urd/run/siw_portal.url?D285E79E8BF94E96_WnpRlMMznmSTk--k1EHHmvbTEUSTAH4DvyVJZ9EkRML6UiSmHyUYzb14V8dEaiQQiYzOsKlEPD2Hu2rqoY2O_IWE-Vx5dAY39XHbzpVPxGUzQQXgg_8tB06ELGNpTe3", 
		"Snapshot=t121.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=NKEY", "Value=5994B18808EE4FBCftUpcb2OQQbPTLPZkeZ7ldzc33wpAcsjeV2vbTQ-XerdsYPvqQCrbVekzHQVr3VCuqpkS0nHBFDmJC0cXJzubAo5oVozEA8riupC8G6D_Mwk8Hz0WGx9Rv8cJJBwjCxlc5odR5NvYwIi6gb8PDYznkBmH1Fk9kYJg4k4EXDGAP4BgvcQ9NVZ7Oa0vu-3SpXIPgEvLsuOn1AHbbeAlTuPzMfxAtD54iZGCluk5C2bv3opjQLG0JmqLHEeoYFbrtd5", ENDITEM, 
		"Name=MHV_CODE", "Value=GSAWD_004", ENDITEM, 
		"Name=PAGE", "Value=", ENDITEM, 
		"Name=ORDR", "Value=", ENDITEM, 
		"Name=ISSC", "Value=35E2CCC9-5F0E-4900-8108-C5A34E44C547", ENDITEM, 
		"Name=DIVID", "Value=div81877A62-373F-4DFA-8D8C-0516DD64D6DB", ENDITEM, 
		LAST);

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	lr_think_time(6);

	web_url("SIW_YMHD.start_url", 
		"URL=https://graduate-studies-apply-uat.ualberta.ca/urd/sits.urd/run/SIW_YMHD.start_url?A63113C423384F15gVs2v7n2SSw2XRMLIxs3aZpL2mD70vzjNRxxgJY2HLKV3hBM2uKalHpM9wqH56aUYnGLIci95Q8OEi9-nv2PqdHXTiD5Pw-pgwZz2ARX-49svBxm_WJqFz1UiTsm50qqMkCAIzxbKNavAW0UvkHN_HqGdkob0MBt-nGDDYiWCyrRK9GZReULvQGCSq-NYZEM7ERO4e0K_TyBKnPU0AOajKuHgoCKdtVWO0w2UM3G3DJKCfjIk5ShVp_eA2ggSAxi", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://graduate-studies-apply-uat.ualberta.ca/urd/sits.urd/run/siw_portal.url?D285E79E8BF94E96_WnpRlMMznmSTk--k1EHHmvbTEUSTAH4DvyVJZ9EkRML6UiSmHyUYzb14V8dEaiQQiYzOsKlEPD2Hu2rqoY2O_IWE-Vx5dAY39XHbzpVPxGUzQQXgg_8tB06ELGNpTe3", 
		"Snapshot=t122.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=../plugins/css/chosen/chosen.css?v=930.1", "Referer=https://graduate-studies-apply-uat.ualberta.ca/urd/sits.urd/run/SIW_YMHD.start_url?A63113C423384F15gVs2v7n2SSw2XRMLIxs3aZpL2mD70vzjNRxxgJY2HLKV3hBM2uKalHpM9wqH56aUYnGLIci95Q8OEi9-nv2PqdHXTiD5Pw-pgwZz2ARX-49svBxm_WJqFz1UiTsm50qqMkCAIzxbKNavAW0UvkHN_HqGdkob0MBt-nGDDYiWCyrRK9GZReULvQGCSq-NYZEM7ERO4e0K_TyBKnPU0AOajKuHgoCKdtVWO0w2UM3G3DJKCfjIk5ShVp_eA2ggSAxi", ENDITEM, 
		"Url=../plugins/javascript/chosen/chosen.jquery.min.js?v=930.1", "Referer=https://graduate-studies-apply-uat.ualberta.ca/urd/sits.urd/run/SIW_YMHD.start_url?A63113C423384F15gVs2v7n2SSw2XRMLIxs3aZpL2mD70vzjNRxxgJY2HLKV3hBM2uKalHpM9wqH56aUYnGLIci95Q8OEi9-nv2PqdHXTiD5Pw-pgwZz2ARX-49svBxm_WJqFz1UiTsm50qqMkCAIzxbKNavAW0UvkHN_HqGdkob0MBt-nGDDYiWCyrRK9GZReULvQGCSq-NYZEM7ERO4e0K_TyBKnPU0AOajKuHgoCKdtVWO0w2UM3G3DJKCfjIk5ShVp_eA2ggSAxi", ENDITEM, 
		"Url=../plugins/css/chosen/chosen-sprite.png", "Referer=https://graduate-studies-apply-uat.ualberta.ca/urd/sits.urd/plugins/css/chosen/chosen.css?v=930.1", ENDITEM, 
		"Url=http://detectportal.firefox.com/success.txt", "Referer=", ENDITEM, 
		LAST);

	lr_start_transaction("aaaaaaaaaaa");

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");

	web_submit_data("siw_ttq.validation", 
		"Action=https://graduate-studies-apply-uat.ualberta.ca/urd/sits.urd/run/siw_ttq.validation", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://graduate-studies-apply-uat.ualberta.ca/urd/sits.urd/run/SIW_YMHD.start_url?A63113C423384F15gVs2v7n2SSw2XRMLIxs3aZpL2mD70vzjNRxxgJY2HLKV3hBM2uKalHpM9wqH56aUYnGLIci95Q8OEi9-nv2PqdHXTiD5Pw-pgwZz2ARX-49svBxm_WJqFz1UiTsm50qqMkCAIzxbKNavAW0UvkHN_HqGdkob0MBt-nGDDYiWCyrRK9GZReULvQGCSq-NYZEM7ERO4e0K_TyBKnPU0AOajKuHgoCKdtVWO0w2UM3G3DJKCfjIk5ShVp_eA2ggSAxi", 
		"Snapshot=t123.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=mode", "Value=ONE", ENDITEM, 
		"Name=indx", "Value=ANSWER.TTQ.MENSYS.1.", ENDITEM, 
		"Name=valu", "Value=", ENDITEM, 
		"Name=ttqs", "Value=4", ENDITEM, 
		"Name=mhdc", "Value=00100009435763843746", ENDITEM, 
		"Name=seqn", "Value=2", ENDITEM, 
		"Name=nkey", "Value=D4B38D53B2554D167oIqxkxHYEWtRQ1a3DeexjRmvMbxIetxnNXcSHlOKkK0jkjkLdgTmvgytrYPd2pYW0bacNzH86Wn2mH9NstTyA", ENDITEM, 
		LAST);

	web_submit_data("siw_ttq.validation_2", 
		"Action=https://graduate-studies-apply-uat.ualberta.ca/urd/sits.urd/run/siw_ttq.validation", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://graduate-studies-apply-uat.ualberta.ca/urd/sits.urd/run/SIW_YMHD.start_url?A63113C423384F15gVs2v7n2SSw2XRMLIxs3aZpL2mD70vzjNRxxgJY2HLKV3hBM2uKalHpM9wqH56aUYnGLIci95Q8OEi9-nv2PqdHXTiD5Pw-pgwZz2ARX-49svBxm_WJqFz1UiTsm50qqMkCAIzxbKNavAW0UvkHN_HqGdkob0MBt-nGDDYiWCyrRK9GZReULvQGCSq-NYZEM7ERO4e0K_TyBKnPU0AOajKuHgoCKdtVWO0w2UM3G3DJKCfjIk5ShVp_eA2ggSAxi", 
		"Snapshot=t124.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=mode", "Value=ONE", ENDITEM, 
		"Name=indx", "Value=ANSWER.TTQ.MENSYS.1.", ENDITEM, 
		"Name=valu", "Value=2018/19", ENDITEM, 
		"Name=ttqs", "Value=4", ENDITEM, 
		"Name=mhdc", "Value=00100009435763843746", ENDITEM, 
		"Name=seqn", "Value=2", ENDITEM, 
		"Name=nkey", "Value=D4B38D53B2554D167oIqxkxHYEWtRQ1a3DeexjRmvMbxIetxnNXcSHlOKkK0jkjkLdgTmvgytrYPd2pYW0bacNzH86Wn2mH9NstTyA", ENDITEM, 
		LAST);

	lr_think_time(6);

	web_submit_data("siw_dmu.timeout", 
		"Action=https://graduate-studies-apply-uat.ualberta.ca/urd/sits.urd/run/siw_dmu.timeout", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://graduate-studies-apply-uat.ualberta.ca/urd/sits.urd/run/siw_portal.url?D285E79E8BF94E96_WnpRlMMznmSTk--k1EHHmvbTEUSTAH4DvyVJZ9EkRML6UiSmHyUYzb14V8dEaiQQiYzOsKlEPD2Hu2rqoY2O_IWE-Vx5dAY39XHbzpVPxGUzQQXgg_8tB06ELGNpTe3", 
		"Snapshot=t125.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=MOD", "Value=INIT", ENDITEM, 
		"Name=KEY", "Value=44AB8B7C22CA44ACAhTAXwq9r68X_IQAMbPLW2CzMc7yw1FANS6kZ8bWbcb5WUCsUTcyfyknaMdMw2v0Qo2OENa-lxnqKcf4BsNdrll8Z4YzqTSD", ENDITEM, 
		LAST);

	web_revert_auto_header("X-Requested-With");

	web_add_auto_header("Upgrade-Insecure-Requests", 
		"1");

	web_submit_data("SIW_TTQ", 
		"Action=https://graduate-studies-apply-uat.ualberta.ca/urd/sits.urd/run/SIW_TTQ", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://graduate-studies-apply-uat.ualberta.ca/urd/sits.urd/run/SIW_YMHD.start_url?A63113C423384F15gVs2v7n2SSw2XRMLIxs3aZpL2mD70vzjNRxxgJY2HLKV3hBM2uKalHpM9wqH56aUYnGLIci95Q8OEi9-nv2PqdHXTiD5Pw-pgwZz2ARX-49svBxm_WJqFz1UiTsm50qqMkCAIzxbKNavAW0UvkHN_HqGdkob0MBt-nGDDYiWCyrRK9GZReULvQGCSq-NYZEM7ERO4e0K_TyBKnPU0AOajKuHgoCKdtVWO0w2UM3G3DJKCfjIk5ShVp_eA2ggSAxi", 
		"Snapshot=t126.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=%.WEB_HEAD.MENSYS.1", "Value=S8ubErgTUT7KJxHrml4ixRL1rqmrqZuOdyuZo0uLTQ8=;new;;", ENDITEM, 
		"Name=MHDC.DUMMY.MENSYS.1", "Value=00100009435763843746", ENDITEM, 
		"Name=SEQN.DUMMY.MENSYS.1", "Value=2", ENDITEM, 
		"Name=NKEY.DUMMY.MENSYS.1", "Value=D4B38D53B2554D167oIqxkxHYEWtRQ1a3DeexjRmvMbxIetxnNXcSHlOKkK0jkjkLdgTmvgytrYPd2pYW0bacNzH86Wn2mH9NstTyA", ENDITEM, 
		"Name=RUN_MODE.DUMMY.MENSYS.1", "Value=ACT%1BHASH=FEC7C04AEC37B7B6E66D2E217FB5B050C21C6D0C2B4C3A1E4928D98ED5D77EABCFD1562229D38E205744B18740359468B7762019CB4DAA261BB5E717327B8775", ENDITEM, 
		"Name=%.DUMMY.MENSYS.1", "Value=FBYHC8QoCloevnM9St2pcr8mtuTxSudOQEXKFeo4na8=;new;;", ENDITEM, 
		"Name=#.TTE.MENSYS.1-1", "Value=BeWClFpZoH9tTZX2iVq0/4q6fLhkKGWnSmWuRbL9UGQ=;mod;4F4282EF;DhJDR1NBV0RfQVdEXzAyAyJDNQ==", ENDITEM, 
		"Name=ANSWER.TTQ.MENSYS.1", "Value=2018/19", ENDITEM, 
		"Name=DUM_FIXT.TTQ.MENSYS.1", "Value=", ENDITEM, 
		"Name=ANSWER.TTQ.MENSYS.2", "Value=", ENDITEM, 
		"Name=DUM_FIXT.TTQ.MENSYS.2", "Value=", ENDITEM, 
		"Name=ANSWER.TTQ.MENSYS.3", "Value=", ENDITEM, 
		"Name=DUM_FIXT.TTQ.MENSYS.3", "Value=", ENDITEM, 
		"Name=ANSWER.TTQ.MENSYS.4", "Value=", ENDITEM, 
		"Name=DUM_FIXT.TTQ.MENSYS.4", "Value=", ENDITEM, 
		"Name=DUM_FIXT.TTQ.MENSYS.5", "Value=", ENDITEM, 
		"Name=ANSWER.TTQ.MENSYS.6", "Value=EN", ENDITEM, 
		"Name=DUM_FIXT.TTQ.MENSYS.6", "Value=", ENDITEM, 
		"Name=ANSWER.TTQ.MENSYS.7", "Value=", ENDITEM, 
		"Name=DUM_FIXT.TTQ.MENSYS.7", "Value=", ENDITEM, 
		"Name=ANSWER.TTQ.MENSYS.8", "Value=LINKS", ENDITEM, 
		"Name=DUM_FIXT.TTQ.MENSYS.8", "Value=", ENDITEM, 
		"Name=ANSWER.TTQ.MENSYS.9", "Value=Search", ENDITEM, 
		"Name=DUM_FIXT.TTQ.MENSYS.9", "Value=", ENDITEM, 
		"Name=DUM_FIXT.TTQ.MENSYS.10", "Value=", ENDITEM, 
		"Name=#.TTQ.MENSYS.1", "Value=CRbY/7fDyCfeHJyk2IEblXV1DbLxFEWyCpvSvGtD8SU=;mod;8CD9D032;AzJDNA4SQ0dTQVdEX0FXRF8wMgMiQzU=", ENDITEM, 
		"Name=#.TTQ.MENSYS.2", "Value=ZeDmQXLF8Yz3EtygHN/w5hYN2DsyDIMERLjwgrlvkcY=;mod;1EEB94DB;AzJDMQ4SQ0dTQVdEX0FXRF8wMgMiQzU=", ENDITEM, 
		"Name=#.TTQ.MENSYS.3", "Value=OwPkHrcPbobItinha7gqQZUE1RKZmeGCpk4sGEckOY4=;mod;AC324D58;AzJDMg4SQ0dTQVdEX0FXRF8wMgMiQzU=", ENDITEM, 
		"Name=#.TTQ.MENSYS.4", "Value=YEqYFFm2zCnat2tKcXu5EDlKcz0FLf9TDE+GMxtUwcM=;mod;FA802057;AzJDMw4SQ0dTQVdEX0FXRF8wMgMiQzU=", ENDITEM, 
		"Name=#.TTQ.MENSYS.5", "Value=3+AFx/Z0ENtKXQsxT0damkmsZBrkhUNFbx3CpIWGD68=;mod;302E22CE;BDJDOTAOEkNHU0FXRF9BV0RfMDIDIkM1", ENDITEM, 
		"Name=#.TTQ.MENSYS.6", "Value=Gtk4LtwF7GtYCMgqnbmvMgcRhUxaBjotd4oxpgruvag=;mod;7BE2CF41;BDJDOTEOEkNHU0FXRF9BV0RfMDIDIkM1", ENDITEM, 
		"Name=#.TTQ.MENSYS.7", "Value=Y2lp/lzlFQdzHVNaqqBoobVRGuXk6FTa0OEy7/mUS+g=;mod;03468A52;BDJDOTIOEkNHU0FXRF9BV0RfMDIDIkM1", ENDITEM, 
		"Name=#.TTQ.MENSYS.8", "Value=cN+2+bsaIFFPIDYrswAUlWh3yj7fd+yB0V5QYd/Ps14=;mod;9DF9AF3D;BTJDMTAxDhJDR1NBV0RfQVdEXzAyAyJDNQ==", ENDITEM, 
		"Name=#.TTQ.MENSYS.9", "Value=NDrBq4KJDOlHqRV2SSxAVBIZggK4ggVRO0SG1MaKuDk=;mod;9B78F1AF;BDJDNTAOEkNHU0FXRF9BV0RfMDIDIkM1", ENDITEM, 
		"Name=#.TTQ.MENSYS.10", "Value=PucbnPNcN2Z0n3ZzEtTj9aUwiFZBmLytsZqH5JYT3Aw=;mod;6F96FDC8;BTJDOTAxDhJDR1NBV0RfQVdEXzAyAyJDNQ==", ENDITEM, 
		"Name=#.TTE.MENSYS.1-1", "Value=BeWClFpZoH9tTZX2iVq0/4q6fLhkKGWnSmWuRbL9UGQ=;mod;4F4282EF;DhJDR1NBV0RfQVdEXzAyAyJDNQ==", ENDITEM, 
		"Name=%.DUMMY.MENSYS.1", "Value=FBYHC8QoCloevnM9St2pcr8mtuTxSudOQEXKFeo4na8=;new;;", ENDITEM, 
		LAST);

	lr_think_time(9);

	web_submit_form("SIW_TTQ_2", 
		"Snapshot=t127.inf", 
		ITEMDATA, 
		"Name=ANSWER.TTQ.MENSYS.1", "Value=2018/2019", ENDITEM, 
		"Name=ANSWER.TTQ.MENSYS.2", "Value=", ENDITEM, 
		"Name=ANSWER.TTQ.MENSYS.3", "Value=", ENDITEM, 
		"Name=ANSWER.TTQ.MENSYS.4", "Value=", ENDITEM, 
		"Name=ANSWER.TTQ.MENSYS.5", "Value=<OFF>", ENDITEM, 
		"Name=ANSWER.TTQ.MENSYS.6", "Value=Faculty of Engineering", ENDITEM, 
		"Name=ANSWER.TTQ.MENSYS.7", "Value=", ENDITEM, 
		"Name=ANSWER.TTQ.MENSYS.8", "Value=LINKS", ENDITEM, 
		"Name=ANSWER.TTQ.MENSYS.9", "Value=Search", ENDITEM, 
		LAST);

	lr_end_transaction("aaaaaaaaaaa",LR_AUTO);

	lr_think_time(14);

	web_submit_form("SIW_TTQ_3", 
		"Snapshot=t128.inf", 
		ITEMDATA, 
		"Name=ANSWER.TTQ.MENSYS.1", "Value=2018/2019", ENDITEM, 
		"Name=ANSWER.TTQ.MENSYS.2", "Value=", ENDITEM, 
		"Name=ANSWER.TTQ.MENSYS.3", "Value=", ENDITEM, 
		"Name=ANSWER.TTQ.MENSYS.4", "Value=", ENDITEM, 
		"Name=ANSWER.TTQ.MENSYS.5", "Value=<OFF>", ENDITEM, 
		"Name=ANSWER.TTQ.MENSYS.6", "Value=Faculty of Engineering", ENDITEM, 
		"Name=ANSWER.TTQ.MENSYS.7", "Value=", ENDITEM, 
		"Name=ANSWER.TTQ.MENSYS.8", "Value=LINKS", ENDITEM, 
		"Name=ANSWER.TTQ.MENSYS.9", "Value=Search", ENDITEM, 
		LAST);

	return 0;
}