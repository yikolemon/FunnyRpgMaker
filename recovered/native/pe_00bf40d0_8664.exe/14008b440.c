/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14008b440 */

undefined4 FUN_14008b440(undefined8 *param_1)

{
  BOOL BVar1;
  undefined4 uVar2;
  
  BVar1 = CloseHandle((HANDLE)*param_1);
  uVar2 = 4;
  if (BVar1 != 0) {
    uVar2 = 0;
  }
  return uVar2;
}

