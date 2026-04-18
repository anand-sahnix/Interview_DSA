#!/bin/bash

# Get current date
DATE=$(date +"%d %b %Y")

# Add all changes
git add .

# Commit with dynamic message
git commit -m "Auto: Daily progress update - $DATE"

# Push to GitHub
git push origin main
