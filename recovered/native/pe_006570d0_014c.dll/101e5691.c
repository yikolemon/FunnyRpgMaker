/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101e5691 */

int FUN_101e5691(int param_1,uint param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  bool bVar3;
  int *piVar4;
  uint uVar5;
  int iVar6;
  int *piVar7;
  uint uVar8;
  uint *local_24;
  int local_20;
  undefined4 local_1c;
  int local_18;
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)&local_24;
  local_18 = 0;
  uVar1 = *(undefined4 *)(param_1 + 100);
  iVar6 = *(int *)(param_1 + 0x2e0);
  if (iVar6 == 0) {
    local_18 = FUN_101e4fb4(param_1,0);
    iVar6 = 0;
    if (local_18 == 0) {
      iVar6 = *(int *)(param_1 + 0x2e0);
      goto LAB_101e56bc;
    }
  }
  else {
LAB_101e56bc:
    piVar4 = *(int **)(iVar6 + 4);
    local_24 = *(uint **)(iVar6 + 0xc);
    uVar5 = *local_24;
    if (uVar5 <= param_2) {
      param_2 = uVar5;
    }
    local_20 = iVar6;
    if (piVar4 == (int *)0x0) {
      iVar6 = 0;
      piVar4 = (int *)FUN_101c00c3(uVar1,4,0,uVar5,0,&local_18);
      *(int **)(local_20 + 4) = piVar4;
      if (local_18 != 0) goto LAB_101e586a;
    }
    uVar5 = 0;
    if (param_2 == 0) {
      bVar3 = false;
    }
    else {
      iVar6 = 0;
      bVar3 = false;
      do {
        iVar2 = *(int *)(param_3 + uVar5 * 4);
        if (piVar4[uVar5] != iVar2) {
          piVar4[uVar5] = iVar2;
          bVar3 = true;
        }
        uVar5 = uVar5 + 1;
        iVar6 = iVar6 + -4;
      } while (param_2 != uVar5);
      piVar4 = (int *)((int)piVar4 - iVar6);
    }
    uVar5 = *local_24;
    if ((*(uint *)(param_1 + 4) & 0x7fff0000) == 0) {
      if (param_2 < uVar5) {
        piVar7 = (int *)(local_24[3] + param_2 * 0x18 + 8);
        uVar8 = param_2;
        do {
          if (*piVar4 != *piVar7) {
            *piVar4 = *piVar7;
            uVar5 = *local_24;
            bVar3 = true;
          }
          uVar8 = uVar8 + 1;
          piVar4 = piVar4 + 1;
          piVar7 = piVar7 + 6;
        } while (uVar8 < uVar5);
      }
    }
    else if (param_2 < uVar5) {
      iVar6 = *(int *)((local_24[4] - 0xc) + (*(uint *)(param_1 + 4) >> 0x10) * 0xc);
      uVar8 = param_2;
      do {
        iVar2 = *(int *)(iVar6 + uVar8 * 4);
        if (*piVar4 != iVar2) {
          *piVar4 = iVar2;
          uVar5 = *local_24;
          bVar3 = true;
        }
        uVar8 = uVar8 + 1;
        piVar4 = piVar4 + 1;
      } while (uVar8 < uVar5);
    }
    local_1c = uVar1;
    if ((*(int *)(local_20 + 8) != 0) && (!bVar3)) {
      iVar6 = -1;
      goto LAB_101e5878;
    }
    iVar6 = FUN_101c00c3(uVar1,4,0,uVar5,0,&local_18);
    if (local_18 == 0) {
      if (*(char *)(*(int *)(param_1 + 0x2e0) + 0x18) == '\0') {
        FUN_101e78d9();
      }
      FUN_101e7b65(*(undefined4 *)(local_20 + 4),iVar6);
      local_18 = FUN_101e66ee(iVar6,0);
      if (param_2 != 0 && local_18 == 0) {
        uVar5 = 0;
        do {
          if (*(int *)(iVar6 + uVar5 * 4) != 0) {
            local_18 = -2;
            break;
          }
          uVar5 = uVar5 + 1;
        } while (param_2 != uVar5);
      }
    }
  }
LAB_101e586a:
  FUN_101c0017(uVar1,iVar6);
  iVar6 = local_18;
LAB_101e5878:
  if (DAT_10388d00 != (local_14 ^ (uint)&local_24)) {
                    /* WARNING: Subroutine does not return */
    FUN_102283e0();
  }
  return iVar6;
}

