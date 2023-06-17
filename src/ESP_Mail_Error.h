/**
 * Created April 16, 2023
 */
#pragma once

#ifndef ESP_MAIL_ERROR_H
#define ESP_MAIL_ERROR_H

#include "ESP_Mail_Client_Version.h"
#if !VALID_VERSION_CHECK(30111)
#error "Mixed versions compilation."
#endif

#define TCP_CLIENT_ERROR_CONNECTION_REFUSED -1
#define TCP_CLIENT_ERROR_SEND_DATA_FAILED -2
#define TCP_CLIENT_ERROR_NOT_INITIALIZED -3
#define TCP_CLIENT_ERROR_NOT_CONNECTED -4

#if defined(ENABLE_SMTP)

#define SMTP_STATUS_SERVER_CONNECT_FAILED -100
#define SMTP_STATUS_SMTP_GREETING_GET_RESPONSE_FAILED -101
#define SMTP_STATUS_SMTP_GREETING_SEND_ACK_FAILED -102
#define SMTP_STATUS_AUTHEN_NOT_SUPPORT -103
#define SMTP_STATUS_AUTHEN_FAILED -104
#define SMTP_STATUS_USER_LOGIN_FAILED -105
#define SMTP_STATUS_PASSWORD_LOGIN_FAILED -106
#define SMTP_STATUS_SEND_HEADER_SENDER_FAILED -107
#define SMTP_STATUS_SEND_HEADER_RECIPIENT_FAILED -108
#define SMTP_STATUS_SEND_BODY_FAILED -109
#define SMTP_STATUS_SERVER_OAUTH2_LOGIN_DISABLED -110
#define SMTP_STATUS_NO_VALID_RECIPIENTS_EXISTED -111
#define SMTP_STATUS_NO_VALID_SENDER_EXISTED -112
#define SMTP_STATUS_NO_SUPPORTED_AUTH -113
#define SMTP_STATUS_SEND_CUSTOM_COMMAND_FAILED -114
#define SMTP_STATUS_XOAUTH2_AUTH_FAILED -115
#define SMTP_STATUS_UNDEFINED -116
#endif

#if defined(ENABLE_IMAP)

#define IMAP_STATUS_SERVER_CONNECT_FAILED -200
#define IMAP_STATUS_IMAP_RESPONSE_FAILED -201
#define IMAP_STATUS_AUTHENTICATE_FAILED -202
#define IMAP_STATUS_BAD_COMMAND -203
#define IMAP_STATUS_STORE_FAILED -204
#define IMAP_STATUS_SERVER_OAUTH2_LOGIN_DISABLED -205
#define IMAP_STATUS_NO_MESSAGE -206
#define IMAP_STATUS_ERROR_DOWNLAD_TIMEOUT -207
#define IMAP_STATUS_CLOSE_MAILBOX_FAILED -208
#define IMAP_STATUS_OPEN_MAILBOX_FAILED -209
#define IMAP_STATUS_LIST_MAILBOXS_FAILED -210
#define IMAP_STATUS_CHECK_CAPABILITIES_FAILED -211
#define IMAP_STATUS_NO_SUPPORTED_AUTH -212
#define IMAP_STATUS_NO_MAILBOX_FOLDER_OPENED -213
#define IMAP_STATUS_FIRMWARE_UPDATE_INIT_FAILED -214
#define IMAP_STATUS_FIRMWARE_UPDATE_WRITE_FAILED -215
#define IMAP_STATUS_FIRMWARE_UPDATE_END_FAILED -216
#define IMAP_STATUS_CHANGEDSINC_MODSEQ_TEST_FAILED -217
#define IMAP_STATUS_MODSEQ_WAS_NOT_SUPPORTED -218
#endif

/**
 * MB_FS.h
 #define MB_FS_ERROR_FILE_IO_ERROR -300
 #define MB_FS_ERROR_FILE_NOT_FOUND -301
 #define MB_FS_ERROR_FLASH_STORAGE_IS_NOT_READY -302
 #define MB_FS_ERROR_SD_STORAGE_IS_NOT_READY -303
 #define MB_FS_ERROR_FILE_STILL_OPENED -304
*/

#if defined(ENABLE_SMTP) || defined(ENABLE_IMAP)

#define MAIL_CLIENT_ERROR_CONNECTION_CLOSED -400
#define MAIL_CLIENT_ERROR_READ_TIMEOUT -401
#define MAIL_CLIENT_ERROR_SSL_TLS_STRUCTURE_SETUP -402
#define MAIL_CLIENT_ERROR_OUT_OF_MEMORY -403
#define MAIL_CLIENT_ERROR_CUSTOM_CLIENT_DISABLED -404
#define MAIL_CLIENT_ERROR_NTP_TIME_SYNC_TIMED_OUT -405
#define MAIL_CLIENT_ERROR_SESSION_CONFIG_WAS_NOT_ASSIGNED -406
#define MAIL_CLIENT_ERROR_TIME_WAS_NOT_SET -407
#define MAIL_CLIENT_ERROR_NOT_YET_LOGIN -408

#endif

#endif