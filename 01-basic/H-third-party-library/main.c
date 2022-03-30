#include <stdio>
#include <cjson/cJSON.h>

int main(int argc, char *argv[]) {

  char *string = "{ \"name\": \"Awesome 4K\", \"resolutions\": [ { \"width\": 1280, \"height\": 720 }, { \"width\": 1920, \"height\": 1080 }, { \"width\": 3840, \"height\": 2160 } ] }";
  cJSON *json = cJSON_Parse(string);
  char *reverse_str = cJSON_Print(json);
  printf("JSON: %s\n", reverse_str);
  return 0;
  
}
