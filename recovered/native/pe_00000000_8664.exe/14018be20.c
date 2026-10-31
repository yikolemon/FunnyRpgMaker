/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14018be20 */

ulonglong *
FUN_14018be20(ulonglong *param_1,ulonglong param_2,undefined8 param_3,undefined1 param_4)

{
  longlong *plVar1;
  code *pcVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  undefined1 *puVar8;
  ulonglong unaff_RSI;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  undefined1 auStack_38 [8];
  undefined1 auStack_30 [24];
  
  puVar8 = auStack_38;
  uVar11 = param_1[2];
  uVar9 = 0x7fffffffffffffff;
  if (0x7fffffffffffffff - uVar11 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_140002673();
  }
  uVar6 = param_1[3];
  uVar5 = uVar11 + param_2 | 0xf;
  if ((uVar5 < 0x8000000000000000) && (uVar6 <= 0x7fffffffffffffff - (uVar6 >> 1))) {
    uVar4 = uVar6 + (uVar6 >> 1);
    uVar9 = uVar5;
    if (uVar5 < uVar4) {
      uVar9 = uVar4;
    }
    uVar4 = uVar9 + 1;
    if (uVar4 == 0) {
      unaff_RSI = 0;
    }
    else {
      if (0xfff < uVar4) {
        uVar5 = uVar9 + 0x28;
        if (uVar5 <= uVar4) {
                    /* WARNING: Subroutine does not return */
          FUN_140002001();
        }
        goto LAB_14018bec2;
      }
      unaff_RSI = FUN_1401887b0(uVar4);
    }
LAB_14018bee9:
    if ((0xf < param_1[3]) && (DAT_140eb2740 != '\0')) {
      uVar5 = *param_1;
      uVar12 = param_1[3] + 1 + uVar5;
      uVar10 = param_1[2] + 1 + uVar5;
      uVar7 = uVar12 + 7 & 0xfffffffffffffff8;
      uVar4 = uVar7;
      if (uVar10 <= uVar7) {
        uVar4 = uVar10;
      }
      if (uVar7 < uVar12) {
        uVar12 = uVar7;
      }
      _guard_check_icall(uVar5,uVar7,uVar4,uVar12);
    }
    param_1[2] = uVar11 + param_2;
    param_1[3] = uVar9;
    if (uVar6 < 0x10) {
      FUN_1401c5180(unaff_RSI,param_1,uVar11);
      *(undefined1 *)(uVar11 + unaff_RSI) = param_4;
      *(undefined1 *)(uVar11 + 1 + unaff_RSI) = 0;
      goto LAB_14018bfa9;
    }
    uVar9 = *param_1;
    FUN_1401c5180(unaff_RSI,uVar9,uVar11);
    *(undefined1 *)(uVar11 + unaff_RSI) = param_4;
    *(undefined1 *)(uVar11 + 1 + unaff_RSI) = 0;
    puVar8 = auStack_38;
    if (0xfff < uVar6 + 1) {
      plVar1 = (longlong *)(uVar9 - 8);
      uVar9 = (uVar9 - *plVar1) - 8;
      if (uVar9 < 0x20) {
        thunk_FUN_14018e090(*plVar1,uVar6 + 0x28);
        puVar8 = auStack_38;
        goto LAB_14018bfa9;
      }
      goto LAB_14018bf86;
    }
  }
  else {
    uVar5 = 0x8000000000000027;
LAB_14018bec2:
    lVar3 = FUN_1401887b0(uVar5);
    if (lVar3 != 0) {
      unaff_RSI = lVar3 + 0x27U & 0xffffffffffffffe0;
      *(longlong *)(unaff_RSI - 8) = lVar3;
      goto LAB_14018bee9;
    }
LAB_14018bf86:
    pcVar2 = (code *)swi(0x29);
    (*pcVar2)(5);
    puVar8 = auStack_30;
  }
  *(undefined8 *)(puVar8 + -8) = 0x14018bf95;
  thunk_FUN_14018e090(uVar9);
LAB_14018bfa9:
  *param_1 = unaff_RSI;
  uVar11 = param_1[3];
  if ((0xf < uVar11) && (DAT_140eb2740 != '\0')) {
    uVar6 = uVar11 + 1 + unaff_RSI;
    uVar5 = uVar11 + 8 + unaff_RSI & 0xfffffffffffffff8;
    uVar9 = param_1[2] + 1 + unaff_RSI;
    uVar11 = uVar5;
    if (uVar6 <= uVar5) {
      uVar11 = uVar6;
    }
    if (uVar5 < uVar9) {
      uVar9 = uVar5;
    }
    *(undefined8 *)(puVar8 + -8) = 0x14018bff7;
    _guard_check_icall(unaff_RSI,uVar5,uVar11,uVar9);
  }
  return param_1;
}

