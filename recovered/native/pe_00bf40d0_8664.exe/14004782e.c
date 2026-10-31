/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14004782e */

void FUN_14004782e(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0xa0);
  FUN_14001c53d(*(longlong *)(lVar1 + 0x30),*(longlong *)(param_1 + 0x460));
  *(undefined8 *)(param_1 + 0x460) = 0;
  FUN_14002115a(lVar1,(longlong *)(param_1 + 0x448));
  return;
}

