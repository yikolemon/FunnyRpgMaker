/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18021a953 */

int FUN_18021a953(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x18);
  if (lVar1 == *(longlong *)(param_1 + 0x10)) {
    FUN_180219adc(*(undefined8 *)(param_1 + 8),0xa1);
    iVar2 = 0;
  }
  else {
    *(longlong *)(param_1 + 0x18) = lVar1 + -8;
    iVar2 = *(int *)(lVar1 + -8);
    if (*(int *)(lVar1 + -4) == 1) {
      iVar2 = (iVar2 >> 0x1f) + iVar2 + 0x2000 >> 0xe;
    }
    else if (*(int *)(lVar1 + -4) == 2) {
      iVar2 = iVar2 << 0x10;
    }
  }
  return iVar2;
}

