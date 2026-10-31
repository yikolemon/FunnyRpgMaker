/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180264160 */

ulonglong *
FUN_180264160(ulonglong *param_1,ulonglong param_2,undefined8 param_3,undefined2 param_4)

{
  longlong *plVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  code *pcVar4;
  longlong lVar5;
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
  uVar12 = param_1[2];
  uVar9 = 0x7ffffffffffffffe;
  if (0x7ffffffffffffffe - uVar12 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1800013a5();
  }
  uVar11 = param_1[3];
  uVar6 = uVar12 + param_2 | 7;
  if ((uVar6 < 0x7fffffffffffffff) && (uVar11 <= 0x7ffffffffffffffe - (uVar11 >> 1))) {
    uVar2 = uVar11 + (uVar11 >> 1);
    uVar9 = uVar6;
    if (uVar6 < uVar2) {
      uVar9 = uVar2;
    }
    if (0x7fffffffffffffff < uVar9 + 1) goto LAB_18026437e;
    uVar6 = (uVar9 + 1) * 2;
    if (uVar6 != 0) goto LAB_1802641fb;
    unaff_RSI = 0;
LAB_180264238:
    if ((7 < param_1[3]) && (DAT_18034e408 != '\0')) {
      uVar3 = *param_1;
      uVar6 = uVar3 + (param_1[3] + 1) * 2;
      uVar7 = uVar6 + 7 & 0xfffffffffffffff8;
      uVar2 = uVar3 + (param_1[2] + 1) * 2;
      uVar10 = uVar7;
      if (uVar2 <= uVar7) {
        uVar10 = uVar2;
      }
      if (uVar7 < uVar6) {
        uVar6 = uVar7;
      }
      _guard_check_icall(uVar3,uVar7,uVar10,uVar6);
    }
    lVar5 = uVar12 * 2;
    param_1[2] = uVar12 + param_2;
    param_1[3] = uVar9;
    if (uVar11 < 8) {
      FUN_1802a82f0(unaff_RSI,param_1,lVar5);
      *(undefined2 *)(lVar5 + unaff_RSI) = param_4;
      *(undefined2 *)(lVar5 + 2 + unaff_RSI) = 0;
      goto LAB_180264303;
    }
    uVar9 = *param_1;
    FUN_1802a82f0(unaff_RSI,uVar9,lVar5);
    *(undefined2 *)(lVar5 + unaff_RSI) = param_4;
    *(undefined2 *)(lVar5 + 2 + unaff_RSI) = 0;
    puVar8 = auStack_38;
    if (0xfff < uVar11 * 2 + 2) {
      plVar1 = (longlong *)(uVar9 - 8);
      uVar9 = (uVar9 - *plVar1) - 8;
      if (uVar9 < 0x20) {
        thunk_FUN_1802464a0(*plVar1,uVar11 * 2 + 0x29);
        puVar8 = auStack_38;
        goto LAB_180264303;
      }
      goto LAB_1802642dd;
    }
  }
  else {
    uVar6 = 0xfffffffffffffffe;
LAB_1802641fb:
    if (uVar6 < 0x1000) {
      unaff_RSI = FUN_180239630();
      goto LAB_180264238;
    }
    if (uVar6 + 0x27 <= uVar6) {
LAB_18026437e:
                    /* WARNING: Subroutine does not return */
      FUN_180001427();
    }
    lVar5 = FUN_180239630(uVar6 + 0x27);
    if (lVar5 != 0) {
      unaff_RSI = lVar5 + 0x27U & 0xffffffffffffffe0;
      *(longlong *)(unaff_RSI - 8) = lVar5;
      goto LAB_180264238;
    }
LAB_1802642dd:
    pcVar4 = (code *)swi(0x29);
    (*pcVar4)(5);
    puVar8 = auStack_30;
  }
  *(undefined8 *)(puVar8 + -8) = 0x1802642ec;
  thunk_FUN_1802464a0(uVar9);
LAB_180264303:
  *param_1 = unaff_RSI;
  uVar12 = param_1[3];
  if ((7 < uVar12) && (DAT_18034e408 != '\0')) {
    uVar9 = unaff_RSI + (uVar12 + 1) * 2;
    uVar6 = uVar12 * 2 + 9 + unaff_RSI & 0xfffffffffffffff8;
    uVar12 = unaff_RSI + (param_1[2] + 1) * 2;
    uVar11 = uVar6;
    if (uVar9 <= uVar6) {
      uVar11 = uVar9;
    }
    if (uVar6 < uVar12) {
      uVar12 = uVar6;
    }
    *(undefined8 *)(puVar8 + -8) = 0x180264357;
    _guard_check_icall(unaff_RSI,uVar6,uVar11,uVar12);
  }
  return param_1;
}

