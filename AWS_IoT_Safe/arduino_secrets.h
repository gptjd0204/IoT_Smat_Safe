// Fill in  your WiFi networks SSID and password
#define SECRET_SSID "iptime_HS"
#define SECRET_PASS "102824hs"

// Fill in the hostname of your AWS IoT broker
// AWS IoT의 사물 리소스 이름
#define SECRET_BROKER "a28zdbebxmlohm-ats.iot.ap-northeast-2.amazonaws.com"

// Fill in the boards public certificate
const char SECRET_CERTIFICATE[] = R"(
-----BEGIN CERTIFICATE-----
MIIChTCCAW2gAwIBAgIVAK6FjMZcRzThtnBlZuZ6O7BMRIrRMA0GCSqGSIb3DQEB
CwUAME0xSzBJBgNVBAsMQkFtYXpvbiBXZWIgU2VydmljZXMgTz1BbWF6b24uY29t
IEluYy4gTD1TZWF0dGxlIFNUPVdhc2hpbmd0b24gQz1VUzAeFw0yMDEyMDcyMjI1
NDBaFw00OTEyMzEyMzU5NTlaMBQxEjAQBgNVBAMTCVNtYXJ0U0FGRTBZMBMGByqG
SM49AgEGCCqGSM49AwEHA0IABGnLps42OvuxoJl9ZCL+Gtc1MfPBPK/4m3sf/P0+
Xcp8aeGqGCrdbU59U0+rDh72ZOm37a/tSInR1skrqi1gegOjYDBeMB8GA1UdIwQY
MBaAFA0T+pWT7yxwnWVinxEZLJiJ08faMB0GA1UdDgQWBBQ64ecUpG5F4lOFEkjF
nOx3OiepdjAMBgNVHRMBAf8EAjAAMA4GA1UdDwEB/wQEAwIHgDANBgkqhkiG9w0B
AQsFAAOCAQEArMpsr9EZ0S6XjOt6ezyfbTOlqIPKE5SRId2HlV8nTSS5n9gvcqlY
Yh0hzO7ETY6EdcrlMNhKrvDZ60tIkjjtq9KKtACLshz2j5oD6D6BJnrpKlm6egxC
VHIRXpm7OOE/IasPvC43iQLx93gjQ0hcqnDITTtoBnwI/zJjSI6azb5e46uDAskt
WIgstCX577cF/9eTWHDVk2IFD7XPbZHhTyT69CVZCMwckIrMt0PG46RSFPSt+Mzk
VaS2Qs8/NX6zn0AixZbRfKHlU3ancRK+Yfg8yt1KtiQQQAdbLl9trKolP8Zxzg82
U4kov95ZmA9eyYoqwasm5507EAAyJ2GQvQ==
-----END CERTIFICATE-----
)";
