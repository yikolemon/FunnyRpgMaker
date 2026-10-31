/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 004669ac */

void __fastcall FUN_004669ac(uint *param_1,int *param_2)

{
  uint uVar1;
  int *piVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  byte *pbVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  uint local_1c;
  
  iVar8 = *param_2;
  pbVar6 = (byte *)param_2[2];
  FUN_00466c50((int *)param_1);
  if (iVar8 == 0) {
    param_1[1] = 0;
  }
  else {
    iVar5 = 0;
    uVar7 = 0;
    uVar4 = 0;
    local_1c = 0;
    do {
      if (uVar7 == 0) {
        uVar4 = (uint)*pbVar6;
        pbVar6 = pbVar6 + 1;
        uVar7 = 0x80;
      }
      if ((uVar7 & uVar4) != 0) {
        uVar9 = param_1[2];
        uVar1 = *(uint *)(uVar9 + 0x10 + iVar5);
        if (((uVar1 & 4) == 0) && (*(uint *)(uVar9 + 0x10 + iVar5) = uVar1 | 4, local_1c < *param_1)
           ) {
          *(uint *)(param_1[3] + local_1c * 4) = uVar9 + iVar5;
          local_1c = local_1c + 1;
        }
      }
      uVar7 = uVar7 >> 1;
      iVar5 = iVar5 + 0x1c;
      iVar8 = iVar8 + -1;
    } while (iVar8 != 0);
    param_1[1] = local_1c;
    if (1 < local_1c) {
      uVar4 = param_1[3];
      uVar7 = 1;
      do {
        piVar2 = *(int **)(uVar4 + uVar7 * 4);
        uVar9 = uVar7 - 1;
        do {
          piVar3 = *(int **)(uVar4 + uVar9 * 4);
          if (*piVar3 < *piVar2) break;
          *(int **)(uVar4 + 4 + uVar9 * 4) = piVar3;
          *(int **)(uVar4 + uVar9 * 4) = piVar2;
          uVar9 = uVar9 - 1;
        } while (uVar9 < uVar7);
        uVar7 = uVar7 + 1;
      } while (uVar7 != local_1c);
    }
  }
  return;
}

