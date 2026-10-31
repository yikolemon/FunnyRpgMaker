/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800d0016 */

ulonglong FUN_1800d0016(undefined8 param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  undefined1 local_28 [8];
  undefined1 local_20;
  undefined8 local_18;
  
  local_18 = 0xfffffffffffffffe;
  FUN_1800d00ad();
  FUN_180044980(&DAT_1804025b8);
  lVar1 = FUN_1800d0930(&DAT_180417df0,param_1);
  if (lVar1 == DAT_180417df0) {
    uVar2 = 0;
  }
  else {
    FUN_1800d0ed0(&DAT_180417e10,local_28,param_1);
    uVar2 = CONCAT71((int7)((ulonglong)param_1 >> 8),local_20);
  }
  FUN_18023d6e0(&DAT_1804025b8);
  return uVar2 & 0xffffffff;
}

