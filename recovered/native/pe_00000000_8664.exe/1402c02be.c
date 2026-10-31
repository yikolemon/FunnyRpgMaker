/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1402c02be */

void FUN_1402c02be(longlong param_1)

{
  longlong lVar1;
  code *pcVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  
  lVar3 = *(longlong *)(param_1 + 8);
  if (lVar3 == 0) {
    return;
  }
  lVar5 = *(longlong *)(param_1 + 0x18);
  lVar1 = *(longlong *)(param_1 + 0x20);
  if (lVar5 != lVar1) {
    do {
      FUN_1402bea85(lVar5);
      lVar5 = lVar5 + 0x50;
    } while (lVar5 != lVar1);
    lVar3 = *(longlong *)(param_1 + 8);
  }
  uVar4 = *(longlong *)(param_1 + 0x10) * 0x50;
  lVar5 = lVar3;
  if (0xfff < uVar4) {
    lVar5 = *(longlong *)(lVar3 + -8);
    if (0x1f < (ulonglong)((lVar3 + -8) - lVar5)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    uVar4 = uVar4 + 0x27;
  }
  thunk_FUN_1404a2310(lVar5,uVar4);
  return;
}

