/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14008d626 */

void Unwind_14008d626(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = 0xc60;
  do {
    FUN_140005242(*(longlong *)(param_2 + 0x30) + lVar1);
    lVar1 = lVar1 + -0x20;
  } while (lVar1 != -0x20);
  return;
}

