/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180168366 */

void FUN_180168366(longlong param_1,float *param_2)

{
  float *pfVar1;
  float fVar2;
  longlong lVar3;
  float fVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  
  fVar4 = DAT_1802de564;
  if ((*param_2 < param_2[2] || *param_2 == param_2[2]) &&
     (param_2[1] < param_2[3] || param_2[1] == param_2[3])) {
    iVar5 = *(int *)(param_1 + 0x6c);
    if (0 < iVar5) {
      lVar6 = 0x6b;
      lVar7 = 0;
      do {
        lVar3 = *(longlong *)(param_1 + 0x18);
        if ((((*(char *)(lVar3 + lVar6) == '\0') &&
             (*(float *)(param_1 + 0x114) <= param_2[3] && param_2[3] != *(float *)(param_1 + 0x114)
             )) && (param_2[1] <= fVar4 && fVar4 != param_2[1])) &&
           ((pfVar1 = (float *)(lVar3 + -99 + lVar6), *pfVar1 <= param_2[2] && param_2[2] != *pfVar1
            && (fVar2 = *(float *)(lVar3 + -0x5f + lVar6), *param_2 <= fVar2 && fVar2 != *param_2)))
           ) {
          *(undefined1 *)(lVar3 + lVar6) = 1;
          iVar5 = *(int *)(param_1 + 0x6c);
        }
        lVar7 = lVar7 + 1;
        lVar6 = lVar6 + 0x74;
      } while (lVar7 < iVar5);
    }
  }
  return;
}

