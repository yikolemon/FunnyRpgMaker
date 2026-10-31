/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140097319 */

void FUN_140097319(longlong param_1,undefined4 param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  if (*(longlong *)(param_1 + 0x78) != 0) {
    FUN_140097397(*(longlong *)(param_1 + 0x78),param_2);
    return;
  }
  iVar1 = *(int *)(DAT_140f2a910 + 0x15a8);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(DAT_140f2a910 + 0x15b0);
    lVar4 = 0;
    do {
      lVar3 = *(longlong *)(lVar2 + lVar4);
      if (*(longlong *)(lVar3 + 0x48) == param_1) {
        FUN_140097397(lVar3,param_2);
      }
      lVar4 = lVar4 + 8;
    } while ((longlong)iVar1 * 8 != lVar4);
  }
  return;
}

