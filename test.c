#include <stdio.h>
#include <curl/curl.h>



int main(int argc, char const* argv[])
{
    /* initial LC globally */
    curl_global_init(CURL_GLOBAL_ALL);

    /* create session handle */
    CURL * myHandle;
    CURLcode result;

    myHandle = curl_easy_init();

    curl_easy_setopt(myHandle, CURLOPT_URL, "http://tw.yahoo.com");
    result = curl_easy_perform(myHandle);

    curl_easy_cleanup(myHandle);
    printf("LibCurl fuck!\n");
    return 0;
}
