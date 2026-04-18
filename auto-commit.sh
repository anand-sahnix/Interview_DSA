#!/bin/bash

<<<<<<< HEAD
# Get current date
DATE=$(date +"%d %b %Y")

# Add all changes
git add .

# Commit with dynamic message
git commit -m "Auto: Daily progress update - $DATE"

# Push to GitHub
git push origin main
=======
DATE=$(date +"%d %b %Y")

git add .
git commit -m "Auto: Daily update - $DATE"
git push origin main
>>>>>>> 30e1a41 (Auto: Daily update - 18 Apr 2026)
