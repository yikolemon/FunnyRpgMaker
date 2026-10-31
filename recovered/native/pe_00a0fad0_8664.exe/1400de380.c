/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400de380 */

void FUN_1400de380(longlong *param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  code *pcVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined1 *puVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [24];
  
  if (7 < (ulonglong)param_1[3]) {
    if (DAT_140166098 != '\0') {
      lVar2 = *param_1;
      uVar8 = lVar2 + (param_1[3] + 1U) * 2;
      uVar5 = uVar8 + 7 & 0xfffffffffffffff8;
      uVar1 = lVar2 + (param_1[2] + 1) * 2;
      uVar7 = uVar5;
      if (uVar1 <= uVar5) {
        uVar7 = uVar1;
      }
      if (uVar5 < uVar8) {
        uVar8 = uVar5;
      }
      _guard_check_icall(lVar2,uVar5,uVar7,uVar8);
    }
    lVar2 = *param_1;
    lVar4 = lVar2;
    puVar6 = auStack_28;
    if ((0xfff < param_1[3] * 2 + 2U) &&
       (lVar4 = *(longlong *)(lVar2 + -8), puVar6 = auStack_28, 0x1f < (lVar2 - lVar4) - 8U)) {
      lVar4 = 5;
      pcVar3 = (code *)swi(0x29);
      (*pcVar3)(5);
      puVar6 = auStack_20;
    }
    *(undefined8 *)(puVar6 + -8) = 0x1400de414;
    thunk_FUN_1400ddcd0(lVar4);
  }
  param_1[2] = 0;
  *(undefined2 *)param_1 = 0;
  param_1[3] = 7;
  return;
}

