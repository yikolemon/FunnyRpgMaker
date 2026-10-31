/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801fa1fa */

void FUN_1801fa1fa(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0xa0);
  FUN_1801c9b65(*(undefined8 *)(lVar1 + 0x30),*(undefined8 *)(param_1 + 0x460));
  *(undefined8 *)(param_1 + 0x460) = 0;
  FUN_1801ced57(lVar1,param_1 + 0x448);
  return;
}

