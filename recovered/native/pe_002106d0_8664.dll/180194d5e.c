/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180194d5e */

void FUN_180194d5e(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar4 = *(longlong *)(param_1 + 8);
  lVar1 = *(longlong *)(lVar4 + 0x10);
  *(longlong *)(lVar4 + 0x10) = lVar4;
  *(longlong *)(lVar4 + 0x18) = lVar4;
  lVar3 = lVar4;
  if (lVar1 != *(longlong *)(param_1 + 8)) {
    do {
      lVar4 = lVar1;
      lVar1 = *(longlong *)(lVar4 + 0x10);
      *(longlong *)(lVar4 + 0x10) = lVar3;
      *(longlong *)(lVar3 + 0x18) = lVar4;
      *(longlong *)(*(longlong *)(param_1 + 8) + 0x10) = lVar4;
      lVar2 = *(longlong *)(param_1 + 8);
      *(longlong *)(lVar4 + 0x18) = lVar2;
      lVar3 = lVar4;
    } while (lVar1 != lVar2);
  }
  *(longlong *)(param_1 + 8) = lVar4;
  return;
}

