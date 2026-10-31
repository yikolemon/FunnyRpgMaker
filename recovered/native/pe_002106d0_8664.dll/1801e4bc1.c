/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801e4bc1 */

void FUN_1801e4bc1(uint *param_1,int *param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar4;
  uint uVar5;
  ulonglong uVar6;
  longlong lVar7;
  int *piVar8;
  int *piVar9;
  ulonglong uVar10;
  int iVar11;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  int local_28;
  ulonglong local_20;
  ulonglong uVar3;
  
  local_20 = DAT_180402640 ^ (ulonglong)auStack_58;
  if (*param_1 == 0) {
    uVar6 = 1;
  }
  else {
    if (*param_1 == 1) goto LAB_1801e4d34;
    uVar6 = 1;
    do {
      uVar4 = uVar6;
      do {
        uVar1 = (int)uVar4 - 1;
        uVar3 = (ulonglong)uVar1;
        if (param_2[uVar3 * 3] <= param_2[uVar4 * 3]) break;
        piVar8 = param_2 + uVar4 * 3;
        piVar9 = param_2 + uVar3 * 3;
        local_28 = piVar8[2];
        local_30 = *(undefined8 *)piVar8;
        piVar8[2] = piVar9[2];
        *(undefined8 *)piVar8 = *(undefined8 *)piVar9;
        piVar9[2] = local_28;
        *(undefined8 *)piVar9 = local_30;
        uVar4 = uVar3;
      } while (uVar1 != 0);
      uVar1 = *param_1;
      uVar4 = (ulonglong)uVar1;
      uVar5 = (int)uVar6 + 1;
      uVar6 = (ulonglong)uVar5;
    } while (uVar5 < uVar1);
    uVar6 = 1;
    if (1 < uVar1) {
      iVar11 = *param_2;
      uVar3 = 0;
      do {
        uVar1 = (uint)uVar6;
        uVar5 = (int)uVar4 - 1;
        if ((uVar1 == uVar5) || (param_3 < param_2[uVar6 * 3] - iVar11)) {
          uVar1 = (param_2[uVar6 * 3] - iVar11 <= param_3 && uVar1 == uVar5) + uVar1;
          iVar2 = 0;
          uVar5 = (uint)uVar3;
          if ((uint)uVar3 < uVar1) {
            piVar8 = param_2 + uVar3 * 3;
            lVar7 = uVar3 - uVar1;
            iVar2 = 0;
            do {
              iVar2 = iVar2 + *piVar8;
              *piVar8 = 0;
              piVar8 = piVar8 + 3;
              lVar7 = lVar7 + 1;
              uVar5 = uVar1;
            } while (lVar7 != 0);
          }
          param_2[uVar3 * 3] = iVar2 / (int)uVar5;
          uVar4 = (ulonglong)*param_1;
          if (uVar1 < *param_1 - 1) {
            uVar3 = (ulonglong)(uVar1 + 1);
            iVar11 = param_2[uVar3 * 3];
          }
        }
        uVar6 = (ulonglong)(uVar1 + 1);
      } while (uVar1 + 1 < (uint)uVar4);
      uVar6 = 1;
      if (1 < (uint)uVar4) {
        uVar10 = 1;
        uVar3 = uVar6;
        piVar8 = param_2;
        do {
          piVar9 = piVar8 + 3;
          uVar6 = uVar3;
          if (*piVar9 != 0) {
            uVar6 = (ulonglong)((int)uVar3 + 1);
            param_2[uVar3 * 3 + 2] = piVar8[5];
            *(undefined8 *)(param_2 + uVar3 * 3) = *(undefined8 *)piVar9;
            uVar4 = (ulonglong)*param_1;
          }
          uVar10 = uVar10 + 1;
          uVar3 = uVar6;
          piVar8 = piVar9;
        } while (uVar10 < uVar4);
      }
    }
  }
  *param_1 = (uint)uVar6;
LAB_1801e4d34:
  if (DAT_180402640 != (local_20 ^ (ulonglong)auStack_58)) {
                    /* WARNING: Subroutine does not return */
    FUN_1802396d0(local_20 ^ (ulonglong)auStack_58);
  }
  return;
}

