/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101c52f5 */

int FUN_101c52f5(uint param_1,uint param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  
  iVar2 = param_3 >> 0x1f;
  iVar5 = -param_3;
  iVar4 = -(uint)(param_3 != 0) - iVar2;
  if (-1 < iVar2) {
    iVar5 = param_3;
    iVar4 = iVar2;
  }
  uVar6 = (int)param_1 >> 0x1f;
  if (iVar5 == 0 && iVar4 == 0) {
    iVar4 = 0x7fffffff;
  }
  else {
    uVar3 = -param_2;
    iVar2 = -(uint)(param_2 != 0) - ((int)param_2 >> 0x1f);
    if (-1 < (int)param_2) {
      uVar3 = param_2;
      iVar2 = (int)param_2 >> 0x1f;
    }
    uVar7 = -param_1;
    uVar1 = -(uint)(param_1 != 0) - uVar6;
    if (-1 < (int)param_1) {
      uVar7 = param_1;
      uVar1 = uVar6;
    }
    iVar4 = __aulldiv((int)((ulonglong)uVar3 * (ulonglong)uVar7),
                      uVar7 * iVar2 +
                      uVar1 * uVar3 + (int)((ulonglong)uVar3 * (ulonglong)uVar7 >> 0x20),iVar5,iVar4
                     );
  }
  uVar3 = -(uVar6 | 1);
  if (-1 < (int)param_2) {
    uVar3 = uVar6 | 1;
  }
  uVar6 = -uVar3;
  if (-1 < param_3) {
    uVar6 = uVar3;
  }
  iVar5 = -iVar4;
  if (-1 < (int)uVar6) {
    iVar5 = iVar4;
  }
  return iVar5;
}

