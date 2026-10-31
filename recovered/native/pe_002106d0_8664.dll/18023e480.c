/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18023e480 */

undefined4 FUN_18023e480(undefined8 *param_1)

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

