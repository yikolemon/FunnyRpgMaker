/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14008d30a */

void Unwind_14008d30a(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *(longlong *)(param_2 + 0x30);
  if (*(longlong *)(param_2 + 0x28) != -0xf8) {
    lVar2 = -*(longlong *)(param_2 + 0x28);
    do {
      FUN_140005242(lVar1 + lVar2);
      lVar2 = lVar2 + -0x20;
    } while (lVar2 != 0xf8);
  }
  return;
}

