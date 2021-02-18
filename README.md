## setup

Create a new file `src/wifi_credentials.cpp` with the lines below, with your wifi ssid and password:

```cpp
const char* ssid = "<your_ssd>";
const char* password = "<your_password>";
```

Reload the `/data` folder

```bash
pio run -t uploadfs
```