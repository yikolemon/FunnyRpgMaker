/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14078a899 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14078a899(void)

{
  float fVar1;
  float fVar2;
  float10 fVar3;
  float10 fVar4;
  float10 fVar5;
  float10 fVar6;
  uint uVar7;
  float *pfVar8;
  ulonglong uVar9;
  int in_R11D;
  float10 in_ST0;
  float10 in_ST1;
  float10 fVar10;
  float10 in_ST2;
  float10 in_ST3;
  float10 in_ST4;
  float10 in_ST5;
  float10 in_ST6;
  float10 in_ST7;
  float fVar11;
  float fVar12;
  
  pfVar8 = (float *)(ulonglong)((int)&stack0xffffffffffffffe0 - 0x2c);
  fVar2 = pfVar8[0x11];
  if (fVar2 != 0.0) {
    fVar12 = pfVar8[0x10];
    uVar9 = (ulonglong)(uint)fVar12;
    if (fVar2 == 1.4013e-45) {
      fVar2 = *(float *)(uVar9 + 4);
      if (0.0 <= fVar2) {
        pfVar8[1] = pfVar8[0x13];
        *pfVar8 = fVar2 - pfVar8[0x12];
                    /* WARNING: Subroutine does not return */
        *(undefined **)(pfVar8 + -2) = &UNK_14078a8e2;
        FUN_140755a9a();
      }
    }
    else {
      pfVar8[1] = fVar2;
      *pfVar8 = fVar12;
      pfVar8[3] = 2.9024655e-29;
      pfVar8[2] = 1.68156e-44;
      pfVar8[-2] = 3.8853164;
      pfVar8[-1] = 1.4013e-45;
      FUN_1408c79d0();
      if ((1 < (int)fVar2) && (_DAT_150a43a4c < pfVar8[0x12])) {
        pfVar8[5] = (float)((int)fVar12 + 4);
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      if (0 < (int)fVar2) {
        uVar7 = (int)fVar12 + 4;
        fVar12 = 0.0;
        do {
          fVar1 = *(float *)(ulonglong)uVar7;
          fVar11 = (float)(int)fVar1;
          fVar12 = fVar12 + (fVar1 - fVar11);
          *(float *)(ulonglong)uVar7 = fVar11;
          uVar7 = uVar7 + 0xc;
        } while (uVar7 != 0);
joined_r0x00014078aa87:
        fVar10 = in_ST1;
        fVar3 = in_ST2;
        fVar4 = in_ST3;
        fVar5 = in_ST4;
        fVar6 = in_ST5;
        if (0.0 < fVar12) {
          do {
            in_ST5 = in_ST6;
            in_ST4 = fVar6;
            in_ST3 = fVar5;
            in_ST2 = fVar4;
            in_ST1 = fVar3;
            pfVar8[4] = fVar12;
            *pfVar8 = *(float *)(uVar9 + 8) - *(float *)(uVar9 + 4);
            pfVar8[1] = 1.0;
            pfVar8[-2] = 3.8854184;
            pfVar8[-1] = 1.4013e-45;
            FUN_14074225a();
            fVar12 = pfVar8[4];
            pfVar8[7] = (float)in_ST0;
            fVar1 = pfVar8[7];
            *(float *)(uVar9 + 4) = *(float *)(uVar9 + 4) + fVar1;
            fVar12 = fVar12 - fVar1;
            in_ST0 = fVar10;
            in_ST6 = in_ST7;
            if ((int)fVar2 <= in_R11D) break;
            fVar10 = in_ST1;
            fVar3 = in_ST2;
            fVar4 = in_ST3;
            fVar5 = in_ST4;
            fVar6 = in_ST5;
          } while (0.0 < fVar12);
          goto joined_r0x00014078aa87;
        }
      }
    }
  }
  return;
}

