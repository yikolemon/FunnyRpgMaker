/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100c074e */

void __fastcall FUN_100c074e(int param_1)

{
  if (DAT_1039cae0 == '\0') {
    DAT_1039cae0 = '\x01';
  }
  DAT_1039cadc = **(undefined4 **)(param_1 + 4);
  DAT_1039cad8 = **(undefined4 **)(param_1 + 8);
  DAT_1039cad4 = **(undefined4 **)(param_1 + 0xc);
  return;
}

