/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1401bae18 */

undefined8 FUN_1401bae18(uint param_1,undefined8 param_2)

{
  BOOL BVar1;
  DWORD DVar2;
  longlong lVar3;
  longlong lVar4;
  HANDLE hObject;
  undefined8 uVar5;
  
  lVar3 = FUN_1401b8dd8(param_1);
  if (lVar3 != -1) {
    if (((param_1 == 1) && ((*(byte *)(DAT_140f32db0 + 200) & 1) != 0)) ||
       ((param_1 == 2 && ((*(byte *)(DAT_140f32db0 + 0x80) & 1) != 0)))) {
      lVar3 = FUN_1401b8dd8();
      lVar4 = FUN_1401b8dd8(1);
      if (lVar4 == lVar3) goto LAB_1401bae3a;
    }
    hObject = (HANDLE)FUN_1401b8dd8(param_1);
    BVar1 = CloseHandle(hObject);
    if (BVar1 == 0) {
      DVar2 = GetLastError();
      goto LAB_1401bae98;
    }
  }
LAB_1401bae3a:
  DVar2 = 0;
LAB_1401bae98:
  FUN_1401b8f90(param_1);
  *(undefined1 *)
   ((&DAT_140f32db0)[(longlong)(int)param_1 >> 6] + 0x38 + (ulonglong)(param_1 & 0x3f) * 0x48) = 0;
  if (DVar2 == 0) {
    uVar5 = 0;
  }
  else {
    FUN_14019ea0c(DVar2,param_2);
    uVar5 = 0xffffffff;
  }
  return uVar5;
}

