/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14006c266 */

void FUN_14006c266(uint *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  uint uVar7;
  longlong lVar8;
  ulonglong uVar9;
  byte *pbVar10;
  uint uVar11;
  uint uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  
  pbVar10 = *(byte **)(param_2 + 2);
  uVar1 = *param_2;
  FUN_14006c51a((int *)param_1);
  if ((ulonglong)uVar1 == 0) {
    param_1[1] = 0;
  }
  else {
    uVar11 = 0;
    lVar8 = 0;
    uVar12 = 0;
    uVar7 = 0;
    do {
      if (uVar11 == 0) {
        uVar12 = (uint)*pbVar10;
        pbVar10 = pbVar10 + 1;
        uVar11 = 0x80;
      }
      if ((uVar11 & uVar12) != 0) {
        lVar3 = *(longlong *)(param_1 + 2);
        uVar2 = *(uint *)(lVar3 + 0x10 + lVar8);
        if (((uVar2 & 4) == 0) && (*(uint *)(lVar3 + 0x10 + lVar8) = uVar2 | 4, uVar7 < *param_1)) {
          uVar9 = (ulonglong)uVar7;
          uVar7 = uVar7 + 1;
          *(longlong *)(*(longlong *)(param_1 + 4) + uVar9 * 8) = lVar3 + lVar8;
        }
      }
      uVar11 = uVar11 >> 1;
      lVar8 = lVar8 + 0x28;
    } while ((ulonglong)uVar1 * 0x28 != lVar8);
    param_1[1] = uVar7;
    if (1 < uVar7) {
      lVar8 = *(longlong *)(param_1 + 4);
      uVar9 = 1;
      do {
        piVar4 = *(int **)(lVar8 + uVar9 * 8);
        uVar13 = uVar9 & 0xffffffff;
        do {
          iVar6 = (int)uVar13;
          uVar14 = (ulonglong)(iVar6 - 1);
          piVar5 = *(int **)(lVar8 + uVar14 * 8);
          if (*piVar5 < *piVar4) break;
          *(int **)(lVar8 + uVar13 * 8) = piVar5;
          *(int **)(lVar8 + uVar14 * 8) = piVar4;
          uVar13 = uVar14;
        } while (iVar6 - 2 < uVar9);
        uVar9 = uVar9 + 1;
      } while (uVar9 != uVar7);
    }
  }
  return;
}

