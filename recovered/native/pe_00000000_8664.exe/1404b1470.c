/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1404b1470 */

void FUN_1404b1470(int param_1)

{
  undefined4 *puVar1;
  
  if (param_1 == 1) {
    puVar1 = (undefined4 *)FUN_14048fb3c();
    *puVar1 = 0x21;
  }
  else if ((param_1 == 2) || (param_1 == 3)) {
    puVar1 = (undefined4 *)FUN_14048fb3c();
    *puVar1 = 0x22;
    return;
  }
  return;
}

