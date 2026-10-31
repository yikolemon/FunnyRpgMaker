/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1401822ba */

void FUN_1401822ba(undefined8 *param_1)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  
  iVar8 = (int)param_1[1];
  iVar2 = (int)*param_1 + iVar8;
  iVar9 = (int)((ulonglong)param_1[1] >> 0x20);
  iVar4 = (int)((ulonglong)*param_1 >> 0x20) + iVar9;
  iVar6 = (int)param_1[2];
  iVar8 = iVar8 + iVar6;
  iVar7 = (int)((ulonglong)param_1[2] >> 0x20);
  iVar9 = iVar9 + iVar7;
  iVar3 = iVar2 + iVar8;
  iVar5 = iVar4 + iVar9;
  param_1[1] = CONCAT44(iVar4 / 2,iVar2 / 2);
  param_1[2] = CONCAT44((int)(((uint)(iVar5 >> 0x1f) >> 0x1e) + iVar5) >> 2,
                        (int)(((uint)(iVar3 >> 0x1f) >> 0x1e) + iVar3) >> 2);
  uVar1 = param_1[3];
  iVar6 = iVar6 + (int)uVar1;
  iVar7 = iVar7 + (int)((ulonglong)uVar1 >> 0x20);
  param_1[5] = CONCAT44(iVar7 / 2,iVar6 / 2);
  param_1[6] = uVar1;
  iVar6 = iVar6 + iVar8;
  iVar7 = iVar7 + iVar9;
  param_1[3] = CONCAT44((int)(((uint)(iVar7 + iVar5 >> 0x1f) >> 0x1d) + iVar7 + iVar5) >> 3,
                        (int)(((uint)(iVar6 + iVar3 >> 0x1f) >> 0x1d) + iVar6 + iVar3) >> 3);
  param_1[4] = CONCAT44((int)(((uint)(iVar7 >> 0x1f) >> 0x1e) + iVar7) >> 2,
                        (int)(((uint)(iVar6 >> 0x1f) >> 0x1e) + iVar6) >> 2);
  return;
}

