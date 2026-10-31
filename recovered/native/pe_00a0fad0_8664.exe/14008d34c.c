/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14008d34c */

void Unwind_14008d34c(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = 0xd78;
  do {
    FUN_140005242(*(longlong *)(param_2 + 0x30) + lVar1);
    lVar1 = lVar1 + -0x20;
  } while (lVar1 != 0xf8);
  return;
}

