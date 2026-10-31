/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140781489 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140781489(undefined8 *param_1)

{
  float *pfVar1;
  
  pfVar1 = (float *)(ulonglong)((int)&stack0xfffffffffffffff0 - 0x10);
  if (*(int *)((ulonglong)_DAT_150b1ebe0 + 0xc9c) < 2) {
    return;
  }
  *pfVar1 = ((float)((ulonglong)param_1[1] >> 0x20) - (float)((ulonglong)*param_1 >> 0x20)) *
            ((float)param_1[1] - (float)*param_1) * _DAT_150a385a6;
  pfVar1[1] = 1.0;
                    /* WARNING: Subroutine does not return */
  *(undefined **)(pfVar1 + -2) = &UNK_1407814d8;
  FUN_140755a9a();
}

