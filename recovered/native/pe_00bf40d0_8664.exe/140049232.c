/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140049232 */

int FUN_140049232(longlong param_1,uint param_2,longlong param_3)

{
  byte *pbVar1;
  longlong lVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  uint uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  undefined1 auStack_98 [32];
  int local_78 [16];
  ulonglong local_38;
  
  local_38 = DAT_14012ea80 ^ (ulonglong)auStack_98;
  lVar2 = *(longlong *)(param_1 + 0x2e0);
  if (lVar2 == 0) {
    iVar5 = 6;
  }
  else {
    uVar6 = *(uint *)(lVar2 + 4);
    if (uVar6 == 0) {
      uVar6 = 0;
    }
    else {
      if (uVar6 <= param_2) {
        param_2 = uVar6;
      }
      uVar9 = 0;
      do {
        pbVar1 = (byte *)(lVar2 + 0xa8 + uVar9 * 0x18);
        piVar3 = *(int **)(pbVar1 + 8);
        if (uVar9 < param_2) {
          iVar5 = *(int *)(param_3 + uVar9 * 4);
          uVar7 = (ulonglong)*pbVar1;
        }
        else {
          uVar7 = (ulonglong)*pbVar1;
          iVar5 = (piVar3[uVar7 - 1] - *piVar3) / 2;
        }
        piVar4 = *(int **)(lVar2 + 0xb8 + uVar9 * 0x18);
        if ((char)uVar7 == '\0') {
LAB_140049310:
          iVar5 = *piVar4;
        }
        else {
          uVar8 = 0;
          do {
            if (iVar5 == piVar3[uVar8]) {
              iVar5 = piVar4[uVar8];
              goto LAB_140049313;
            }
            if (iVar5 < piVar3[uVar8]) {
              if ((int)(uVar8 - 1) < 0) goto LAB_140049310;
              uVar7 = uVar8 - 1 & 0xffffffff;
              iVar5 = FUN_14001de7c(iVar5 - piVar3[uVar7],piVar4[uVar8] - piVar4[uVar7],
                                    piVar3[uVar8] - piVar3[uVar7]);
              uVar6 = *(uint *)(lVar2 + 4);
              goto LAB_140049313;
            }
            uVar8 = uVar8 + 1;
          } while (uVar7 != uVar8);
          iVar5 = piVar4[uVar7 - 1];
        }
LAB_140049313:
        local_78[uVar9] = iVar5;
        uVar9 = uVar9 + 1;
      } while (uVar9 < uVar6);
    }
    iVar5 = FUN_140049a6f(param_1,uVar6,(longlong)local_78);
  }
  if (DAT_14012ea80 != (local_38 ^ (ulonglong)auStack_98)) {
                    /* WARNING: Subroutine does not return */
    FUN_140086440(local_38 ^ (ulonglong)auStack_98);
  }
  return iVar5;
}

