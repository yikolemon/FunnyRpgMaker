/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801cec36 */

void FUN_1801cec36(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  int iVar1;
  
  iVar1 = FUN_1801cec60();
  if (iVar1 == 0) {
    *param_3 = *(undefined8 *)(param_1 + 0x38);
    *(undefined8 *)(param_1 + 0x38) = 0;
    *(undefined8 *)(param_1 + 0x40) = 0;
  }
  return;
}

