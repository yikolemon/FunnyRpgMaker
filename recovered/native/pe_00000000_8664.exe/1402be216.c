/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1402be216 */

void FUN_1402be216(longlong param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = FUN_14044ba60(*(undefined8 *)(param_1 + 0x40));
  if (iVar1 != 0) {
    return;
  }
  FUN_14027d5ba(*(undefined8 *)(param_1 + 0x40),param_2);
  return;
}

