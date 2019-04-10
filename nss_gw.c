//
// Created by tyomo on 2019/04/10.
//

#include "nss_gw.h"

enum nss_status _nss_gw_setpwent(void)
{
    fprintf(stderr, "--->%s\n", __FUNCTION__);
    return NSS_STATUS_SUCCESS;
}

enum nss_status _nss_gw_endpwent(void)
{
    fprintf(stderr, "--->%s\n", __FUNCTION__);
    return NSS_STATUS_SUCCESS;
}

enum nss_status _nss_gw_getpwent_r(struct passwd *pwbuf, char *buf, size_t buflen, int *errnop)
{
    fprintf(stderr, "--->%s\n", __FUNCTION__);
    return NSS_STATUS_SUCCESS;
}

enum nss_status _nss_gw_getpwuid_r(uid_t uid, struct passwd *pwbuf, char *buf, size_t buflen, int *errnop)
{
    fprintf(stderr, "--->%s\n", __FUNCTION__);
    return NSS_STATUS_SUCCESS;
}

enum nss_status _nss_gw_getpwnam_r(const char *name, struct passwd *pwbuf, char *buf, size_t buflen, int *errnop)
{
    fprintf(stderr, "--->%s\n", __FUNCTION__);
    fprintf(stderr, "---->%s\n", pwbuf->pw_name);
    pwbuf->pw_name = "timomo";
    pwbuf->pw_dir = "/tmp";
    pwbuf->pw_shell = "/bin/bash";
    return NSS_STATUS_SUCCESS;
}
