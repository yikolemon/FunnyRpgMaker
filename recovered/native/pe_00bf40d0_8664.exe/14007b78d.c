/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14007b78d */

void FUN_14007b78d(int *param_1,undefined8 *param_2,undefined8 *param_3,int *param_4)

{
  int iVar1;
  uint uVar2;
  uint *puVar3;
  uint *puVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  undefined1 auStack_1d8 [32];
  uint local_1b8;
  int local_1b4;
  uint local_1b0;
  int iStack_1ac;
  int iStack_1a8;
  int iStack_1a4;
  uint local_1a0;
  int local_19c;
  ulonglong local_30;
  
  local_30 = DAT_14012ea80 ^ (ulonglong)auStack_1d8;
  uVar2 = *param_4 << 2;
  local_1b8 = uVar2;
  local_1b4 = param_4[1] * 4;
  uVar12 = (int)*param_3 << 2;
  local_1b0 = uVar12;
  iStack_1ac = (int)((ulonglong)*param_3 >> 0x20) << 2;
  iStack_1a8 = (int)*param_2 << 2;
  iStack_1a4 = (int)((ulonglong)*param_2 >> 0x20) << 2;
  uVar8 = param_1[0x10];
  local_1a0 = uVar8;
  local_19c = param_1[0x11];
  iVar9 = param_4[1] >> 6;
  iVar1 = param_1[3];
  iVar11 = *(int *)((longlong)param_3 + 4) >> 6;
  iVar7 = *(int *)((longlong)param_2 + 4) >> 6;
  iVar5 = param_1[0x11] >> 8;
  if (((iVar11 < iVar1 || iVar9 < iVar1) || (iVar5 < iVar1 || iVar7 < iVar1)) &&
     (iVar1 = param_1[1], (iVar1 <= iVar7 || (iVar1 <= iVar11 || iVar1 <= iVar9)) || iVar1 <= iVar5)
     ) {
    puVar3 = &local_1b8;
    do {
      uVar6 = uVar8 + uVar2 * 2 + uVar12 * -3;
      uVar12 = -uVar6;
      if ((int)uVar12 < 0) {
        uVar12 = uVar6;
      }
      if (uVar12 < 0x81) {
        uVar12 = puVar3[1];
        uVar10 = puVar3[7] + uVar12 * 2 + puVar3[3] * -3;
        uVar6 = -uVar10;
        if ((int)uVar6 < 0) {
          uVar6 = uVar10;
        }
        if (0x80 < uVar6) goto LAB_14007b924;
        uVar6 = uVar2 + uVar8 * 2 + puVar3[4] * -3;
        uVar8 = -uVar6;
        if ((int)uVar8 < 0) {
          uVar8 = uVar6;
        }
        if (0x80 < uVar8) goto LAB_14007b924;
        uVar6 = uVar12 + puVar3[7] * 2 + puVar3[5] * -3;
        uVar8 = -uVar6;
        if ((int)uVar8 < 0) {
          uVar8 = uVar6;
        }
        if (0x80 < uVar8) goto LAB_14007b924;
        FUN_14007b2cd(param_1,uVar2,uVar12);
        if (puVar3 == &local_1b8) goto LAB_14007b871;
        puVar4 = puVar3 + -6;
      }
      else {
LAB_14007b924:
        puVar4 = puVar3 + 6;
        FUN_14007b96e((int *)puVar3);
      }
      uVar2 = *puVar4;
      uVar12 = puVar4[2];
      uVar8 = puVar4[6];
      puVar3 = puVar4;
    } while( true );
  }
  param_1[0x10] = uVar2;
  param_1[0x11] = local_1b4;
LAB_14007b871:
  if (DAT_14012ea80 != (local_30 ^ (ulonglong)auStack_1d8)) {
                    /* WARNING: Subroutine does not return */
    FUN_140086440(local_30 ^ (ulonglong)auStack_1d8);
  }
  return;
}

