/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10113f85 */

undefined4 FUN_10113f85(int param_1)

{
  undefined4 uVar1;
  
  if (*(short *)(DAT_1039d74c + 0xb22 + param_1 * 2) == 2) {
    uVar1 = FUN_10113c9d(param_1 + 0x290,0);
    return uVar1;
  }
  return 0;
}

