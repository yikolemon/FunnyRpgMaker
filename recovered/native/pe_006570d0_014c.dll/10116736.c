/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10116736 */

undefined4 FUN_10116736(undefined4 param_1,uint param_2)

{
  undefined4 uVar1;
  
  if (*(int *)(DAT_1039d74c + 0x1fc8) < *(int *)(DAT_1039d74c + 0x1fbc)) {
    uVar1 = FUN_101021d4(param_1,0);
    uVar1 = FUN_1011653c(uVar1,param_2 | 0x141);
    return uVar1;
  }
  *(undefined4 *)(DAT_1039d74c + 0x1ed0) = 0;
  return 0;
}

