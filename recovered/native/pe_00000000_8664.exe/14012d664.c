/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14012d664 */

undefined8 FUN_14012d664(longlong param_1,int param_2)

{
  undefined8 uVar1;
  
  if (-1 < param_2) {
    uVar1 = FUN_14012d612(param_1,param_2 + *(int *)(param_1 + 0xc));
    return uVar1;
  }
  return 0x55;
}

