# Phishing URL Detector 🔐

## 📌 Description

Phishing URL Detector is a beginner-friendly cybersecurity project developed in **C++**. It analyzes a URL for common suspicious patterns and assigns a basic risk score.

The project helps demonstrate how simple rule-based techniques can be used to identify potentially suspicious URLs.

## 🎯 Objectives

* Detect suspicious URL patterns.
* Check whether HTTPS is used.
* Identify suspicious keywords.
* Detect certain IP-address-based URLs.
* Check unusually long URLs.
* Detect excessive hyphens.
* Calculate a basic risk score.

## ⚙️ Features

* HTTPS checking
* Suspicious keyword detection
* IP address pattern detection
* URL length analysis
* Hyphen count analysis
* Risk score calculation
* Low, Medium, and High Risk classification

## 🛠️ Technologies Used

* **Language:** C++
* **IDE:** Dev-C++
* **Concept:** Basic Cybersecurity & String Processing

## 📂 Project Structure

```text
Phishing-URL-Detector/
│
├── PhishingURLDetector.cpp
└── README.md
```

## ▶️ How to Run

1. Open **Dev-C++**.
2. Create a new C++ source file.
3. Copy the program code into the file.
4. Save it as `PhishingURLDetector.cpp`.
5. Compile and run the program.
6. Enter a URL when prompted.
7. The program displays warnings and a risk score.

## 💻 Sample Output

```text
====================================
       PHISHING URL DETECTOR
====================================

Enter URL to check: http://free-login-verify-example.com

Warning: HTTPS not found.
Warning: Suspicious keyword detected.
Warning: Too many hyphens found.

Risk Score: 4/7
Result: HIGH RISK - Suspicious URL

Note: This tool is only a basic detector.
It cannot guarantee URL safety.
```

## 🔍 Detection Rules

| Check                         | Risk |
| ----------------------------- | ---: |
| HTTPS not used                |   +1 |
| Suspicious keyword found      |   +2 |
| IP address pattern found      |   +2 |
| URL longer than 75 characters |   +1 |
| 3 or more hyphens             |   +1 |

### Risk Levels

* **0–1:** Low Risk
* **2–3:** Medium Risk
* **4–7:** High Risk

## 📚 Concepts Used

* C++ strings
* Conditional statements
* Loops
* String searching
* Character counting
* Basic risk scoring

## ⚠️ Disclaimer

This project is created for **educational purposes only**. It uses simple heuristic checks and cannot guarantee whether a URL is safe or malicious. A legitimate URL may trigger a warning, and a malicious URL may not be detected.

## 👩‍💻 Author

**Sanjana Mallick**

B.Tech CSIT – Cybersecurity
