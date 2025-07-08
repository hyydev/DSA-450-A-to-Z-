# 🧠 Insertion Sort Notes

---

## 💡 Intuition

Har step pe ek element uthao aur usko uski sahi jagah pe **sorted part** me insert karo, jaise **cards ko arrange** karte hain.

---

## ⚙️ Logic

1. Outer loop har element ke liye chalta hai.
2. Inner loop me, agar left wala element bada hai toh dono ko swap karte hain.
3. Yeh process har element ko uski sahi jagah pe le aata hai.
4. **Left side hamesha sorted rehti hai.**

---

## 🔍 Kaise kaam karta hai (Step-by-step):

- Pehle 2 elements compare karo → swap karo agar zarurat ho.
- Fir agla element lo → left ki sorted list me sahi jagah pe insert karo (via shifting/swap).
- Yeh repeat hota hai jab tak pura array sorted nahi ho jata.

---

## 📘 Learning Points

- Insertion sort me har **naya element** sorted part me insert hota hai.
- **Best for** chhote ya almost sorted arrays.
- Time complexity:
  - Best: `O(n)`
  - Worst: `O(n^2)`
- Implementation simple hai.
- Stable sorting algorithm hai.

---

## 🔁 Pattern Understanding (For Similar Problems)

- Jab bhi problem me **"sorted part + unsorted part"** ka concept ho
- Ya har **naya element ko sorted jagah pe insert** karna ho
- Examples:
  - Linked list me sorted insert
  - Insert in sorted array
- Jab **element ko left/right shift karte hue sahi position** dhoondhni ho → use insertion sort logic!

---

## 🧾 Ek Line Me Summary

> Har element ko **left ki sorted list** me sahi jagah tak swap karte hue le jao, array dheere-dheere sorted ho jayega!  
> Aur jab bhi "sorted part + insert" ka pattern dikhe, **insertion sort yaad rakhna**.

---

## ✅ Dry Run Table Format (optional):

| i | key | Inner Loop Comparisons | Final Array State |
|---|-----|-------------------------|-------------------|
| 1 | 2   | 2 < 5 → shift           | 2 5 3 1 4         |
| 2 | 3   | 3 < 5 → shift           | 2 3 5 1 4         |
| 3 | 1   | 1 < 5, 3, 2 → shifts    | 1 2 3 5 4         |
| 4 | 4   | 4 < 5 → shift           | 1 2 3 4 5         |

---


