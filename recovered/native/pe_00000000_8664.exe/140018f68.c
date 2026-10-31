/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140018f68 */

void FUN_140018f68(longlong param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  code *pcVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong *plVar7;
  
  lVar4 = *(longlong *)(param_1 + 8);
  if (lVar4 == 0) {
    return;
  }
  plVar7 = *(longlong **)(param_1 + 0x18);
  plVar1 = *(longlong **)(param_1 + 0x20);
  if (plVar7 != plVar1) {
    do {
      puVar2 = (undefined8 *)*plVar7;
      if (puVar2 != (undefined8 *)0x0) {
        (**(code **)*puVar2)(puVar2,1);
      }
      plVar7 = plVar7 + 1;
    } while (plVar7 != plVar1);
    lVar4 = *(longlong *)(param_1 + 8);
  }
  uVar6 = *(longlong *)(param_1 + 0x10) * 8;
  lVar5 = lVar4;
  if (0xfff < uVar6) {
    lVar5 = *(longlong *)(lVar4 + -8);
    if (0x1f < (ulonglong)((lVar4 + -8) - lVar5)) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    uVar6 = uVar6 + 0x27;
  }
  thunk_FUN_14018e090(lVar5,uVar6);
  return;
}

