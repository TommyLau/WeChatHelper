#!/bin/bash
shell_path="$(dirname "$0")"
xcodebuild -workspace "${shell_path}/../WeChatHelper.xcworkspace" -scheme WeChatHelper -derivedDataPath "${shell_path}/../Build" -configuration Release
