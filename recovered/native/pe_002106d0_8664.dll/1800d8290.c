/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800d8290 */

void Unwind_1800d8290(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_2 + 200);
  while (lVar1 != 0) {
    lVar1 = *(longlong *)(param_2 + 200);
    FUN_1800da0f8((longlong)&DAT_1804183f0 + lVar1);
    lVar1 = lVar1 + -0x30;
    *(longlong *)(param_2 + 200) = lVar1;
  }
  return;
}

