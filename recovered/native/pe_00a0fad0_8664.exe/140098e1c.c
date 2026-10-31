/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140098e1c */

void Unwind_140098e1c(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = 0xd78;
  lVar1 = *(longlong *)(param_2 + 0x88);
  do {
    FUN_140005242(lVar1 + lVar2);
    lVar2 = lVar2 + -0x20;
  } while (lVar2 != 0xf8);
  return;
}

