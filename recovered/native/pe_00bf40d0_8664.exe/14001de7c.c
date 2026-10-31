/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14001de7c */

int FUN_14001de7c(uint param_1,uint param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  ulonglong uVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  uVar7 = (ulonglong)param_3;
  if ((int)param_3 < 0) {
    uVar7 = -(longlong)(int)param_3;
  }
  if (uVar7 == 0) {
    iVar2 = 0x7fffffff;
  }
  else {
    uVar3 = (ulonglong)param_2;
    if ((int)param_2 < 0) {
      uVar3 = -(longlong)(int)param_2;
    }
    uVar6 = (ulonglong)param_1;
    if ((int)param_1 < 0) {
      uVar6 = -(longlong)(int)param_1;
    }
    iVar2 = (int)(((uVar7 >> 1) + uVar6 * uVar3) / uVar7);
  }
  uVar4 = (int)param_1 >> 0x1f | 1;
  uVar5 = -uVar4;
  if (-1 < (int)param_2) {
    uVar5 = uVar4;
  }
  uVar4 = -uVar5;
  if (-1 < (int)param_3) {
    uVar4 = uVar5;
  }
  iVar1 = -iVar2;
  if (-1 < (int)uVar4) {
    iVar1 = iVar2;
  }
  return iVar1;
}

