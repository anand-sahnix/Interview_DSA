#!/bin/bash

echo "🚀 Running Auto Commit..."

# Get current date
DATE=$(date +"%d %b %Y")

# Pull latest changes (VERY IMPORTANT)
git pull origin main --rebase

# Add all changes
git add .

# Commit only if there are changes
git commit -m "Auto: Daily update - $DATE" || echo "No changes to commit"

# Push to GitHub
git push origin main

echo "✅ Done!"