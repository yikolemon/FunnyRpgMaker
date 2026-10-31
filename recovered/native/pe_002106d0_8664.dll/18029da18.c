/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18029da18 */

undefined8 FUN_18029da18(uint param_1,undefined8 param_2)

{
  BOOL BVar1;
  DWORD DVar2;
  longlong lVar3;
  longlong lVar4;
  HANDLE hObject;
  undefined8 uVar5;
  
  lVar3 = FUN_180298ef0(param_1);
  if (lVar3 != -1) {
    if (((param_1 == 1) && ((*(byte *)(DAT_180421400 + 200) & 1) != 0)) ||
       ((param_1 == 2 && ((*(byte *)(DAT_180421400 + 0x80) & 1) != 0)))) {
      lVar3 = FUN_180298ef0();
      lVar4 = FUN_180298ef0(1);
      if (lVar4 == lVar3) goto LAB_18029da3a;
    }
    hObject = (HANDLE)FUN_180298ef0(param_1);
    BVar1 = CloseHandle(hObject);
    if (BVar1 == 0) {
      DVar2 = GetLastError();
      goto LAB_18029da98;
    }
  }
LAB_18029da3a:
  DVar2 = 0;
LAB_18029da98:
  FUN_1802990a8(param_1);
  *(undefined1 *)
   ((&DAT_180421400)[(longlong)(int)param_1 >> 6] + 0x38 + (ulonglong)(param_1 & 0x3f) * 0x48) = 0;
  if (DVar2 == 0) {
    uVar5 = 0;
  }
  else {
    FUN_18027e7ac(DVar2,param_2);
    uVar5 = 0xffffffff;
  }
  return uVar5;
}

