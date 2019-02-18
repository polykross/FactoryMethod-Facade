# Logistic app review

- **Author**: Polina Shlepakova

- **Reviewer**: Kyrylo Vasylenko

- **Teacher**: Volodymyr Boublik

## Notes

- `main.cpp` is **neat** and clearly demonstrate project functionality

- `Transport` interface **laconically** shows typical transport object.\
_But I think it **could be better** with adding id() method, which defined in all derivatives classes._ **[fixed]**

- Derivatives from `Transport`: `Ship` and `Truck`. No comments, realization is **clear**.

- No comments for **Destination** and **Cargo** classes, they are **perfect**.

- `Logistics` abstract class **good** in case of Factory method DP, **but it could be better**.\
_With resolving memory usage by using **Object pool** for transport management._

## Summary

- Logistic app **well** demonstrates **Factory Method** design pattern. Outside the target design pattern context it might be improved, but it is only **demonstration** of single pattern, so improvements outside the context are not necessary.

- My **grade** for this demonstration **10\10**