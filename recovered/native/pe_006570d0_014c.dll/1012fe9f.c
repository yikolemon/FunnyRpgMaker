/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1012fe9f */

undefined4
FUN_1012fe9f(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
            undefined4 param_9,undefined4 param_10)

{
  undefined4 uVar1;
  
  if (*(char *)(*(int *)(DAT_1039d74c + 0x14cc) + 0xfe) != '\0') {
    return 0;
  }
  uVar1 = FUN_101021d4(param_1,0);
  uVar1 = FUN_1012fb81(uVar1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                       param_10,0);
  return uVar1;
}

