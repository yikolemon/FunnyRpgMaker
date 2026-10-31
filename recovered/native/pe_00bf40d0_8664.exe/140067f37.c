/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140067f37 */

int FUN_140067f37(longlong param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  ulonglong uVar3;
  
  uVar3 = FUN_140067f2a(param_1);
  if (param_2 < (uint)uVar3) {
    iVar2 = *(int *)(*(longlong *)(param_1 + 0x10) + (ulonglong)param_2 * 8);
    iVar1 = *(int *)(*(longlong *)(param_1 + 0x10) + 4 + (ulonglong)param_2 * 8);
    if (iVar1 == 1) {
      iVar2 = (iVar2 >> 0x1f) + iVar2 + 0x2000 >> 0xe;
    }
    else if (iVar1 == 2) {
      iVar2 = iVar2 << 0x10;
    }
  }
  else {
    FUN_140067118(*(int **)(param_1 + 8),0x82);
    iVar2 = 0;
  }
  return iVar2;
}

