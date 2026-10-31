/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180244c90 */

ulonglong FUN_180244c90(longlong param_1,longlong param_2,longlong param_3,longlong param_4,
                       wchar_t **param_5)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  ulonglong uVar5;
  
  uVar5 = param_2 - param_1 >> 1;
  if (param_5 == (wchar_t **)0x0) {
    param_5 = ___lc_locale_name_func();
  }
  iVar2 = (int)(param_4 - param_3 >> 1);
  iVar4 = (int)uVar5;
  if (param_5[1] == (wchar_t *)0x0) {
    iVar1 = iVar2;
    if (iVar4 < iVar2) {
      iVar1 = iVar4;
    }
    uVar5 = FUN_180244b10(param_1,param_3,(longlong)iVar1);
    if (((int)uVar5 == 0) && (iVar4 != iVar2)) {
      uVar5 = 1;
      if (iVar4 < iVar2) {
        uVar5 = 0xffffffff;
      }
      return uVar5;
    }
  }
  else {
    iVar2 = FUN_18026cf40(param_5[1],0x1000,param_1,uVar5 & 0xffffffff,param_3,iVar2);
    if (iVar2 == 0) {
      puVar3 = (undefined4 *)FUN_18027e66c();
      *puVar3 = 0x16;
      return 0x7fffffff;
    }
    uVar5 = (ulonglong)(iVar2 - 2);
  }
  return uVar5;
}

