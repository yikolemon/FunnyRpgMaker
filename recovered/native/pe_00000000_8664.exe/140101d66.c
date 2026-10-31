/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140101d66 */

void Unwind_140101d66(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_2 + 0xf0);
  while (lVar1 != 0) {
    lVar1 = *(longlong *)(param_2 + 0xf0);
    FUN_14010501a((longlong)&DAT_140f31770 + lVar1);
    lVar1 = lVar1 + -0x30;
    *(longlong *)(param_2 + 0xf0) = lVar1;
  }
  return;
}

