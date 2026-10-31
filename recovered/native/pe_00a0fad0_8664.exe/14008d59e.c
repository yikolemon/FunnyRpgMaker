/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14008d59e */

void FUN_14008d59e(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = 0xc40;
  do {
    FUN_140005242(lVar1 + param_1 + 0x20);
    lVar1 = lVar1 + -0x20;
  } while (lVar1 != -0x40);
  return;
}

