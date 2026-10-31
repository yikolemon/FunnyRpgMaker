/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1021d52d */

void __fastcall FUN_1021d52d(int param_1,undefined8 *param_2,undefined8 *param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  int iVar10;
  int local_1ac;
  int local_1a8;
  int local_1a4;
  int local_1a0;
  int local_19c;
  int local_198;
  int local_194;
  int iStack_190;
  int iStack_18c;
  int iStack_188;
  int local_184;
  int local_180;
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)&local_1ac;
  iVar4 = *param_4 << 2;
  local_19c = iVar4;
  local_1a8 = param_4[1] * 4;
  local_198 = local_1a8;
  local_1a0 = *(int *)((int)param_2 + 4);
  iVar10 = (int)*param_3 << 2;
  local_194 = iVar10;
  iStack_190 = (int)((ulonglong)*param_3 >> 0x20) << 2;
  iStack_18c = (int)*param_2 << 2;
  iStack_188 = (int)((ulonglong)*param_2 >> 0x20) << 2;
  iVar2 = *(int *)(param_1 + 0x28);
  local_184 = iVar2;
  local_180 = *(int *)(param_1 + 0x2c);
  iVar8 = param_4[1] >> 6;
  local_1ac = param_1;
  iVar1 = *(int *)(param_1 + 0xc);
  local_1a4 = *(int *)((int)param_3 + 4) >> 6;
  iVar7 = *(int *)((int)param_2 + 4) >> 6;
  iVar5 = *(int *)(param_1 + 0x2c) >> 8;
  if (((local_1a4 < iVar1 || iVar8 < iVar1) || (iVar5 < iVar1 || iVar7 < iVar1)) &&
     (iVar1 = *(int *)(param_1 + 4),
     (iVar1 <= iVar7 || (iVar1 <= local_1a4 || iVar1 <= iVar8)) || iVar1 <= iVar5)) {
    piVar9 = &local_19c;
    do {
      uVar6 = iVar2 + iVar4 * 2 + iVar10 * -3;
      uVar3 = -uVar6;
      if ((int)uVar3 < 0) {
        uVar3 = uVar6;
      }
      if (uVar3 < 0x81) {
        iVar1 = piVar9[1];
        uVar6 = piVar9[7] + iVar1 * 2 + piVar9[3] * -3;
        uVar3 = -uVar6;
        if ((int)uVar3 < 0) {
          uVar3 = uVar6;
        }
        if (0x80 < uVar3) goto LAB_1021d6a8;
        uVar6 = iVar4 + iVar2 * 2 + piVar9[4] * -3;
        uVar3 = -uVar6;
        if ((int)uVar3 < 0) {
          uVar3 = uVar6;
        }
        if (0x80 < uVar3) goto LAB_1021d6a8;
        uVar6 = piVar9[7] * 2 + iVar1 + piVar9[5] * -3;
        uVar3 = -uVar6;
        if ((int)uVar3 < 0) {
          uVar3 = uVar6;
        }
        if (0x80 < uVar3) goto LAB_1021d6a8;
        FUN_1021cf4d(iVar1);
        if (piVar9 == &local_19c) goto LAB_1021d60e;
        piVar9 = piVar9 + -6;
      }
      else {
LAB_1021d6a8:
        piVar9 = piVar9 + 6;
        FUN_1021d6ef();
      }
      iVar4 = *piVar9;
      iVar10 = piVar9[2];
      iVar2 = piVar9[6];
    } while( true );
  }
  *(int *)(param_1 + 0x28) = iVar4;
  *(int *)(param_1 + 0x2c) = local_1a8;
LAB_1021d60e:
  if (DAT_10388d00 != (local_14 ^ (uint)&local_1ac)) {
                    /* WARNING: Subroutine does not return */
    FUN_102283e0();
  }
  return;
}

