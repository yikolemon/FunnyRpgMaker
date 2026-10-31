/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140783824 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140783824(float *param_1)

{
  float fVar1;
  float *pfVar2;
  ulonglong uVar3;
  float10 in_ST0;
  float fVar4;
  
  pfVar2 = (float *)(ulonglong)((int)&stack0xffffffffffffffe0 - 0x10);
  uVar3 = (ulonglong)_DAT_150b20f85;
  fVar4 = param_1[2];
  fVar1 = *param_1;
  pfVar2[1] = param_1[3] - param_1[1];
  *pfVar2 = fVar4 - fVar1;
  pfVar2[-2] = 3.87844;
  pfVar2[-1] = 1.4013e-45;
  FUN_14074225a();
  pfVar2[3] = (float)in_ST0;
  fVar4 = *(float *)(uVar3 + 0x1228) * _DAT_150a3a95e;
  pfVar2[1] = pfVar2[3] * _DAT_150a3c7fe;
  *pfVar2 = fVar4;
                    /* WARNING: Subroutine does not return */
  *(undefined **)(pfVar2 + -2) = &UNK_14078388e;
  FUN_140755a9a();
}

