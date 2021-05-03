// Replace with your actual SSID and password:
#define WIFI_SSID "Your WIFI Network Name"
#define WIFI_PASSWD "Your WIFI Network Password"

// Pin where the DS18B20 is connected to
int PIN = 4;

//Your Domain name with URL path or IP address with path to the api.php file
String serverName = "http://ranni.ca/api.php";

//API key set in api.php
String apikey = "RandomAPIKey";


//Your Domain name with URL path or IP address with path to the index.php file
String site = "https://laketemp.ca/";

//
//Timer delay between calling the api
//
// Timer set to 10 minutes (600000)
//unsigned long timerDelay = 600000;

// Timer set to 20 minutes (1200000)
//unsigned long timerDelay = 1200000;

// Timer set to 15 minutes (900000)
//unsigned long timerDelay = 900000;

// Set timer to 3 minutes (180000)
unsigned long timerDelay = 180000; //Currently Enabled

// Set timer to 30 seconds (30000)
//unsigned long timerDelay = 30000;
