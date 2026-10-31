/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10162f7f */

void FUN_10162f7f(int param_1,float *param_2)

{
  float *pfVar1;
  float fVar2;
  int iVar3;
  float fVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  fVar4 = DAT_102b89b4;
  if ((*param_2 < param_2[2] || *param_2 == param_2[2]) &&
     (param_2[1] < param_2[3] || param_2[1] == param_2[3])) {
    iVar5 = *(int *)(param_1 + 0x40);
    if (0 < iVar5) {
      iVar6 = 0;
      iVar7 = 0x6b;
      do {
        iVar3 = *(int *)(param_1 + 0x10);
        if ((((*(char *)(iVar3 + iVar7) == '\0') &&
             (*(float *)(param_1 + 0xe8) <= param_2[3] && param_2[3] != *(float *)(param_1 + 0xe8)))
            && (param_2[1] <= fVar4 && fVar4 != param_2[1])) &&
           ((pfVar1 = (float *)(iVar3 + -99 + iVar7), *pfVar1 <= param_2[2] && param_2[2] != *pfVar1
            && (fVar2 = *(float *)(iVar3 + -0x5f + iVar7), *param_2 <= fVar2 && fVar2 != *param_2)))
           ) {
          *(undefined1 *)(iVar3 + iVar7) = 1;
          iVar5 = *(int *)(param_1 + 0x40);
        }
        iVar6 = iVar6 + 1;
        iVar7 = iVar7 + 0x74;
      } while (iVar6 < iVar5);
    }
  }
  return;
}

