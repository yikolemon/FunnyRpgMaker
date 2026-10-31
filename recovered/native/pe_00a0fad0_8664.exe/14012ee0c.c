/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14012ee0c */

undefined8 FUN_14012ee0c(LPCWSTR param_1)

{
  BOOL BVar1;
  DWORD DVar2;
  undefined8 uVar3;
  
  BVar1 = DeleteFileW(param_1);
  if (BVar1 == 0) {
    DVar2 = GetLastError();
    FUN_140113e1c(DVar2);
    uVar3 = 0xffffffff;
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}

