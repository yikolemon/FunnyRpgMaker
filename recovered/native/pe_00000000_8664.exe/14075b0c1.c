/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14075b0c1 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14075b0c1(void)

{
  ulonglong uVar1;
  float *pfVar2;
  float fVar3;
  
  pfVar2 = (float *)(ulonglong)((int)&stack0x00000000 - 8);
  fVar3 = pfVar2[4];
  if (fVar3 < 0.0) {
    return;
  }
  uVar1 = (ulonglong)*(uint *)((ulonglong)_DAT_150af882c + 0x14cc);
  if ((fVar3 != 0.0) || (NAN(fVar3))) {
    if (0.0 < fVar3) {
      fVar3 = fVar3 + (*(float *)(uVar1 + 0x50) - *(float *)(uVar1 + 0xc4));
    }
  }
  else {
    fVar3 = *(float *)(uVar1 + 0x274);
  }
  *pfVar2 = fVar3 - *(float *)(ulonglong)(uint)pfVar2[3];
  pfVar2[1] = 1.0;
                    /* WARNING: Subroutine does not return */
  pfVar2[-2] = 3.8389366;
  pfVar2[-1] = 1.4013e-45;
  FUN_140755a9a();
}

