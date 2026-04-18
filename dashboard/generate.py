import json
from datetime import datetime

with open("README.md", "w", encoding="utf-8") as f:
    data = json.load(f)

readme = f"""
# 🚀 DSA Dashboard

## 📊 Stats
- ✅ Total Problems Solved: {data['total_problems']}

## 🧠 Topics Covered
"""

for topic, count in data["topics"].items():
    readme += f"- {topic}: {count}\n"

readme += "\n## 📅 Recent Activity\n"

for item in data["recent"][-5:]:
    readme += f"- {item}\n"

readme += f"\n_Last Updated: {datetime.now().strftime('%d %b %Y %H:%M')}_\n"

with open("README.md", "w") as f:
    f.write(readme)

print("✅ Dashboard Updated")