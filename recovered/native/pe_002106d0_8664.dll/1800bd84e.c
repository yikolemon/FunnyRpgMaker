/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800bd84e */

void FUN_1800bd84e(undefined8 *param_1)

{
  if (0xf < (ulonglong)param_1[3]) {
    (*DAT_180417870)(*param_1);
  }
  param_1[2] = 0;
  param_1[3] = 0xf;
  *(undefined1 *)param_1 = 0;
  return;
}

