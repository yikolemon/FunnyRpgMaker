/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800c6d1e */

void FUN_1800c6d1e(longlong param_1)

{
  if (DAT_180417b24 == '\0') {
    DAT_180417b24 = '\x01';
  }
  DAT_180417b20 = **(undefined4 **)(param_1 + 8);
  DAT_180417b1c = **(undefined4 **)(param_1 + 0x10);
  DAT_180417b18 = **(undefined4 **)(param_1 + 0x18);
  return;
}

