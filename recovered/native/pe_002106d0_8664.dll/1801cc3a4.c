/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801cc3a4 */

int FUN_1801cc3a4(uint param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  uVar3 = (ulonglong)param_2;
  if ((int)param_2 < 0) {
    uVar3 = -(longlong)(int)param_2;
  }
  if (uVar3 == 0) {
    iVar2 = 0x7fffffff;
  }
  else {
    uVar4 = (ulonglong)param_1;
    if ((int)param_1 < 0) {
      uVar4 = -(longlong)(int)param_1;
    }
    iVar2 = (int)(((uVar3 >> 1) + uVar4 * 0x10000) / uVar3);
  }
  iVar1 = -iVar2;
  if ((int)param_1 < 0 == (int)param_2 < 0) {
    iVar1 = iVar2;
  }
  return iVar1;
}

