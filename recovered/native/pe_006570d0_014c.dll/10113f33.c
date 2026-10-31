/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10113f33 */

undefined4 FUN_10113f33(int param_1)

{
  undefined4 uVar1;
  
  if (*(char *)(DAT_1039d74c + 0xb36 + param_1) == '\x01') {
    uVar1 = FUN_10113c9d(param_1 + 0x290,0);
    return uVar1;
  }
  return 0;
}

