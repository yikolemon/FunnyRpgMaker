/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140130f4f */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_140130f4f(double param_1,double param_2)

{
  double dVar1;
  double dVar2;
  ulonglong uVar3;
  
  uVar3 = DAT_140e8e150;
  if ((0.0 <= param_1) && (param_1 <= DAT_140e8e0e8)) {
    dVar1 = (double)FUN_140119c5a();
    dVar2 = (DAT_140e950a0 + dVar1) * param_2 + _DAT_140e950a8;
    dVar1 = (double)FUN_140130e98(dVar2,dVar1);
    if ((param_2 <= dVar1) ||
       ((double)((ulonglong)(dVar1 - param_2) & _DAT_1401ced50) <= _DAT_140e950b0)) {
      dVar2 = (double)FUN_140119c14(dVar2);
      dVar2 = dVar2 + DAT_140e94b80;
      uVar3 = -(ulonglong)(dVar2 < 0.0) & DAT_140e8e150 |
              ~-(ulonglong)(dVar2 < 0.0) &
              (~-(ulonglong)(DAT_140e8e0e8 < dVar2) & (ulonglong)dVar2 |
              -(ulonglong)(DAT_140e8e0e8 < dVar2) & DAT_140e8e150);
    }
  }
  return uVar3;
}

