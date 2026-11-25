#include <iostream>
#include <cstdlib>

int main()
{
  // Obtain api key, secret key, and url
  const char *apiKey = std::getenv("ALPACA_API_KEY");
  const char *apiSecret = std::getenv("ALPACA_API_SECRET");
  const char *streamURL = std::getenv("ALPACA_STREAM_URL");

  // Validation step
  if (!apiKey || apiKey[0] == '\0' ||
      !apiSecret || apiSecret[0] == '\0' ||
      !streamURL || streamURL[0] == '\0')
  {
    std::cerr << "Missing or empty Alpaca configuration.\n";
    return 1;
  }

  // Validastion complete
  std::cout << "Alpaca configuration loaded.\n";
  std::cout << "Stream URL: " << streamURL << '\n';
  return 0;
}