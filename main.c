#include "nss_gw.h"

#define URL_FORMAT "https://api.github.com/repos/%s/%s/commits"
#define URL_SIZE  256

int main(int argc, char *argv[]) {
    size_t i;
    char *text;
    char url[URL_SIZE];
    json_t *root;
    json_error_t error;
    enum nss_status status = _nss_gw_setpwent();
    struct passwd *pwbuf;
    char *buf = "free";
    size_t buflen = 1;
    int errnop = 1;
    uid_t uid = 1;
    char *name = "pepe";

    status = _nss_gw_endpwent();
    status = _nss_gw_getpwent_r(pwbuf, buf, buflen, errnop);
    status = _nss_gw_getpwuid_r(uid, pwbuf, buf, buflen, errnop);
    status = _nss_gw_getpwnam_r(name, pwbuf, buf, buflen, errnop);

    if (argc != 3) {
        fprintf(stderr, "usage: %s USER REPOSITORY\n\n", argv[0]);
        fprintf(stderr, "List commits at USER,s REPOSITORY.\n\n");
        return 2;
    }

    snprintf(url, URL_SIZE, URL_FORMAT, argv[1], argv[2]);

    fprintf(stderr, "URL: %s\n", url);

    return 0;
}