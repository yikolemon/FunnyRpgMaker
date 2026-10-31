/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800d01e6 */

ulonglong FUN_1800d01e6(undefined8 param_1)

{
  char cVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined1 local_38 [16];
  undefined8 local_28;
  
  local_28 = 0xfffffffffffffffe;
  FUN_1800d00ad();
  FUN_180044980(&DAT_1804025b8);
  lVar2 = FUN_1800d0930(&DAT_180417e00,param_1);
  if (lVar2 != DAT_180417e00) {
    cVar1 = FUN_1800d02e8(&DAT_180417e10,param_1);
    if (cVar1 != '\0') {
      FUN_1800d0a36(&DAT_180417df0,local_38,param_1);
      FUN_1800d09b0(&DAT_180417df0,local_38);
      FUN_1800d0a36(&DAT_180417e00,local_38,param_1);
      FUN_1800d09b0(&DAT_180417e00,local_38);
      FUN_1800d0cc6(&DAT_180417e10,local_38,param_1);
      FUN_1800d0c40(&DAT_180417e10,local_38);
      uVar3 = CONCAT71((int7)((ulonglong)param_1 >> 8),1);
      goto LAB_1800d02a9;
    }
  }
  uVar3 = 0;
LAB_1800d02a9:
  FUN_18023d6e0(&DAT_1804025b8);
  return uVar3 & 0xffffffff;
}

