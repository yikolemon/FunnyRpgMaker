/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180298748 */

undefined8 FUN_180298748(LPCWSTR param_1)

{
  BOOL BVar1;
  DWORD DVar2;
  undefined8 uVar3;
  
  BVar1 = CreateDirectoryW(param_1,(LPSECURITY_ATTRIBUTES)0x0);
  if (BVar1 == 0) {
    DVar2 = GetLastError();
    FUN_18027e6b4(DVar2);
    uVar3 = 0xffffffff;
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}

