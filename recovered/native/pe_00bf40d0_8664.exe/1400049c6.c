/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 1400049c6 */

void FUN_1400049c6(longlong *param_1)

{
  code *pcVar1;
  
  if (0xf < (ulonglong)param_1[3]) {
    if ((0xfff < param_1[3] + 1U) &&
       (0x1f < (ulonglong)((*param_1 + -8) - *(longlong *)(*param_1 + -8)))) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    FUN_1400863f0();
  }
  param_1[2] = 0;
  param_1[3] = 0xf;
  *(undefined1 *)param_1 = 0;
  return;
}

