/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18011e05d */

void FUN_18011e05d(longlong param_1,undefined4 param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  if (*(longlong *)(param_1 + 0x78) != 0) {
    FUN_18011e0db(*(longlong *)(param_1 + 0x78),param_2);
    return;
  }
  iVar1 = *(int *)(DAT_180419160 + 0x15a8);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(DAT_180419160 + 0x15b0);
    lVar4 = 0;
    do {
      lVar3 = *(longlong *)(lVar2 + lVar4);
      if (*(longlong *)(lVar3 + 0x48) == param_1) {
        FUN_18011e0db(lVar3,param_2);
      }
      lVar4 = lVar4 + 8;
    } while ((longlong)iVar1 * 8 != lVar4);
  }
  return;
}

