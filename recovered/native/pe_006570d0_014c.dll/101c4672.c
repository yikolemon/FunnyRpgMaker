/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101c4672 */

undefined4 FUN_101c4672(int param_1,int param_2)

{
  undefined4 uVar1;
  
  if (-1 < param_2) {
    uVar1 = FUN_101c461e(param_1,param_2 + *(int *)(param_1 + 8));
    return uVar1;
  }
  return 0x55;
}

