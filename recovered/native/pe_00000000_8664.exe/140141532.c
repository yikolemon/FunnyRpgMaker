/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140141532 */

void FUN_140141532(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x98);
  FUN_140128b39(uVar1,*(undefined8 *)(param_2 + 0x10));
  *(undefined8 *)(param_2 + 0x10) = 0;
  FUN_140128b39(uVar1,*(undefined8 *)(param_2 + 8));
  *(undefined8 *)(param_2 + 8) = 0;
  return;
}

