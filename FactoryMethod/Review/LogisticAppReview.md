# Logistic app review

## Notes

- `main.cpp` is **neat** and clearly demonstrate project functionality

- `Transport` interface **laconically** shows typical transport object.
_But I think it **could be better** with adding id() method, which defined in all derivatives classes._

- Derivatives from `Transport`: `Ship` and `Truck`. No comments, realization is **clear**.

- `Logistics` abstract class **good** in case of Factory method DP, **but can be better** with resolving memory usage by using **Object pool** for transport management. *[I will show it soon]*

- No comments for **Destination** and **Cargo** classes, they are **perfect**.

## Summary

- Logistic app **good** demonstrates **Factory Method** design pattern. Outside the target design pattern context it could be improved, but it is only **demonstration** of single pattern, so improvements outside the context isn't necessary.

- My **grade** for this demonstration **10\10**