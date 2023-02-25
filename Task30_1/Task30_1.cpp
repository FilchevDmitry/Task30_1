#include <iostream>
#include<cpr/cpr.h>
/*“get”, “post”, “put”, “delete”, “patch”.
*/
int main()
{
	int choize = 0;
	bool end = true;
	while (end)
	{
		std::cout <<"Input\n1-get\n2-post\n3-put\n4-delete\n5-patch\n6-exit" << std::endl;
		std::cin >> choize;
		switch (choize)
		{
		case 1:
		{
			cpr::Response r = cpr::Get(cpr::Url("http://httpbin.org/get"));
			std::cout << r.text << std::endl;
			std::cout <<"status code "<< r.status_code << std::endl;
			break;
		}
		case 2:
		{
			cpr::Response r = cpr::Post(cpr::Url{ "http://httpbin.org/post" },
				cpr::Payload{ {"key", "value"} });
			std::cout << r.text << std::endl;
			std::cout << "status code " << r.status_code << std::endl;
			break;
		}
		case 3:
		{
			cpr::Response r = cpr::Put(cpr::Url{ "http://httpbin.org/put" },
							  cpr::Payload{ {"key", "value"} });
			std::cout << r.text << std::endl;
			std::cout << "status code " << r.status_code << std::endl;
			break;
		}
		case 4:
		{
			cpr::Response r = cpr::Delete(cpr::Url{ "http://httpbin.org/delete" });
			std::cout << "status code " << r.status_code << std::endl;
			break;
		}
		case 5:
		{
			cpr::Response r = cpr::Patch(cpr::Url{ "http://httpbin.org/patch" },
							  cpr::Payload{ {"key", "value"} });
			std::cout << r.text << std::endl;
			std::cout << "status code " << r.status_code << std::endl;
			break;
		}
		case 6:
		{
			end = false;
			break;
		}
		default:
		{
			std::cout << "Incorect choize!!!" << std::endl;
			break;
		}
			
		}
		
	}
}
