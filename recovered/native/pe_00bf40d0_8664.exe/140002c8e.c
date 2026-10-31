/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140002c8e */

void FUN_140002c8e(undefined8 param_1,longlong param_2,longlong param_3)

{
  code *pcVar1;
  
  if ((0xfff < param_3 * 2 + 2U) &&
     (0x1f < (ulonglong)((param_2 + -8) - *(longlong *)(param_2 + -8)))) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  FUN_1400863f0();
  return;
}

