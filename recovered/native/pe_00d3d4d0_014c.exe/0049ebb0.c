/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0049ebb0 */

undefined4 __cdecl FUN_0049ebb0(uint param_1,int param_2)

{
  int iVar1;
  int iVar2;
  HANDLE hObject;
  BOOL BVar3;
  undefined4 uVar4;
  DWORD DVar5;
  
  iVar1 = FUN_0049d4c2(param_1);
  if (iVar1 != -1) {
    if (((param_1 == 1) && ((*(byte *)(DAT_00521cc8 + 0x98) & 1) != 0)) ||
       ((param_1 == 2 && ((*(byte *)(DAT_00521cc8 + 0x60) & 1) != 0)))) {
      iVar1 = FUN_0049d4c2(2);
      iVar2 = FUN_0049d4c2(1);
      if (iVar2 == iVar1) goto LAB_0049ebc6;
    }
    hObject = (HANDLE)FUN_0049d4c2(param_1);
    BVar3 = CloseHandle(hObject);
    if (BVar3 == 0) {
      DVar5 = GetLastError();
      goto LAB_0049ec18;
    }
  }
LAB_0049ebc6:
  DVar5 = 0;
LAB_0049ec18:
  FUN_0049d52c(param_1);
  *(undefined1 *)((&DAT_00521cc8)[(int)param_1 >> 6] + 0x28 + (param_1 & 0x3f) * 0x38) = 0;
  if (DVar5 == 0) {
    uVar4 = 0;
  }
  else {
    FUN_0048f719(DVar5,param_2);
    uVar4 = 0xffffffff;
  }
  return uVar4;
}

