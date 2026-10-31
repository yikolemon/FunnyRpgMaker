/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14012c958 */

undefined8 FUN_14012c958(uint param_1,undefined8 param_2)

{
  BOOL BVar1;
  DWORD DVar2;
  longlong lVar3;
  longlong lVar4;
  HANDLE hObject;
  undefined8 uVar5;
  
  lVar3 = FUN_14012c288(param_1);
  if (lVar3 != -1) {
    if (((param_1 == 1) && ((*(byte *)(DAT_1403551e0 + 200) & 1) != 0)) ||
       ((param_1 == 2 && ((*(byte *)(DAT_1403551e0 + 0x80) & 1) != 0)))) {
      lVar3 = FUN_14012c288();
      lVar4 = FUN_14012c288(1);
      if (lVar4 == lVar3) goto LAB_14012c97a;
    }
    hObject = (HANDLE)FUN_14012c288(param_1);
    BVar1 = CloseHandle(hObject);
    if (BVar1 == 0) {
      DVar2 = GetLastError();
      goto LAB_14012c9d8;
    }
  }
LAB_14012c97a:
  DVar2 = 0;
LAB_14012c9d8:
  FUN_14012c440(param_1);
  *(undefined1 *)
   ((&DAT_1403551e0)[(longlong)(int)param_1 >> 6] + 0x38 + (ulonglong)(param_1 & 0x3f) * 0x48) = 0;
  if (DVar2 == 0) {
    uVar5 = 0;
  }
  else {
    FUN_140113f14(DVar2,param_2);
    uVar5 = 0xffffffff;
  }
  return uVar5;
}

