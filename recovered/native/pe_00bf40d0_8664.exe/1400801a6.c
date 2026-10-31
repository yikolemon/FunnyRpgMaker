/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 1400801a6 */

void FUN_1400801a6(undefined8 *param_1)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar2 = (int)param_1[1];
  iVar4 = (int)*param_1 + iVar2;
  iVar3 = (int)((ulonglong)param_1[1] >> 0x20);
  iVar5 = (int)((ulonglong)*param_1 >> 0x20) + iVar3;
  uVar1 = param_1[2];
  iVar2 = iVar2 + (int)uVar1;
  iVar3 = iVar3 + (int)((ulonglong)uVar1 >> 0x20);
  param_1[3] = CONCAT44(iVar3 / 2,iVar2 / 2);
  param_1[4] = uVar1;
  iVar2 = iVar2 + iVar4;
  iVar3 = iVar3 + iVar5;
  param_1[1] = CONCAT44(iVar5 / 2,iVar4 / 2);
  param_1[2] = CONCAT44((int)(((uint)(iVar3 >> 0x1f) >> 0x1e) + iVar3) >> 2,
                        (int)(((uint)(iVar2 >> 0x1f) >> 0x1e) + iVar2) >> 2);
  return;
}

