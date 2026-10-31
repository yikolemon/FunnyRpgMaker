/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800ad348 */

void FUN_1800ad348(longlong param_1)

{
  FUN_1800ad254(param_1 + 0x2f8);
  *(undefined8 *)(param_1 + 0x278) = CommonEvents::vftable;
  FUN_18008e9c4(param_1 + 0x2d8);
  FUN_1800703dc((undefined8 *)(param_1 + 0x278));
  FUN_1800ad2cc(param_1 + 0x260);
  FUN_18006fbfa(param_1 + 0x28);
  FUN_180001e4c(param_1);
  return;
}

