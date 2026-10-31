/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 1400321f5 */

void FUN_1400321f5(uint *param_1,int *param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar6;
  int *piVar7;
  uint uVar8;
  int *piVar9;
  int iVar10;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  int local_28;
  ulonglong local_20;
  ulonglong uVar3;
  
  local_20 = DAT_14012ea80 ^ (ulonglong)auStack_58;
  if (*param_1 == 0) {
    uVar1 = 1;
  }
  else {
    if (*param_1 == 1) goto LAB_140032368;
    uVar5 = 1;
    do {
      uVar4 = uVar5;
      do {
        uVar1 = (int)uVar4 - 1;
        uVar3 = (ulonglong)uVar1;
        if (param_2[uVar3 * 3] <= param_2[uVar4 * 3]) break;
        piVar7 = param_2 + uVar4 * 3;
        piVar9 = param_2 + uVar3 * 3;
        local_28 = piVar7[2];
        local_30 = *(undefined8 *)piVar7;
        piVar7[2] = piVar9[2];
        *(undefined8 *)piVar7 = *(undefined8 *)piVar9;
        piVar9[2] = local_28;
        *(undefined8 *)piVar9 = local_30;
        uVar4 = uVar3;
      } while (uVar1 != 0);
      uVar8 = *param_1;
      uVar4 = (ulonglong)uVar8;
      uVar1 = (int)uVar5 + 1;
      uVar5 = (ulonglong)uVar1;
    } while (uVar1 < uVar8);
    uVar1 = 1;
    if (1 < uVar8) {
      iVar10 = *param_2;
      uVar5 = 0;
      do {
        uVar8 = (int)uVar4 - 1;
        if ((uVar1 == uVar8) || (param_3 < param_2[(ulonglong)uVar1 * 3] - iVar10)) {
          uVar1 = (param_2[(ulonglong)uVar1 * 3] - iVar10 <= param_3 && uVar1 == uVar8) + uVar1;
          iVar2 = 0;
          uVar8 = (uint)uVar5;
          if ((uint)uVar5 < uVar1) {
            piVar7 = param_2 + uVar5 * 3;
            lVar6 = uVar5 - uVar1;
            iVar2 = 0;
            do {
              iVar2 = iVar2 + *piVar7;
              *piVar7 = 0;
              piVar7 = piVar7 + 3;
              lVar6 = lVar6 + 1;
              uVar8 = uVar1;
            } while (lVar6 != 0);
          }
          param_2[uVar5 * 3] = iVar2 / (int)uVar8;
          uVar4 = (ulonglong)*param_1;
          if (uVar1 < *param_1 - 1) {
            uVar5 = (ulonglong)(uVar1 + 1);
            iVar10 = param_2[uVar5 * 3];
          }
        }
        uVar1 = uVar1 + 1;
      } while (uVar1 < (uint)uVar4);
      uVar1 = 1;
      if (1 < (uint)uVar4) {
        uVar5 = 1;
        piVar7 = param_2;
        do {
          piVar9 = piVar7 + 3;
          if (*piVar9 != 0) {
            uVar4 = (ulonglong)uVar1;
            uVar1 = uVar1 + 1;
            param_2[uVar4 * 3 + 2] = piVar7[5];
            *(undefined8 *)(param_2 + uVar4 * 3) = *(undefined8 *)piVar9;
            uVar4 = (ulonglong)*param_1;
          }
          uVar5 = uVar5 + 1;
          piVar7 = piVar9;
        } while (uVar5 < uVar4);
      }
    }
  }
  *param_1 = uVar1;
LAB_140032368:
  if (DAT_14012ea80 != (local_20 ^ (ulonglong)auStack_58)) {
                    /* WARNING: Subroutine does not return */
    FUN_140086440(local_20 ^ (ulonglong)auStack_58);
  }
  return;
}

