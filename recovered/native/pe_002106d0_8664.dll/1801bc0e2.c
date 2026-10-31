/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801bc0e2 */

void Unwind_1801bc0e2(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_2 + 0xf0);
  while (lVar1 != 0) {
    lVar1 = *(longlong *)(param_2 + 0xf0);
    FUN_1800da0f8((longlong)&DAT_180420020 + lVar1);
    lVar1 = lVar1 + -0x30;
    *(longlong *)(param_2 + 0xf0) = lVar1;
  }
  return;
}

