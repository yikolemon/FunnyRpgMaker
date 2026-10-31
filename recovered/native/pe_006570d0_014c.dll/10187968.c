/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10187968 */

void __thiscall FUN_10187968(int param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int local_24;
  int local_1c;
  
  if (*(int *)(param_1 + 4) < 2) {
    return;
  }
  FUN_1018de6c(param_2,0);
  FUN_10187e6e();
  if (*(int *)(param_1 + 4) < 1) {
    iVar6 = 0;
    iVar5 = 0;
    goto LAB_10187ad6;
  }
  iVar6 = 0;
  if (*param_2 < 1) {
LAB_101879bd:
    local_24 = 0;
    iVar8 = 0;
  }
  else {
    iVar5 = *param_2 * 0x40 + param_2[2];
    local_24 = iVar5 + -0x40;
    if (local_24 == 0) goto LAB_101879bd;
    iVar8 = *(int *)(iVar5 + -0x18) + *(int *)(iVar5 + -0x1c);
  }
  iVar5 = 0;
  if (*(int *)(param_1 + 4) != 1) {
    iVar9 = 1;
    iVar5 = 0;
    iVar6 = 0;
    do {
      piVar1 = (int *)(*(int *)(param_1 + 0x10) + iVar9 * 0x18);
      iVar10 = *piVar1;
      if (iVar10 < 1) {
LAB_10187ab8:
        iVar4 = piVar1[3];
      }
      else {
        if ((*(int *)(piVar1[2] + -0x18 + iVar10 * 0x40) == 0) &&
           (*(int *)(piVar1[2] + iVar10 * 0x40 + -0x14) == 0)) {
          iVar10 = iVar10 + -1;
          *piVar1 = iVar10;
        }
        if ((iVar10 == 0) || (local_24 == 0)) {
LAB_10187a7b:
          if (iVar10 < 1) goto LAB_10187ab8;
        }
        else {
          iVar4 = piVar1[2];
          iVar2 = FUN_102595e0(local_24,iVar4,0x24);
          if ((iVar2 == 0) && ((*(int *)(local_24 + 0x2c) == 0 && (*(int *)(iVar4 + 0x2c) == 0)))) {
            *(int *)(local_24 + 0x28) = *(int *)(local_24 + 0x28) + *(int *)(iVar4 + 0x28);
            iVar8 = iVar8 + *(int *)(iVar4 + 0x28);
            FUN_1025b2d0(piVar1[2],piVar1[2] + 0x40,*piVar1 * 0x40 + -0x40);
            iVar10 = *piVar1 + -1;
            *piVar1 = iVar10;
            goto LAB_10187a7b;
          }
        }
        iVar2 = piVar1[2];
        iVar4 = piVar1[3];
        local_24 = iVar10 * 0x40 + iVar2 + -0x40;
        iVar7 = 0;
        iVar3 = 0;
        do {
          *(int *)(iVar2 + 0x24 + iVar7) = iVar8;
          iVar2 = piVar1[2];
          iVar8 = iVar8 + *(int *)(iVar2 + 0x28 + iVar7);
          iVar3 = iVar3 + 1;
          iVar7 = iVar7 + 0x40;
        } while (iVar3 < *piVar1);
      }
      iVar6 = iVar6 + iVar4;
      iVar5 = iVar5 + iVar10;
      iVar9 = iVar9 + 1;
    } while (iVar9 < *(int *)(param_1 + 4));
  }
LAB_10187ad6:
  iVar9 = *param_2 + iVar5;
  iVar8 = param_2[1];
  if (iVar8 < iVar9) {
    if (iVar8 == 0) {
      iVar8 = 8;
    }
    else {
      iVar8 = iVar8 / 2 + iVar8;
    }
    if (iVar8 <= iVar9) {
      iVar8 = iVar9;
    }
    iVar10 = FUN_100fa1fa(iVar8 << 6);
    if (param_2[2] != 0) {
      FUN_1025b2d0(iVar10,param_2[2],*param_2 << 6);
      FUN_100fa2cb(param_2[2]);
    }
    param_2[2] = iVar10;
    param_2[1] = iVar8;
  }
  *param_2 = iVar9;
  iVar8 = param_2[3];
  iVar10 = param_2[4];
  iVar6 = iVar6 + iVar8;
  if (iVar10 < iVar6) {
    if (iVar10 == 0) {
      iVar10 = 8;
    }
    else {
      iVar10 = iVar10 / 2 + iVar10;
    }
    if (iVar10 <= iVar6) {
      iVar10 = iVar6;
    }
    local_24 = FUN_100fa1fa(iVar10 * 2);
    if (param_2[5] != 0) {
      FUN_1025b2d0(local_24,param_2[5],param_2[3] * 2);
      FUN_100fa2cb(param_2[5]);
    }
    param_2[5] = local_24;
    param_2[4] = iVar10;
    iVar9 = *param_2;
  }
  else {
    local_24 = param_2[5];
  }
  param_2[3] = iVar6;
  local_24 = local_24 + iVar8 * 2;
  if (1 < *(int *)(param_1 + 4)) {
    local_1c = iVar9 * 0x40 + param_2[2] + iVar5 * -0x40;
    iVar5 = 1;
    iVar6 = 0x2c;
    do {
      iVar8 = *(int *)(param_1 + 0x10);
      iVar9 = *(int *)(iVar8 + -0x14 + iVar6);
      if (iVar9 != 0) {
        iVar9 = iVar9 * 0x40;
        FUN_1025b2d0(local_1c,*(undefined4 *)(iVar8 + -0xc + iVar6),iVar9);
        local_1c = local_1c + iVar9;
      }
      iVar9 = *(int *)(iVar8 + -8 + iVar6);
      if (iVar9 != 0) {
        FUN_1025b2d0(local_24,*(undefined4 *)(iVar8 + iVar6),iVar9 * 2);
        local_24 = local_24 + iVar9 * 2;
      }
      iVar5 = iVar5 + 1;
      iVar6 = iVar6 + 0x18;
    } while (iVar5 < *(int *)(param_1 + 4));
    iVar9 = *param_2;
  }
  param_2[0xd] = local_24;
  if ((iVar9 == 0) || (iVar5 = param_2[2], *(int *)(iVar5 + -0x14 + iVar9 * 0x40) != 0)) {
    FUN_10187d74();
    iVar9 = *param_2;
    iVar5 = param_2[2];
  }
  iVar5 = iVar5 + iVar9 * 0x40;
  if (*(int *)(iVar5 + -0x18) == 0) {
    *(int *)(iVar5 + -0x20) = param_2[0x1a];
    iVar6 = param_2[0x12];
    iVar8 = param_2[0x13];
    iVar9 = param_2[0x14];
    iVar10 = param_2[0x15];
    iVar4 = param_2[0x17];
    iVar2 = param_2[0x18];
    iVar3 = param_2[0x19];
    *(int *)(iVar5 + -0x30) = param_2[0x16];
    *(int *)(iVar5 + -0x2c) = iVar4;
    *(int *)(iVar5 + -0x28) = iVar2;
    *(int *)(iVar5 + -0x24) = iVar3;
    *(int *)(iVar5 + -0x40) = iVar6;
    *(int *)(iVar5 + -0x3c) = iVar8;
    *(int *)(iVar5 + -0x38) = iVar9;
    *(int *)(iVar5 + -0x34) = iVar10;
  }
  else {
    iVar5 = FUN_102595e0((int *)(iVar5 + -0x40),param_2 + 0x12,0x24);
    if (iVar5 != 0) {
      FUN_10187d74();
    }
  }
  *(undefined4 *)(param_1 + 4) = 1;
  return;
}

