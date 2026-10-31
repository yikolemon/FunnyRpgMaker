/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10193527 */

void FUN_10193527(float *param_1,undefined4 param_2,float param_3,float param_4,float param_5,
                 char *param_6,char *param_7,char *param_8,int *param_9,float *param_10,
                 uint param_11)

{
  float fVar1;
  size_t sVar2;
  uint *puVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  char *pcVar7;
  char *pcVar8;
  float10 fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  
  uVar5 = DAT_10388d00 ^ (uint)&stack0xffffffc0;
  if (param_8 == (char *)0x0) {
    sVar2 = _strlen(param_6);
    param_8 = param_6 + sVar2;
  }
  if (param_7 == (char *)0x0) {
    param_7 = param_8;
  }
  puVar3 = (uint *)FUN_10190228();
  fVar1 = (float)puVar3[4];
  param_1[0] = 0.0;
  param_1[1] = 0.0;
  fVar12 = 0.0;
  if (param_6 < param_7) {
    pcVar8 = (char *)0x0;
    do {
      fVar10 = param_5;
      if (param_5 <= 0.0) {
LAB_1019360f:
        uVar6 = (uint)*param_6;
        if ((int)uVar6 < 0) {
          iVar4 = FUN_100f90d5();
          pcVar7 = param_6 + iVar4;
        }
        else {
          pcVar7 = param_6 + 1;
        }
        fVar11 = fVar12;
        if (uVar6 != 0xd) {
          if (uVar6 == 10) {
            fVar9 = (float10)FUN_100fdbca();
            *param_1 = (float)fVar9;
            param_1[1] = param_1[1] + param_3;
            fVar11 = 0.0;
            if ((param_11 & 4) != 0) {
              fVar12 = 0.0;
              param_6 = pcVar7;
              break;
            }
          }
          else {
            if ((*puVar3 <= uVar6) || (fVar10 = *(float *)(puVar3[2] + uVar6 * 4), fVar10 < 0.0)) {
              FUN_1019351f();
            }
            fVar11 = fVar10 * (param_3 / fVar1) + fVar12;
            if (param_4 <= fVar11) break;
          }
        }
      }
      else {
        if (pcVar8 == (char *)0x0) {
          fVar10 = param_3;
          pcVar8 = (char *)FUN_101932d6();
        }
        if (param_6 < pcVar8) goto LAB_1019360f;
        if (*param_1 <= fVar12 && fVar12 != *param_1) {
          *param_1 = fVar12;
        }
        param_1[1] = param_1[1] + param_3;
        param_6 = (char *)FUN_1019319d();
        pcVar8 = (char *)0x0;
        fVar12 = 0.0;
        pcVar7 = param_6;
        fVar11 = fVar12;
        if ((param_11 & 4) != 0) break;
      }
      fVar12 = fVar11;
      param_6 = pcVar7;
    } while (param_6 < param_7);
  }
  if (*param_1 <= fVar12 && fVar12 != *param_1) {
    *param_1 = fVar12;
  }
  fVar1 = param_1[1];
  if (param_10 != (float *)0x0) {
    *param_10 = fVar12;
    param_10[1] = param_3 + fVar1;
  }
  if ((0.0 < fVar12) || ((fVar1 == 0.0 && (!NAN(fVar1))))) {
    param_1[1] = param_3 + fVar1;
  }
  if (param_9 != (int *)0x0) {
    *param_9 = (int)param_6;
  }
  if (DAT_10388d00 != (uVar5 ^ (uint)&stack0xffffffc0)) {
                    /* WARNING: Subroutine does not return */
    FUN_102283e0();
  }
  return;
}

