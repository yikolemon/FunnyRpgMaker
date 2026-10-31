/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00474cad */

void __fastcall FUN_00474cad(int *param_1,undefined8 *param_2,undefined8 *param_3,int *param_4)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint *puVar9;
  uint *puVar10;
  uint uVar11;
  int *local_1ac;
  int local_1a8;
  int local_1a4;
  int local_1a0;
  uint local_19c;
  int local_198;
  uint local_194;
  int iStack_190;
  int iStack_18c;
  int iStack_188;
  uint local_184;
  int local_180;
  uint local_14;
  
  local_14 = DAT_0050e8c0 ^ (uint)&local_1ac;
  uVar2 = *param_4 << 2;
  local_19c = uVar2;
  local_1a8 = param_4[1] * 4;
  local_198 = local_1a8;
  local_1a0 = *(int *)((int)param_2 + 4);
  uVar11 = (int)*param_3 << 2;
  local_194 = uVar11;
  iStack_190 = (int)((ulonglong)*param_3 >> 0x20) << 2;
  iStack_18c = (int)*param_2 << 2;
  iStack_188 = (int)((ulonglong)*param_2 >> 0x20) << 2;
  uVar7 = param_1[10];
  local_184 = uVar7;
  local_180 = param_1[0xb];
  iVar8 = param_4[1] >> 6;
  local_1ac = param_1;
  iVar1 = param_1[3];
  local_1a4 = *(int *)((int)param_3 + 4) >> 6;
  iVar5 = *(int *)((int)param_2 + 4) >> 6;
  iVar3 = param_1[0xb] >> 8;
  if (((local_1a4 < iVar1 || iVar8 < iVar1) || (iVar3 < iVar1 || iVar5 < iVar1)) &&
     (iVar1 = param_1[1],
     (iVar1 <= iVar5 || (iVar1 <= local_1a4 || iVar1 <= iVar8)) || iVar1 <= iVar3)) {
    puVar9 = &local_19c;
    do {
      uVar4 = uVar7 + uVar2 * 2 + uVar11 * -3;
      uVar11 = -uVar4;
      if ((int)uVar11 < 0) {
        uVar11 = uVar4;
      }
      if (uVar11 < 0x81) {
        uVar11 = puVar9[1];
        uVar6 = puVar9[7] + uVar11 * 2 + puVar9[3] * -3;
        uVar4 = -uVar6;
        if ((int)uVar4 < 0) {
          uVar4 = uVar6;
        }
        if (0x80 < uVar4) goto LAB_00474e28;
        uVar4 = uVar2 + uVar7 * 2 + puVar9[4] * -3;
        uVar7 = -uVar4;
        if ((int)uVar7 < 0) {
          uVar7 = uVar4;
        }
        if (0x80 < uVar7) goto LAB_00474e28;
        uVar4 = puVar9[7] * 2 + uVar11 + puVar9[5] * -3;
        uVar7 = -uVar4;
        if ((int)uVar7 < 0) {
          uVar7 = uVar4;
        }
        if (0x80 < uVar7) goto LAB_00474e28;
        FUN_004746cd(local_1ac,uVar2,uVar11);
        if (puVar9 == &local_19c) goto LAB_00474d8e;
        puVar10 = puVar9 + -6;
      }
      else {
LAB_00474e28:
        puVar10 = puVar9 + 6;
        FUN_00474e6f((int *)puVar9);
      }
      uVar2 = *puVar10;
      uVar11 = puVar10[2];
      uVar7 = puVar10[6];
      puVar9 = puVar10;
    } while( true );
  }
  param_1[10] = uVar2;
  param_1[0xb] = local_1a8;
LAB_00474d8e:
  if (DAT_0050e8c0 != (local_14 ^ (uint)&local_1ac)) {
                    /* WARNING: Subroutine does not return */
    FUN_0047f2c0(local_14 ^ (uint)&local_1ac);
  }
  return;
}

