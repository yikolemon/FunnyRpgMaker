/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00479125 */

void __fastcall FUN_00479125(undefined8 *param_1)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = (int)param_1[1];
  iVar2 = (int)*param_1 + iVar4;
  iVar5 = (int)((ulonglong)param_1[1] >> 0x20);
  iVar3 = (int)((ulonglong)*param_1 >> 0x20) + iVar5;
  uVar1 = param_1[2];
  iVar4 = iVar4 + (int)uVar1;
  iVar5 = iVar5 + (int)((ulonglong)uVar1 >> 0x20);
  param_1[3] = CONCAT44(iVar5 / 2,iVar4 / 2);
  param_1[4] = uVar1;
  iVar4 = iVar4 + iVar2;
  iVar5 = iVar5 + iVar3;
  param_1[1] = CONCAT44(iVar3 / 2,iVar2 / 2);
  param_1[2] = CONCAT44((int)(((uint)(iVar5 >> 0x1f) >> 0x1e) + iVar5) >> 2,
                        (int)(((uint)(iVar4 >> 0x1f) >> 0x1e) + iVar4) >> 2);
  return;
}

