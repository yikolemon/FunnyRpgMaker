/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801f1e46 */

void FUN_1801f1e46(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x98);
  FUN_1801c9b65(uVar1,*(undefined8 *)(param_2 + 0x10));
  *(undefined8 *)(param_2 + 0x10) = 0;
  FUN_1801c9b65(uVar1,*(undefined8 *)(param_2 + 8));
  *(undefined8 *)(param_2 + 8) = 0;
  return;
}

