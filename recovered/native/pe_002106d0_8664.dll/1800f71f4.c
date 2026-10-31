/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800f71f4 */

void FUN_1800f71f4(longlong param_1,undefined8 *param_2,char param_3)

{
  undefined8 uVar1;
  
  *(undefined1 *)(param_1 + 0xc1) = 1;
  if (param_3 != '\0') {
    uVar1 = *param_2;
    *param_2 = 0;
    *(undefined1 *)(param_2 + 1) = 0;
    FUN_18023e8c0(param_1 + 0x70,uVar1,param_1 + 0xbc);
    return;
  }
  *(undefined4 *)(param_1 + 0xbc) = 1;
  FUN_18023daf0(param_1 + 0x70);
  return;
}

