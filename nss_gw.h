//
// Created by tyomo on 2019/04/10.
//

#ifndef UNTITLED1_NSS_GW_H
#define UNTITLED1_NSS_GW_H

#include <nss.h>
#include <stdio.h>
#include <sys/types.h>
#include <pwd.h>
#include <stdio.h>
#include <jansson.h>
#include <string.h>
#include <curl/curl.h>
#include <nss.h>

enum nss_status _nss_gw_setpwent(void);
enum nss_status _nss_gw_endpwent(void);
enum nss_status _nss_gw_getpwent_r(struct passwd *pwbuf, char *buf, size_t buflen, int *errnop);
enum nss_status _nss_gw_getpwuid_r(uid_t uid, struct passwd *pwbuf, char *buf, size_t buflen, int *errnop);
enum nss_status _nss_gw_getpwnam_r(const char *name, struct passwd *pwbuf, char *buf, size_t buflen, int *errnop);

#endif //UNTITLED1_NSS_GW_H
