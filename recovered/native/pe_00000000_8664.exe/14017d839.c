/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14017d839 */

void FUN_14017d839(longlong param_1,undefined8 *param_2,undefined8 *param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  undefined1 auStack_1d8 [32];
  int local_1b8;
  int local_1b4;
  int local_1b0;
  int iStack_1ac;
  int iStack_1a8;
  int iStack_1a4;
  int local_1a0;
  int local_19c;
  ulonglong local_30;
  
  local_30 = DAT_140f17b40 ^ (ulonglong)auStack_1d8;
  iVar4 = *param_4 << 2;
  local_1b8 = iVar4;
  local_1b4 = param_4[1] * 4;
  iVar12 = (int)*param_3 << 2;
  local_1b0 = iVar12;
  iStack_1ac = (int)((ulonglong)*param_3 >> 0x20) << 2;
  iStack_1a8 = (int)*param_2 << 2;
  iStack_1a4 = (int)((ulonglong)*param_2 >> 0x20) << 2;
  iVar2 = *(int *)(param_1 + 0x40);
  local_1a0 = iVar2;
  local_19c = *(int *)(param_1 + 0x44);
  iVar10 = param_4[1] >> 6;
  iVar1 = *(int *)(param_1 + 0xc);
  iVar11 = *(int *)((longlong)param_3 + 4) >> 6;
  iVar9 = *(int *)((longlong)param_2 + 4) >> 6;
  iVar7 = *(int *)(param_1 + 0x44) >> 8;
  if (((iVar11 < iVar1 || iVar10 < iVar1) || (iVar7 < iVar1 || iVar9 < iVar1)) &&
     (iVar1 = *(int *)(param_1 + 4),
     (iVar1 <= iVar9 || (iVar1 <= iVar11 || iVar1 <= iVar10)) || iVar1 <= iVar7)) {
    piVar5 = &local_1b8;
    do {
      uVar8 = iVar2 + iVar4 * 2 + iVar12 * -3;
      uVar3 = -uVar8;
      if ((int)uVar3 < 0) {
        uVar3 = uVar8;
      }
      if (uVar3 < 0x81) {
        uVar8 = piVar5[7] + piVar5[1] * 2 + piVar5[3] * -3;
        uVar3 = -uVar8;
        if ((int)uVar3 < 0) {
          uVar3 = uVar8;
        }
        if (0x80 < uVar3) goto LAB_14017d9d0;
        uVar8 = iVar4 + iVar2 * 2 + piVar5[4] * -3;
        uVar3 = -uVar8;
        if ((int)uVar3 < 0) {
          uVar3 = uVar8;
        }
        if (0x80 < uVar3) goto LAB_14017d9d0;
        uVar8 = piVar5[1] + piVar5[7] * 2 + piVar5[5] * -3;
        uVar3 = -uVar8;
        if ((int)uVar3 < 0) {
          uVar3 = uVar8;
        }
        if (0x80 < uVar3) goto LAB_14017d9d0;
        FUN_14017d379(param_1);
        if (piVar5 == &local_1b8) goto LAB_14017d91d;
        piVar6 = piVar5 + -6;
      }
      else {
LAB_14017d9d0:
        piVar6 = piVar5 + 6;
        FUN_14017da1a(piVar5);
      }
      iVar4 = *piVar6;
      iVar12 = piVar6[2];
      iVar2 = piVar6[6];
      piVar5 = piVar6;
    } while( true );
  }
  *(int *)(param_1 + 0x40) = iVar4;
  *(int *)(param_1 + 0x44) = local_1b4;
LAB_14017d91d:
  if (DAT_140f17b40 != (local_30 ^ (ulonglong)auStack_1d8)) {
                    /* WARNING: Subroutine does not return */
    FUN_140188a00(local_30 ^ (ulonglong)auStack_1d8);
  }
  return;
}

