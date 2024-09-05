<a href="https://tradewatch.io/">
    <img src="https://pub-e8bb70a6cc1844138d6a55fa4a44ba42.r2.dev/logo-purple.png" alt="TradeWatch.io logo" title="TradeWatch.io" align="right" height="60" />
</a>

# TradeWatch.io C++ SDK

[TradeWatch.io](https://tradewatch.io) offers a comprehensive financial data API designed for developers and businesses. The platform provides real-time access to market data, covering a wide range of assets such as currencies, cryptocurrencies, stocks, indices, and commodities. It emphasizes seamless integration, reliability, and scalability, making it ideal for building financial tools and services. Additional features include serverless functions, customizable API domains, and webhook notifications for market events, all aimed at enhancing business efficiency and informed decision-making.

## Table of Contents
- [Quick start](#-quick-start)
- [Requirements](#-requirements)
- [Installation & usage](#-installation--usage)
- [Feedback and Contributions](#-feedback-and-contributions)
- [License](#-license)
- [Contact and Support](#-contact-and-support)

## 🚀 Quick start

Visit our [Dashboard](https://dash.tradewatch.io/register) and register a free account.

Follow the [Getting started](https://tradewatch.io/docs/platform/getting-started) section in our Developer Portal.

## 📝 Requirements

Install [cpprestsdk](https://github.com/Microsoft/cpprestsdk).

- Windows: `vcpkg install cpprestsdk cpprestsdk:x64-windows boost-uuid boost-uuid:x64-windows`
- Mac: `brew install cpprestsdk`
- Linux: `sudo apt-get install libcpprest-dev`

## 🔨 Installation & usage

### Build

```sh
cmake -DCPPREST_ROOT=/usr -DCMAKE_CXX_FLAGS="-I/usr/local/opt/openssl/include" -DCMAKE_MODULE_LINKER_FLAGS="-L/usr/local/opt/openssl/lib"
make
```

### Build on Windows with Visual Studio (VS2017)

- Right click on folder containing source code
- Select 'Open in visual studio'
- Once visual studio opens, CMake should show up in top menu bar.
- Select CMake > Build All.

*Note: If the CMake menu item doesn't show up in Visual Studio, CMake
for Visual Studio must be installed. In this case, open the 'Visual Studio
Installer' application. Select 'modify' Visual Studio 2017. Make sure
'Desktop Development with C++' is installed, and specifically that 'Visual
C++ tools for CMake' is selected in the 'Installation Details' section.

Also be sure to review the CMakeLists.txt file. Edits are likely required.*

## 🤝 Feedback and Contributions

We appreciate your support and look forward to making our product even better with your help!

## ©️ License

This project is licensed under the [MIT License](http://opensource.org/licenses/MIT).


## 🗨️ Contact and Support

For more details about our products, services, or any general information, feel free to reach out to us.

See the list of available [Support Channels](https://tradewatch.io/docs/support/channels).
