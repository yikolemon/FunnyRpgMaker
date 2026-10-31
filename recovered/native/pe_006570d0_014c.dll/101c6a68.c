/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101c6a68 */

undefined4
FUN_101c6a68(undefined4 param_1,int param_2,undefined4 param_3,undefined4 *param_4,
            undefined4 param_5)

{
  undefined4 uVar1;
  
  *param_4 = 0;
  if (param_2 != 0) {
    uVar1 = FUN_101c6d53(param_5);
    return uVar1;
  }
  return 0x51;
}

