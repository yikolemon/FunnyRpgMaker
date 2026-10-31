/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101da3d7 */

void __fastcall FUN_101da3d7(uint *param_1,int *param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int *piVar7;
  uint uVar8;
  int iVar9;
  uint *local_2c;
  int *local_28;
  int local_24;
  undefined8 local_20;
  int local_18;
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)&local_2c;
  if (*param_1 == 0) goto LAB_101da536;
  if (*param_1 == 1) goto LAB_101da53e;
  uVar4 = 1;
  iVar9 = -1;
  piVar1 = param_2;
  iVar2 = iVar9;
  piVar7 = param_2;
LAB_101da40f:
  do {
    if (piVar1[3] < *piVar1) {
      local_18 = piVar1[5];
      local_20 = *(undefined8 *)(piVar1 + 3);
      piVar1[5] = piVar1[2];
      *(undefined8 *)(piVar1 + 3) = *(undefined8 *)piVar1;
      piVar1[2] = local_18;
      *(undefined8 *)piVar1 = local_20;
      iVar9 = iVar9 + 1;
      piVar1 = piVar1 + -3;
      if (iVar9 != 0) goto LAB_101da40f;
    }
    uVar3 = *param_1;
    uVar4 = uVar4 + 1;
    iVar9 = iVar2 + -1;
    piVar1 = piVar7 + 3;
    iVar2 = iVar9;
    piVar7 = piVar1;
  } while (uVar4 < uVar3);
  local_28 = param_2;
  if (uVar3 < 2) {
LAB_101da536:
    uVar4 = 1;
  }
  else {
    local_24 = *param_2;
    uVar5 = 1;
    uVar4 = 0;
    do {
      if ((uVar5 == uVar3 - 1) || (param_3 < param_2[uVar5 * 3] - local_24)) {
        uVar8 = (uint)(param_2[uVar5 * 3] - local_24 <= param_3 && uVar5 == uVar3 - 1);
        uVar6 = uVar5 + uVar8;
        iVar2 = 0;
        uVar3 = uVar4;
        if (uVar4 < uVar6) {
          iVar9 = (uVar5 + uVar8) - uVar4;
          piVar1 = param_2 + uVar4 * 3;
          iVar2 = 0;
          do {
            iVar2 = iVar2 + *piVar1;
            *piVar1 = 0;
            piVar1 = piVar1 + 3;
            iVar9 = iVar9 + -1;
            uVar3 = uVar6;
          } while (iVar9 != 0);
        }
        param_2[uVar4 * 3] = iVar2 / (int)uVar3;
        uVar3 = *param_1;
        uVar5 = uVar6;
        if (uVar6 < uVar3 - 1) {
          uVar4 = uVar6 + 1;
          local_24 = param_2[uVar4 * 3];
        }
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar3);
    if (uVar3 < 2) goto LAB_101da536;
    uVar6 = 1;
    uVar5 = uVar6;
    piVar1 = param_2;
    do {
      piVar7 = piVar1 + 3;
      uVar4 = uVar5;
      if (*piVar7 != 0) {
        uVar4 = uVar5 + 1;
        param_2[uVar5 * 3 + 2] = piVar1[5];
        *(undefined8 *)(param_2 + uVar5 * 3) = *(undefined8 *)piVar7;
        uVar3 = *param_1;
      }
      uVar6 = uVar6 + 1;
      uVar5 = uVar4;
      piVar1 = piVar7;
    } while (uVar6 < uVar3);
  }
  *param_1 = uVar4;
LAB_101da53e:
  if (DAT_10388d00 != (local_14 ^ (uint)&local_2c)) {
    local_2c = param_1;
                    /* WARNING: Subroutine does not return */
    FUN_102283e0();
  }
  return;
}

