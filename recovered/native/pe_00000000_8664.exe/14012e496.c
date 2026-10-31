/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14012e496 */

int FUN_14012e496(uint param_1,uint param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  ulonglong uVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  uVar6 = (ulonglong)param_3;
  if ((int)param_3 < 0) {
    uVar6 = -(longlong)(int)param_3;
  }
  if (uVar6 == 0) {
    iVar2 = 0x7fffffff;
  }
  else {
    uVar7 = (ulonglong)param_2;
    if ((int)param_2 < 0) {
      uVar7 = -(longlong)(int)param_2;
    }
    uVar3 = (ulonglong)param_1;
    if ((int)param_1 < 0) {
      uVar3 = -(longlong)(int)param_1;
    }
    iVar2 = (int)((uVar3 * uVar7) / uVar6);
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

