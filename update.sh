#!/bin/bash

echo "🚀 Running Automation..."

git pull origin main --rebase
python dashboard/generate.py
git add .
git commit -m "Auto: DSA Dashboard Update"
git push origin main

echo "✅ Done!"