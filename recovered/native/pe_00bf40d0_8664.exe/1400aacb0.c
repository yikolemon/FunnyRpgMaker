/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 1400aacb0 */

undefined8 FUN_1400aacb0(uint param_1,longlong param_2)

{
  BOOL BVar1;
  DWORD DVar2;
  longlong lVar3;
  longlong lVar4;
  HANDLE hObject;
  undefined8 uVar5;
  
  lVar3 = FUN_1400a98a8(param_1);
  if (lVar3 != -1) {
    if (((param_1 == 1) && ((*(byte *)(DAT_1401433a0 + 200) & 1) != 0)) ||
       ((param_1 == 2 && ((*(byte *)(DAT_1401433a0 + 0x80) & 1) != 0)))) {
      lVar3 = FUN_1400a98a8(2);
      lVar4 = FUN_1400a98a8(1);
      if (lVar4 == lVar3) goto LAB_1400aacd2;
    }
    hObject = (HANDLE)FUN_1400a98a8(param_1);
    BVar1 = CloseHandle(hObject);
    if (BVar1 == 0) {
      DVar2 = GetLastError();
      goto LAB_1400aad30;
    }
  }
LAB_1400aacd2:
  DVar2 = 0;
LAB_1400aad30:
  FUN_1400a9920(param_1);
  *(undefined1 *)
   ((&DAT_1401433a0)[(longlong)(int)param_1 >> 6] + 0x38 + (ulonglong)(param_1 & 0x3f) * 0x48) = 0;
  if (DVar2 == 0) {
    uVar5 = 0;
  }
  else {
    FUN_140095f9c(DVar2,param_2);
    uVar5 = 0xffffffff;
  }
  return uVar5;
}

