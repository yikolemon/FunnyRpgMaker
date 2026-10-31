/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10223d29 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_10223d29(double param_1,double param_2)

{
  float10 fVar1;
  double dVar2;
  double dVar3;
  
  dVar3 = DAT_10303848;
  if ((0.0 <= param_1) && (param_1 <= DAT_103037f0)) {
    fVar1 = (float10)FUN_101c8f55(param_1);
    dVar2 = (DAT_10322748 + (double)fVar1) / param_2 + _DAT_10322750;
    fVar1 = (float10)FUN_10223b34((double)fVar1,dVar2,dVar2);
    if ((param_2 <= (double)fVar1) ||
       (dVar3 = DAT_10303848,
       (double)((ulonglong)((double)fVar1 - param_2) & _DAT_1028b420) <= _DAT_10322758)) {
      fVar1 = (float10)FUN_101c8edb(dVar2);
      dVar3 = (double)fVar1 + _DAT_10322760;
      dVar3 = (double)(-(ulonglong)(dVar3 < 0.0) & (ulonglong)DAT_10303848 |
                      ~-(ulonglong)(dVar3 < 0.0) &
                      (~-(ulonglong)(DAT_103037f0 < dVar3) & (ulonglong)dVar3 |
                      -(ulonglong)(DAT_103037f0 < dVar3) & (ulonglong)DAT_10303848));
    }
  }
  return (float10)dVar3;
}

