/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400beb24 */

void FUN_1400beb24(longlong param_1)

{
  undefined8 *puVar1;
  code *pcVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined8 *puVar6;
  
  lVar3 = *(longlong *)(param_1 + 8);
  if (lVar3 == 0) {
    return;
  }
  puVar6 = *(undefined8 **)(param_1 + 0x18);
  puVar1 = *(undefined8 **)(param_1 + 0x20);
  if (puVar6 != puVar1) {
    do {
      FUN_1400dcb90(*puVar6);
      puVar6 = puVar6 + 1;
    } while (puVar6 != puVar1);
    lVar3 = *(longlong *)(param_1 + 8);
  }
  uVar5 = *(longlong *)(param_1 + 0x10) * 8;
  lVar4 = lVar3;
  if (0xfff < uVar5) {
    lVar4 = *(longlong *)(lVar3 + -8);
    if (0x1f < (ulonglong)((lVar3 + -8) - lVar4)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    uVar5 = uVar5 + 0x27;
  }
  thunk_FUN_1400ddcd0(lVar4,uVar5);
  return;
}

