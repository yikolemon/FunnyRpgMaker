/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180234b8b */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_180234b8b(double param_1,double param_2)

{
  double dVar1;
  double dVar2;
  ulonglong uVar3;
  
  uVar3 = DAT_18032a160;
  if ((0.0 <= param_1) && (param_1 <= DAT_18032a0f8)) {
    dVar1 = (double)FUN_1801d2f26();
    dVar2 = (DAT_18034d570 + dVar1) * param_2 + _DAT_18034d578;
    dVar1 = (double)FUN_180234ad4(dVar2,dVar1);
    if ((param_2 <= dVar1) ||
       ((double)((ulonglong)(dVar1 - param_2) & _DAT_1802ac560) <= _DAT_18034d580)) {
      dVar2 = (double)FUN_1801d2ee0(dVar2);
      dVar2 = dVar2 + DAT_180330b90;
      uVar3 = -(ulonglong)(dVar2 < 0.0) & DAT_18032a160 |
              ~-(ulonglong)(dVar2 < 0.0) &
              (~-(ulonglong)(DAT_18032a0f8 < dVar2) & (ulonglong)dVar2 |
              -(ulonglong)(DAT_18032a0f8 < dVar2) & DAT_18032a160);
    }
  }
  return uVar3;
}

