/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1021e6f9 */

undefined4 __fastcall FUN_1021e6f9(int param_1,int param_2,int param_3,int param_4)

{
  char cVar1;
  int iVar2;
  int iVar3;
  byte bVar4;
  int iVar5;
  byte *pbVar6;
  int iVar7;
  int *piVar8;
  int iVar9;
  int iVar10;
  byte *pbVar11;
  int local_24;
  int local_20;
  int local_1c;
  int *local_18;
  int local_14;
  
  iVar3 = *(int *)(param_1 + 0x58);
  local_14 = *(int *)(param_1 + 8);
  iVar10 = *(int *)(param_1 + 0xc);
  local_1c = *(int *)(iVar3 + param_2 * 8) * iVar10 - local_14;
  iVar5 = *(int *)(iVar3 + 4 + param_2 * 8) * iVar10 - local_14;
  iVar2 = *(int *)(iVar3 + param_3 * 8) * iVar10 - local_14;
  local_14 = iVar10 * *(int *)(iVar3 + 4 + param_3 * 8) - local_14;
  iVar10 = iVar2;
  local_20 = iVar5;
  if (param_4 != 0) {
    iVar10 = local_14;
    local_20 = local_1c;
    local_1c = iVar5;
    local_14 = iVar2;
  }
  iVar2 = *(int *)(param_1 + 0x5c);
  pbVar11 = (byte *)(iVar2 + param_2);
  bVar4 = *(byte *)(iVar2 + param_2);
  if ((bVar4 & 4) != 0) {
    *(byte *)(param_1 + 0x28) = bVar4 >> 5;
    bVar4 = *pbVar11;
  }
  if ((bVar4 & 3) == 2) {
LAB_1021ea3f:
    *(undefined4 *)(param_1 + 0x24) = 0x14;
  }
  else {
    local_18 = (int *)(iVar3 + param_3 * 8);
    piVar8 = (int *)(iVar3 + param_2 * 8);
    pbVar6 = pbVar11;
    if ((bVar4 & 3) == 0) {
      if ((*(byte *)(iVar2 + param_3) & 3) == 1) {
        local_18 = local_18 + -2;
        local_1c = iVar10;
        local_20 = local_14;
      }
      else {
        local_1c = (iVar10 + local_1c) / 2;
        local_20 = (local_14 + local_20) / 2;
      }
      piVar8 = piVar8 + -2;
      pbVar6 = pbVar11 + -1;
    }
    *(int *)(param_1 + 0x2c) = local_1c;
    *(int *)(param_1 + 0x30) = local_20;
joined_r0x1021e813:
    do {
      if (local_18 <= piVar8) {
        cVar1 = FUN_1021eb8e(local_20);
LAB_1021ea61:
        if (cVar1 != '\0') {
          return 1;
        }
        return 0;
      }
      if ((pbVar6[1] & 3) != 0) {
        if ((pbVar6[1] & 3) == 1) {
          iVar3 = *(int *)(param_1 + 0xc) * piVar8[3] - *(int *)(param_1 + 8);
          if (param_4 != 0) {
            iVar3 = piVar8[2] * *(int *)(param_1 + 0xc) - *(int *)(param_1 + 8);
          }
          cVar1 = FUN_1021eb8e(iVar3);
          if (cVar1 != '\0') {
            return 1;
          }
          pbVar11 = pbVar6;
          pbVar6 = pbVar6 + 1;
          piVar8 = piVar8 + 2;
        }
        else {
          if ((local_18 < piVar8 + 4) || ((pbVar6[2] & 3) != 2)) goto LAB_1021ea3f;
          iVar3 = *(int *)(param_1 + 8);
          iVar2 = *(int *)(param_1 + 0xc);
          local_24 = piVar8[3] * iVar2 - iVar3;
          iVar10 = piVar8[4] * iVar2 - iVar3;
          iVar9 = piVar8[5] * iVar2 - iVar3;
          iVar5 = iVar9;
          if (param_4 != 0) {
            iVar5 = iVar10;
            iVar10 = iVar9;
            local_24 = piVar8[2] * iVar2 - iVar3;
          }
          if (local_18 < piVar8 + 6) {
            cVar1 = FUN_1021ed90(local_24,iVar10,iVar5,local_1c,local_20);
            goto LAB_1021ea61;
          }
          iVar9 = piVar8[6] * iVar2 - iVar3;
          iVar3 = iVar2 * piVar8[7] - iVar3;
          iVar2 = iVar3;
          if (param_4 != 0) {
            iVar2 = iVar9;
            iVar9 = iVar3;
          }
          cVar1 = FUN_1021ed90(local_24,iVar10,iVar5,iVar9,iVar2);
          if (cVar1 != '\0') {
            return 1;
          }
          pbVar11 = pbVar6;
          pbVar6 = pbVar6 + 3;
          piVar8 = piVar8 + 6;
        }
        goto joined_r0x1021e813;
      }
      iVar3 = piVar8[2] * *(int *)(param_1 + 0xc) - *(int *)(param_1 + 8);
      iVar5 = *(int *)(param_1 + 0xc) * piVar8[3] - *(int *)(param_1 + 8);
      iVar2 = iVar5;
      if (param_4 != 0) {
        iVar2 = iVar3;
        iVar3 = iVar5;
      }
      pbVar6 = pbVar6 + 2;
      piVar8 = piVar8 + 4;
      while( true ) {
        if (local_18 <= piVar8 + -2) {
          cVar1 = FUN_1021ec3f(iVar2,local_1c,local_20,param_1,pbVar11,iVar10);
          goto LAB_1021ea61;
        }
        iVar5 = *piVar8 * *(int *)(param_1 + 0xc) - *(int *)(param_1 + 8);
        iVar7 = *(int *)(param_1 + 0xc) * piVar8[1] - *(int *)(param_1 + 8);
        iVar9 = iVar7;
        if (param_4 != 0) {
          iVar9 = iVar5;
          iVar5 = iVar7;
        }
        if ((*pbVar6 & 3) != 0) break;
        pbVar11 = pbVar6;
        iVar10 = iVar3;
        cVar1 = FUN_1021ec3f(iVar2,(iVar5 + iVar3) / 2,(iVar2 + iVar9) / 2,param_1,pbVar6,iVar3);
        pbVar6 = pbVar11 + 1;
        piVar8 = piVar8 + 2;
        iVar3 = iVar5;
        iVar2 = iVar9;
        if (cVar1 != '\0') {
          return 1;
        }
      }
      if ((*pbVar6 & 3) != 1) goto LAB_1021ea3f;
      cVar1 = FUN_1021ec3f(iVar2,iVar5,iVar9,param_1,pbVar6,iVar10);
      pbVar11 = pbVar6;
    } while (cVar1 == '\0');
  }
  return 1;
}

