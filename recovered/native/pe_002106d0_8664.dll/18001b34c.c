/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18001b34c */

void FUN_18001b34c(longlong param_1,ulonglong param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  uVar3 = *(longlong *)(param_1 + 0x18) - *(longlong *)(param_1 + 0x10) >> 4;
  if ((param_2 & 0xffffffff) < uVar3) {
    param_2 = param_2 & 0xffffffff;
    do {
      uVar1 = *(ulonglong *)(*(longlong *)(param_1 + 0x28) + (param_2 >> 6) * 8);
      if ((uVar1 >> (param_2 & 0x3f) & 1) != 0) {
        *(ulonglong *)(*(longlong *)(param_1 + 0x28) + (param_2 >> 6) * 8) =
             uVar1 & ~(1L << ((byte)param_2 & 0x3f));
        lVar2 = FUN_18001b122(param_1,0xf,0);
        *(int *)(*(longlong *)(param_1 + 0x90) + 4 + lVar2 * 0x20) = (int)param_2;
      }
      param_2 = (ulonglong)((int)param_2 + 1);
    } while (param_2 < uVar3);
  }
  return;
}

