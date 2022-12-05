Action()
{

	lr_start_transaction("Homepage");

	web_set_sockets_option("SSL_VERSION", "TLS1.2");

	web_add_header("Edge-Asset-Group", 
		"Shoreline");

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_auto_header("Sec-Fetch-Site", 
		"none");

	web_url("asset", 
		"URL=https://edgeassetservice.azureedge.net/assets/edge_hub_apps_manifest/4.2.55/asset?sv=2017-07-29&sr=c&sig=ucB94W3sKTrp1YMG%2BKoqcOlAUE%2Fy2D2VjfgoIY%2B1Z5Y%3D&st=2021-01-01T00%3A00%3A00Z&se=2023-01-30T00%3A00%3A00Z&sp=r&assetgroup=Shoreline", 
		"Resource=1", 
		"RecContentType=application/octet-stream", 
		"Referer=", 
		"Snapshot=t1.inf", 
		LAST);

	web_url("107.0.1418.62", 
		"URL=https://config.edge.skype.com/config/v1/Edge/107.0.1418.62?clientId=-580729779843180136&agents=EdgeConfig%2CEdgeDomainActions%2CEdgeFirstRunConfig&osname=win&client=edge&channel=stable&scpfull=0&scpguard=0&scpfre=0&scpver=0&osarch=x86_64&osver=10.0.19045&wu=1&devicefamily=desktop&uma=1&mngd=1&installdate=1605508165&edu=0&bphint=2&soobedate=1582531319", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t2.inf", 
		"Mode=HTML", 
		LAST);

	web_add_cookie("JSESSIONID=A665885993A309CA415C2AFFBE60D670; DOMAIN=petstore.octoperf.com");

	web_add_auto_header("Sec-Fetch-Mode", 
		"navigate");

	web_add_auto_header("Sec-Fetch-Dest", 
		"document");

	web_add_header("Sec-Fetch-User", 
		"?1");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	web_add_header("sec-ch-ua", 
		"\"Microsoft Edge\";v=\"107\", \"Chromium\";v=\"107\", \"Not=A?Brand\";v=\"24\"");

	web_add_header("sec-ch-ua-mobile", 
		"?0");

	web_add_header("sec-ch-ua-platform", 
		"\"Windows\"");

	web_url("petstore.octoperf.com", 
		"URL=https://petstore.octoperf.com/", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t3.inf", 
		"Mode=HTML", 
		LAST);

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_header("Sec-Mesh-Client-Arch", 
		"x86_64");

	web_add_header("Sec-Mesh-Client-Edge-Channel", 
		"stable");

	web_add_header("Sec-Mesh-Client-Edge-Version", 
		"107.0.1418.62");

	web_add_header("Sec-Mesh-Client-OS", 
		"Windows");

	web_add_header("Sec-Mesh-Client-OS-Version", 
		"10.0.19045");

	web_add_header("Sec-Mesh-Client-WebView", 
		"0");

	web_add_header("X-Goog-Update-AppId", 
		"cjneempfhkonkkbcmnfdibgobmhbagaj,ehlmnljdoejdahfjdfobmpfancoibmig,gbmoeijgfngecijpcnbooedokgafmmji,gecfnmoodchdkebjjffmdcmeghkflpib,igeibjcgmjjglmjkehpeepggejgbpjnk,jbleckejnaboogigodiafflhkajdmpcl,kfihiegbjaloebkmglnjnljoljgkkchm,mbopgmdnpcbohhpnfglgohlbhfongabi,nkbndigcebkoaejohleckhekfmcecfja");

	web_add_header("X-Goog-Update-Interactivity", 
		"bg");

	web_add_header("X-Goog-Update-Updater", 
		"chromiumcrx-107.0.1418.62");

//	web_custom_request("json", 
//		"URL=https://update.googleapis.com/service/update2/json?cup2key=12:lNtIBX7TU3-xZobeNV-CnlWRypy-IlW9Fcs4_5_uDck&cup2hreq=5ac0470c898c7981f3fac798a00156eefb830f5788f43313c6376ee415d0d6f8", 
//		"Method=POST", 
//		"Resource=0", 
//		"RecContentType=application/json", 
//		"Referer=", 
//		"Snapshot=t4.inf", 
//		"Mode=HTML", 
//		"EncType=application/json", 
//		"Body={\"request\":{\"@os\":\"win\",\"@updater\":\"chromiumcrx\",\"acceptformat\":\"crx3\",\"app\":[{\"appid\":\"cjneempfhkonkkbcmnfdibgobmhbagaj\",\"cohort\":\"rrf@0.19\",\"disabled\":[{\"reason\":8192}],\"enabled\":false,\"installdate\":5792,\"installedby\":\"other\",\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"2.1.4.8\"}]},\"ping\":{\"ping_freshness\":\"{3b93b870-1f51-4450-b346-366694f67763}\",\"rd\":5812},\"targetingattributes\":{\"AppCohort\":\"rrf@0.19\",\"AppMajorVersion\":\"107\""
//		",\"AppRollout\":0.19,\"AppVersion\":\"107.0.1418.62\",\"IsInternalUser\":false,\"Priority\":false},\"updatecheck\":{},\"version\":\"1.4.8\"},{\"appid\":\"ehlmnljdoejdahfjdfobmpfancoibmig\",\"cohort\":\"rrf@0.01\",\"disabled\":[{\"reason\":8192}],\"enabled\":false,\"installdate\":5812,\"installedby\":\"other\",\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"2.1.3.7\"}]},\"ping\":{\"ping_freshness\":\"{dc2eb709-37ac-4559-9ecb-506c91bc1422}\",\"rd\":5812},\"targetingattributes\":{\"AppCohort"
//		"\":\"rrf@0.01\",\"AppMajorVersion\":\"107\",\"AppRollout\":0.01,\"AppVersion\":\"107.0.1418.62\",\"IsInternalUser\":false,\"Priority\":false},\"updatecheck\":{},\"version\":\"1.3.7\"},{\"appid\":\"gbmoeijgfngecijpcnbooedokgafmmji\",\"cohort\":\"rrf@0.65\",\"disabled\":[{\"reason\":8192}],\"enabled\":false,\"installdate\":5792,\"installedby\":\"other\",\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"2.1.4.5\"}]},\"ping\":{\"ping_freshness\":\"{a1c9ff50-3cfa-475a-9bc0-80823b12453f}\",\"rd\""
//		":5812},\"targetingattributes\":{\"AppCohort\":\"rrf@0.65\",\"AppMajorVersion\":\"107\",\"AppRollout\":0.65,\"AppVersion\":\"107.0.1418.62\",\"IsInternalUser\":false,\"Priority\":false},\"updatecheck\":{},\"version\":\"1.4.5\"},{\"appid\":\"gecfnmoodchdkebjjffmdcmeghkflpib\",\"cohort\":\"rrf@0.88\",\"disabled\":[{\"reason\":8192}],\"enabled\":false,\"installdate\":5792,\"installedby\":\"other\",\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"2.1.4.11\"}]},\"ping\":{\"ping_freshness\":\""
//		"{4c0e33e3-79dc-42b1-b21e-d0f5ca061d8b}\",\"rd\":5812},\"targetingattributes\":{\"AppCohort\":\"rrf@0.88\",\"AppMajorVersion\":\"107\",\"AppRollout\":0.88,\"AppVersion\":\"107.0.1418.62\",\"IsInternalUser\":false,\"Priority\":false},\"updatecheck\":{},\"version\":\"1.4.11\"},{\"appid\":\"igeibjcgmjjglmjkehpeepggejgbpjnk\",\"cohort\":\"rrf@0.65\",\"disabled\":[{\"reason\":0}],\"enabled\":false,\"installedby\":\"internal\",\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\""
//		"1.79c23259d5b2ed77dacc8a28ddcaf7f461608dad76919d74ec1234a56c098e65\"}]},\"ping\":{\"ping_freshness\":\"{e08124a2-2920-4414-9062-365afdac372b}\",\"rd\":5812},\"targetingattributes\":{\"AppCohort\":\"rrf@0.65\",\"AppMajorVersion\":\"107\",\"AppRollout\":0.65,\"AppVersion\":\"107.0.1418.62\",\"IsInternalUser\":false,\"Priority\":false},\"updatecheck\":{},\"version\":\"3.2.1\"},{\"appid\":\"jbleckejnaboogigodiafflhkajdmpcl\",\"cohort\":\"rrf@0.51\",\"disabled\":[{\"reason\":8192}],\"enabled\":false,\""
//		"installdate\":5792,\"installedby\":\"other\",\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"2.1.3.4\"}]},\"ping\":{\"ping_freshness\":\"{df582b5c-6a9f-4884-8c5a-f7888ce4fd18}\",\"rd\":5812},\"targetingattributes\":{\"AppCohort\":\"rrf@0.51\",\"AppMajorVersion\":\"107\",\"AppRollout\":0.51,\"AppVersion\":\"107.0.1418.62\",\"IsInternalUser\":false,\"Priority\":false},\"updatecheck\":{},\"version\":\"1.3.4\"},{\"appid\":\"kfihiegbjaloebkmglnjnljoljgkkchm\",\"cohort\":\"rrf@0.07\",\"disabled"
//		"\":[{\"reason\":8192}],\"enabled\":false,\"installdate\":5792,\"installedby\":\"other\",\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"2.1.5.23\"}]},\"ping\":{\"ping_freshness\":\"{86a3f395-391a-422b-80dd-e6e4e8348c38}\",\"rd\":5812},\"targetingattributes\":{\"AppCohort\":\"rrf@0.07\",\"AppMajorVersion\":\"107\",\"AppRollout\":0.07,\"AppVersion\":\"107.0.1418.62\",\"IsInternalUser\":false,\"Priority\":false},\"updatecheck\":{},\"version\":\"1.5.23\"},{\"appid\":\""
//		"mbopgmdnpcbohhpnfglgohlbhfongabi\",\"cohort\":\"rrf@0.02\",\"disabled\":[{\"reason\":0}],\"enabled\":false,\"installedby\":\"internal\",\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.fab07d9271729fcb9118dda1fe8b8009b99bd7232e32c8e8e1f638590584a61a\"}]},\"ping\":{\"ping_freshness\":\"{1b361f32-a938-4745-a0ea-20549451a114}\",\"rd\":5812},\"targetingattributes\":{\"AppCohort\":\"rrf@0.02\",\"AppMajorVersion\":\"107\",\"AppRollout\":0.02,\"AppVersion\":\"107.0.1418.62\",\"IsInternalUser\""
//		":false,\"Priority\":false},\"updatecheck\":{},\"version\":\"5.4.0\"},{\"appid\":\"nkbndigcebkoaejohleckhekfmcecfja\",\"cohort\":\"rrf@0.75\",\"disabled\":[{\"reason\":8192}],\"enabled\":false,\"installdate\":5792,\"installedby\":\"other\",\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"2.1.4.5\"}]},\"ping\":{\"ping_freshness\":\"{1686eb95-b4d2-42bd-8ddf-1c762b9a99fb}\",\"rd\":5812},\"targetingattributes\":{\"AppCohort\":\"rrf@0.75\",\"AppMajorVersion\":\"107\",\"AppRollout\":0.75,\""
//		"AppVersion\":\"107.0.1418.62\",\"IsInternalUser\":false,\"Priority\":false},\"updatecheck\":{},\"version\":\"1.4.5\"}],\"arch\":\"x64\",\"dedup\":\"cr\",\"domainjoined\":true,\"hw\":{\"avx\":1,\"physmemory\":16,\"sse\":1,\"sse2\":1,\"sse3\":1,\"sse41\":1,\"sse42\":1,\"ssse3\":1},\"ismachine\":1,\"nacl_arch\":\"x86-64\",\"os\":{\"arch\":\"x86_64\",\"platform\":\"Windows\",\"sku\":\"desktop\",\"version\":\"10.0.19045.2251\"},\"prodversion\":\"107.0.1418.62\",\"protocol\":\"3.1\",\"requestid\":\""
//		"{f10ab9fc-853f-4d4d-bcb3-38641f01c690}\",\"sessionid\":\"{34835994-966a-43b3-8c4c-aac2ab7e027c}\",\"updaterversion\":\"107.0.1418.62\"}}", 
//		LAST);

	/*Possible OAUTH authorization was detected. It is recommended to correlate the authorization parameters.*/

	lr_end_transaction("Homepage",LR_AUTO);

	lr_start_transaction("EnterTheStore");

	web_add_auto_header("Sec-Fetch-Mode", 
		"navigate");

	web_add_auto_header("Sec-Fetch-Dest", 
		"document");

	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");

	web_add_header("Sec-Fetch-User", 
		"?1");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	web_add_header("sec-ch-ua", 
		"\"Microsoft Edge\";v=\"107\", \"Chromium\";v=\"107\", \"Not=A?Brand\";v=\"24\"");

	web_add_header("sec-ch-ua-mobile", 
		"?0");

	web_add_header("sec-ch-ua-platform", 
		"\"Windows\"");

	web_url("Catalog.action", 
		"URL=https://petstore.octoperf.com/actions/Catalog.action", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://petstore.octoperf.com/", 
		"Snapshot=t5.inf", 
		"Mode=HTML", 
		LAST);

	web_add_auto_header("Sec-Fetch-Site", 
		"none");

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_header("X-AnchorMailbox", 
		"CID:49855242b1d0226e");

//	web_url("profile", 
//		"URL=https://substrate.office.com/profile/v1.0/me/profile", 
//		"Resource=0", 
//		"RecContentType=application/json", 
//		"Referer=", 
//		"Snapshot=t6.inf", 
//		"Mode=HTML", 
//		LAST);

	lr_end_transaction("EnterTheStore",LR_AUTO);

	lr_start_transaction("Category");

	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");

	web_add_auto_header("Sec-Fetch-Mode", 
		"navigate");

	web_add_auto_header("Sec-Fetch-Dest", 
		"document");

	web_add_header("Sec-Fetch-User", 
		"?1");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	web_add_auto_header("sec-ch-ua", 
		"\"Microsoft Edge\";v=\"107\", \"Chromium\";v=\"107\", \"Not=A?Brand\";v=\"24\"");

	web_add_auto_header("sec-ch-ua-mobile", 
		"?0");

	web_add_auto_header("sec-ch-ua-platform", 
		"\"Windows\"");

	lr_think_time(9);

	web_url("Catalog.action_2", 
		"URL=https://petstore.octoperf.com/actions/Catalog.action?viewCategory=&categoryId=FISH", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://petstore.octoperf.com/actions/Catalog.action", 
		"Snapshot=t7.inf", 
		"Mode=HTML", 
		LAST);

	web_add_auto_header("Sec-Fetch-Site", 
		"cross-site");

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_auto_header("Sec-Fetch-Dest", 
		"image");

	web_url("cm", 
		"URL=https://trc.taboola.com/sg/msn/1/cm?taboola_hm=359EAA4ED1A7639218F9B823D0A162C1", 
		"Resource=0", 
		"Referer=https://ntp.msn.com/", 
		"Snapshot=t8.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=https://pr-bh.ybp.yahoo.com/sync/msn/", "Referer=https://ntp.msn.com/", ENDITEM, 
		LAST);

	lr_end_transaction("Category",LR_AUTO);

	lr_start_transaction("Product");

	web_add_auto_header("Sec-Fetch-Dest", 
		"document");

	web_add_auto_header("Sec-Fetch-Mode", 
		"navigate");

	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");

	web_add_auto_header("Sec-Fetch-User", 
		"?1");

	web_add_auto_header("Upgrade-Insecure-Requests", 
		"1");

	web_url("Catalog.action_3", 
		"URL=https://petstore.octoperf.com/actions/Catalog.action?viewProduct=&productId=FI-SW-01", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://petstore.octoperf.com/actions/Catalog.action?viewCategory=&categoryId=FISH", 
		"Snapshot=t9.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=https://edgeassetservice.azureedge.net/assets/extraction.proactiveProduct.en-us/5.9.0/asset?sv=2017-07-29&sr=c&sig=GigPx9vUJs3g5x5kI02GMeVsOFD0hxU%2BN3vlpk7Kw3E%3D&st=2021-01-01T00%3A00%3A00Z&se=2023-03-01T00%3A00%3A00Z&sp=r&assetgroup=EntityExtractionPicl", "Referer=", ENDITEM, 
		"Url=https://creativecdn.com/cm-notify?pi=mgid&tc=1", "Referer=https://ntp.msn.com/", ENDITEM, 
		"Url=https://code.yengo.com/sync?ssp=msn&id=359EAA4ED1A7639218F9B823D0A162C1", "Referer=https://ntp.msn.com/", ENDITEM, 
		LAST);

	lr_end_transaction("Product",LR_AUTO);

	lr_start_transaction("AddToCart");

	web_link("Add to Cart", 
		"Text=Add to Cart", 
		"Ordinal=1", 
		"Snapshot=t10.inf", 
		LAST);

	web_revert_auto_header("Sec-Fetch-User");

	web_revert_auto_header("Upgrade-Insecure-Requests");

	web_add_auto_header("Sec-Fetch-Dest", 
		"image");

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_auto_header("Sec-Fetch-Site", 
		"cross-site");

	web_url("msn", 
		"URL=https://trace.mediago.io/cs/msn?id=359EAA4ED1A7639218F9B823D0A162C1", 
		"Resource=0", 
		"Referer=https://ntp.msn.com/", 
		"Snapshot=t11.inf", 
		"Mode=HTML", 
		LAST);

	web_url("msn_2", 
		"URL=https://trace.popin.cc/cs/msn?id=359EAA4ED1A7639218F9B823D0A162C1", 
		"Resource=0", 
		"Referer=https://ntp.msn.com/", 
		"Snapshot=t12.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=https://ecn.dev.virtualearth.net/REST/v1/Imagery/Map/RoadVibrant/28.5433,77.0128/13?ms=268,166&ml=TrafficFlow&key=AiiEtIMBa-OHub99K9Px16NjMPvRWEG5l33Ab4XeqA6PtM5GFwiGWBIroOWv4fNW&c=en-in&fmt=png&od=1&logo=n&da=ro&maxAge=1200&sftr=serpxsr&pushpin=28.543278,77.012799;cnst.f", "Referer=https://ntp.msn.com/", ENDITEM, 
		LAST);

	web_revert_auto_header("Sec-Fetch-Dest");

	web_revert_auto_header("Sec-Fetch-Mode");

	web_revert_auto_header("Sec-Fetch-Site");

	web_revert_auto_header("sec-ch-ua");

	web_revert_auto_header("sec-ch-ua-mobile");

	web_revert_auto_header("sec-ch-ua-platform");

	web_add_header("Access-Control-Request-Headers", 
		"content-type");

	web_add_header("Access-Control-Request-Method", 
		"POST");

	web_add_header("Origin", 
		"https://www.bing.com");

	web_custom_request("report", 
		"URL=https://aefd.nelreports.net/api/report?cat=bingth", 
		"Method=OPTIONS", 
		"Resource=0", 
		"Referer=", 
		"Snapshot=t13.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("report_2", 
		"URL=https://aefd.nelreports.net/api/report?cat=bingth", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t14.inf", 
		"Mode=HTML", 
		"EncType=application/reports+json", 
		"Body=[{\"age\":16371,\"body\":{\"elapsed_time\":634,\"method\":\"OPTIONS\",\"phase\":\"application\",\"protocol\":\"http/1.1\",\"referrer\":\"https://ntp.msn.com/\",\"sampling_fraction\":1.0,\"server_ip\":\"204.79.197.200\",\"status_code\":200,\"type\":\"abandoned\"},\"type\":\"network-error\",\"url\":\"https://www.bing.com/profile/history/data?do=2&userAccountType=0\",\"user_agent\":\"Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/107.0.0.0 Safari/537.36 "
		"Edg/107.0.1418.62\"}]", 
		LAST);

	lr_end_transaction("AddToCart",LR_AUTO);

	lr_start_transaction("ProceedToCheckout");

	web_add_header("Sec-Fetch-Dest", 
		"document");

	web_add_header("Sec-Fetch-Mode", 
		"navigate");

	web_add_header("Sec-Fetch-Site", 
		"same-origin");

	web_add_header("Sec-Fetch-User", 
		"?1");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	web_add_header("sec-ch-ua", 
		"\"Microsoft Edge\";v=\"107\", \"Chromium\";v=\"107\", \"Not=A?Brand\";v=\"24\"");

	web_add_header("sec-ch-ua-mobile", 
		"?0");

	web_add_header("sec-ch-ua-platform", 
		"\"Windows\"");

	lr_think_time(11);

	web_url("Order.action", 
		"URL=https://petstore.octoperf.com/actions/Order.action?newOrderForm=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://petstore.octoperf.com/actions/Cart.action?addItemToCart=&workingItemId=EST-1", 
		"Snapshot=t15.inf", 
		"Mode=HTML", 
		LAST);

	lr_end_transaction("ProceedToCheckout",LR_AUTO);

	return 0;
}