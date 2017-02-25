# These and other macros are documented in ../droid-configs-device/droid-configs.inc

%define device titan
%define vendor motorola

%define vendor_pretty Motorola
%define device_pretty Moto G (2nd Gen.)

# Adjust this for your device
%define pixel_ratio 1.0

# Community HW adaptations need this
%define community_adaptation 1

Provides: ofono-configs
Obsoletes: ofono-configs-mer

%include droid-configs-device/droid-configs.inc
