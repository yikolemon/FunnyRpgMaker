/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1027e760 */

undefined4 FUN_1027e760(uint param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  HANDLE hObject;
  BOOL BVar3;
  undefined4 uVar4;
  DWORD DVar5;
  
  iVar1 = FUN_1027aa8f(param_1);
  if (iVar1 != -1) {
    if (((param_1 == 1) && ((*(byte *)(DAT_103a5230 + 0x98) & 1) != 0)) ||
       ((param_1 == 2 && ((*(byte *)(DAT_103a5230 + 0x60) & 1) != 0)))) {
      iVar1 = FUN_1027aa8f(2);
      iVar2 = FUN_1027aa8f(1);
      if (iVar2 == iVar1) goto LAB_1027e776;
    }
    hObject = (HANDLE)FUN_1027aa8f(param_1);
    BVar3 = CloseHandle(hObject);
    if (BVar3 == 0) {
      DVar5 = GetLastError();
      goto LAB_1027e7c8;
    }
  }
LAB_1027e776:
  DVar5 = 0;
LAB_1027e7c8:
  FUN_1027ac0c(param_1);
  *(undefined1 *)((&DAT_103a5230)[(int)param_1 >> 6] + 0x28 + (param_1 & 0x3f) * 0x38) = 0;
  if (DVar5 == 0) {
    uVar4 = 0;
  }
  else {
    FUN_102690a9(DVar5,param_2);
    uVar4 = 0xffffffff;
  }
  return uVar4;
}

