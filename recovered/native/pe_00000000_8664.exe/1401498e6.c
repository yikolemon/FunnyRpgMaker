/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1401498e6 */

void FUN_1401498e6(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0xa0);
  FUN_140128b39(*(undefined8 *)(lVar1 + 0x30),*(undefined8 *)(param_1 + 0x460));
  *(undefined8 *)(param_1 + 0x460) = 0;
  FUN_14012dd2b(lVar1,param_1 + 0x448);
  return;
}

