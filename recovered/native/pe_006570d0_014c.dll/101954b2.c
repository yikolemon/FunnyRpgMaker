/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101954b2 */

int * __fastcall FUN_101954b2(int *param_1,int *param_2,int param_3,int param_4)

{
  int *piVar1;
  uint uVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  int *piVar9;
  int *local_44;
  uint local_40;
  int *local_3c;
  int local_38;
  int local_34;
  int local_30;
  int *local_2c;
  int local_28;
  int local_24;
  int *local_20;
  int local_1c;
  int local_18;
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)&local_44;
  local_28 = *param_2;
  iVar8 = param_3 + param_2[2] + -1;
  iVar8 = iVar8 - iVar8 % param_2[2];
  if ((local_28 < iVar8) || (local_24 = param_2[1], local_24 < param_4)) {
    param_1[2] = 0;
    param_1[1] = 0;
    *param_1 = 0;
  }
  else {
    piVar4 = param_2 + 6;
    piVar3 = (int *)param_2[6];
    iVar6 = *piVar3;
    local_38 = iVar8;
    local_2c = param_2;
    local_20 = param_1;
    if (local_28 < iVar6 + iVar8) {
      local_3c = (int *)0x0;
      local_34 = 0x40000000;
      local_40 = 0x40000000;
      local_44 = (int *)0x0;
    }
    else {
      local_3c = (int *)0x0;
      local_34 = 0x40000000;
      local_40 = 0x40000000;
      piVar5 = piVar4;
      piVar9 = piVar3;
      local_30 = iVar6;
      do {
        local_44 = piVar9;
        uVar2 = FUN_101956d6(local_38,&local_18);
        if (local_2c[4] == 0) {
          if ((int)uVar2 < (int)local_40) {
            local_40 = uVar2;
            local_3c = piVar5;
          }
        }
        else if (((int)(param_4 + uVar2) <= local_24) &&
                (((int)uVar2 < (int)local_40 || (local_18 < local_34 && uVar2 == local_40)))) {
          local_34 = local_18;
          local_40 = uVar2;
          local_3c = piVar5;
        }
        piVar9 = (int *)local_44[2];
        piVar5 = local_44 + 2;
      } while (*piVar9 + local_38 <= local_28);
      iVar6 = local_30;
      if (local_3c == (int *)0x0) {
        local_3c = (int *)0x0;
        local_44 = (int *)0x0;
      }
      else {
        local_44 = *(int **)*local_3c;
      }
    }
    piVar9 = piVar3;
    if (local_2c[4] == 1) {
      while (iVar6 < local_38) {
        iVar6 = *(int *)piVar9[2];
        piVar9 = (int *)piVar9[2];
      }
      do {
        piVar7 = (int *)(*piVar9 - local_38);
        piVar5 = piVar4;
        piVar1 = piVar3;
        do {
          piVar3 = piVar1;
          piVar4 = piVar5;
          piVar5 = piVar3 + 2;
          piVar1 = (int *)piVar3[2];
        } while (*(int *)piVar3[2] <= (int)piVar7);
        uVar2 = FUN_101956d6(local_38,&local_1c);
        if ((((int)(param_4 + uVar2) <= local_24) && ((int)uVar2 <= (int)local_40)) &&
           (((uVar2 < local_40 || (local_1c < local_34)) ||
            ((local_1c == local_34 && ((int)piVar7 < (int)local_44)))))) {
          local_34 = local_1c;
          local_44 = piVar7;
          local_40 = uVar2;
          local_3c = piVar4;
        }
        piVar9 = (int *)piVar9[2];
      } while (piVar9 != (int *)0x0);
    }
    local_20[2] = (int)local_3c;
    *local_20 = (int)local_44;
    local_20[1] = local_40;
    param_1 = local_20;
  }
  if (DAT_10388d00 == (local_14 ^ (uint)&local_44)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

