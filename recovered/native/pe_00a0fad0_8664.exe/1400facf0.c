/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400facf0 */

void FUN_1400facf0(ulonglong *param_1,undefined8 param_2,ulonglong param_3)

{
  code *pcVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  undefined1 *puVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined8 uStack_40;
  undefined1 auStack_38 [32];
  
  puVar6 = auStack_38;
  if (0x7ffffffffffffffe < param_3) {
                    /* WARNING: Subroutine does not return */
    FUN_14000626f();
  }
  if (param_3 < 8) {
    param_1[2] = param_3;
    param_1[3] = 7;
    FUN_140135ff0(param_1,param_2,param_3 * 2);
    *(undefined2 *)(param_3 * 2 + (longlong)param_1) = 0;
  }
  else {
    uVar2 = param_3 | 7;
    uVar7 = 0;
    if (uVar2 < 0x7fffffffffffffff) goto LAB_1400fad8d;
    uVar4 = 0xfffffffffffffffe;
    puVar6 = auStack_38;
    uVar2 = 0x7ffffffffffffffe;
    do {
      if (uVar4 < 0x1000) {
        *(undefined8 *)(puVar6 + -8) = 0x1400fadd0;
        uVar7 = FUN_1400d3680();
        break;
      }
      if (uVar4 + 0x27 <= uVar4) {
LAB_1400fae60:
                    /* WARNING: Subroutine does not return */
        *(undefined **)(puVar6 + -8) = &UNK_1400fae65;
        FUN_1400062c7();
      }
      *(undefined8 *)(puVar6 + -8) = 0x1400fad81;
      lVar3 = FUN_1400d3680(uVar4 + 0x27);
      if (lVar3 != 0) {
        uVar7 = lVar3 + 0x27U & 0xffffffffffffffe0;
        *(longlong *)(uVar7 - 8) = lVar3;
        break;
      }
      pcVar1 = (code *)swi(0x29);
      uVar2 = (*pcVar1)(5);
      puVar6 = puVar6 + 8;
LAB_1400fad8d:
      if (uVar2 < 10) {
        uVar2 = 10;
      }
      if (0x7fffffffffffffff < uVar2 + 1) goto LAB_1400fae60;
      uVar4 = (uVar2 + 1) * 2;
    } while (uVar4 != 0);
    param_1[2] = param_3;
    *param_1 = uVar7;
    param_1[3] = uVar2;
    *(undefined8 *)(puVar6 + -8) = 0x1400fadef;
    FUN_140135ff0(uVar7,param_2,param_3 * 2);
    *(undefined2 *)(param_3 * 2 + uVar7) = 0;
    uVar2 = param_1[3];
    if ((7 < uVar2) && (DAT_140166098 != '\0')) {
      uVar4 = *param_1;
      uVar5 = uVar2 * 2 + 9 + uVar4 & 0xfffffffffffffff8;
      uVar2 = uVar4 + (uVar2 + 1) * 2;
      uVar7 = uVar4 + (param_1[2] + 1) * 2;
      uVar8 = uVar5;
      if (uVar2 <= uVar5) {
        uVar8 = uVar2;
      }
      if (uVar5 < uVar7) {
        uVar7 = uVar5;
      }
      *(undefined8 *)(puVar6 + -8) = 0x1400fae42;
      _guard_check_icall(uVar4,uVar5,uVar8,uVar7);
    }
  }
  return;
}

