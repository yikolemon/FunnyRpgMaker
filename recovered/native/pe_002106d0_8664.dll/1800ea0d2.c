/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800ea0d2 */

void FUN_1800ea0d2(longlong *param_1,longlong *param_2)

{
  FUN_180044980();
  FUN_180044980();
  if (param_2 != param_1) {
    FUN_1800ea5a4(param_2,*param_1,(param_1[1] - *param_1 >> 3) * -0x1111111111111111);
  }
  FUN_1800bb340(param_2 + 3,param_1 + 3);
  *(undefined1 *)(param_2 + 0x16) = 1;
  FUN_18023d6e0(param_2 + 0x17);
  FUN_18023d6e0(param_1 + 0x17);
  return;
}

