/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801ce690 */

undefined8 FUN_1801ce690(longlong param_1,int param_2)

{
  undefined8 uVar1;
  
  if (-1 < param_2) {
    uVar1 = FUN_1801ce63e(param_1,param_2 + *(int *)(param_1 + 0xc));
    return uVar1;
  }
  return 0x55;
}

