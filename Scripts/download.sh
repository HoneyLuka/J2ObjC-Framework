#!/bin/bash
set -ev

j2objc_version=2.0.3
sha1_checksum=unset

echo "fetching j2objc dist"
#curl -OL https://github.com/google/j2objc/releases/download/${j2objc_version}/j2objc-${j2objc_version}.zip
#echo "${sha1_checksum}  j2objc-${j2objc_version}.zip" | shasum -c
#unzip -o -q j2objc-${j2objc_version}.zip
#mv j2objc-${j2objc_version} Distributive
#rm j2objc-${j2objc_version}.zip
cp -R -n /Users/Shadow/Downloads/j2objc-2.0.3 Distributive

echo "Creating framework"
mkdir Frameworks
mkdir Frameworks/j2objc.framework
cp -a Scripts/Template/* Frameworks/j2objc.framework/
cp Distributive/lib/libjre_emul.a Frameworks/j2objc.framework/j2objc
