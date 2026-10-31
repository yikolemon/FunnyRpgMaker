/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00484030 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl FUN_00484030(int param_1)

{
  bool bVar1;
  undefined4 in_EAX;
  undefined3 extraout_var;
  uint uVar3;
  int iVar2;
  
  if (DAT_0051bef5 != '\0') {
    return CONCAT31((int3)((uint)in_EAX >> 8),1);
  }
  if ((param_1 != 0) && (param_1 != 1)) {
                    /* WARNING: Subroutine does not return */
    FUN_00484a80();
  }
  bVar1 = ___scrt_is_ucrt_dll_in_use();
  iVar2 = CONCAT31(extraout_var,bVar1);
  if ((iVar2 != 0) && (param_1 == 0)) {
    uVar3 = FUN_0048f30c(&DAT_0051bef8);
    if (uVar3 == 0) {
      uVar3 = FUN_0048f30c((int *)&DAT_0051bf04);
      iVar2 = 0;
      if (uVar3 == 0) goto LAB_004840bd;
    }
    return uVar3 & 0xffffff00;
  }
  DAT_0051bef8 = 0xffffffff;
  _DAT_0051befc = 0xffffffff;
  _DAT_0051bf00 = 0xffffffff;
  _DAT_0051bf04 = 0xffffffff;
  _DAT_0051bf08 = 0xffffffff;
  _DAT_0051bf0c = 0xffffffff;
LAB_004840bd:
  DAT_0051bef5 = 1;
  return CONCAT31((int3)((uint)iVar2 >> 8),1);
}

