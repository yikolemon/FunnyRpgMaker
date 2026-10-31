/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180265110 */

ulonglong *
FUN_180265110(ulonglong *param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4,
             longlong param_5)

{
  longlong *plVar1;
  ulonglong uVar2;
  undefined2 *puVar3;
  ulonglong uVar4;
  code *pcVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined1 *puVar9;
  ulonglong unaff_RSI;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  undefined1 auStack_48 [8];
  undefined1 auStack_40 [24];
  
  puVar9 = auStack_48;
  uVar13 = param_1[2];
  uVar10 = 0x7ffffffffffffffe;
  if (0x7ffffffffffffffe - uVar13 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1800013a5();
  }
  uVar12 = param_1[3];
  uVar7 = uVar13 + param_2 | 7;
  if ((uVar7 < 0x7fffffffffffffff) && (uVar12 <= 0x7ffffffffffffffe - (uVar12 >> 1))) {
    uVar2 = uVar12 + (uVar12 >> 1);
    uVar10 = uVar7;
    if (uVar7 < uVar2) {
      uVar10 = uVar2;
    }
    if (0x7fffffffffffffff < uVar10 + 1) goto LAB_180265350;
    uVar7 = (uVar10 + 1) * 2;
    if (uVar7 != 0) goto LAB_1802651ac;
    unaff_RSI = 0;
LAB_1802651e9:
    if ((7 < param_1[3]) && (DAT_18034e408 != '\0')) {
      uVar4 = *param_1;
      uVar7 = uVar4 + (param_1[3] + 1) * 2;
      uVar8 = uVar7 + 7 & 0xfffffffffffffff8;
      uVar2 = uVar4 + (param_1[2] + 1) * 2;
      uVar11 = uVar8;
      if (uVar2 <= uVar8) {
        uVar11 = uVar2;
      }
      if (uVar8 < uVar7) {
        uVar7 = uVar8;
      }
      _guard_check_icall(uVar4,uVar8,uVar11,uVar7);
    }
    param_1[2] = uVar13 + param_2;
    param_1[3] = uVar10;
    lVar6 = uVar13 * 2 + unaff_RSI;
    puVar3 = (undefined2 *)(unaff_RSI + (param_5 + uVar13) * 2);
    if (uVar12 < 8) {
      FUN_1802a82f0(unaff_RSI,param_1);
      FUN_1802a82f0(lVar6,param_4,param_5 * 2);
      *puVar3 = 0;
      goto LAB_1802652d4;
    }
    uVar10 = *param_1;
    FUN_1802a82f0(unaff_RSI,uVar10);
    FUN_1802a82f0(lVar6,param_4,param_5 * 2);
    *puVar3 = 0;
    puVar9 = auStack_48;
    if (0xfff < uVar12 * 2 + 2) {
      plVar1 = (longlong *)(uVar10 - 8);
      uVar10 = (uVar10 - *plVar1) - 8;
      if (uVar10 < 0x20) {
        thunk_FUN_1802464a0(*plVar1,uVar12 * 2 + 0x29);
        puVar9 = auStack_48;
        goto LAB_1802652d4;
      }
      goto LAB_1802652a7;
    }
  }
  else {
    uVar7 = 0xfffffffffffffffe;
LAB_1802651ac:
    if (uVar7 < 0x1000) {
      unaff_RSI = FUN_180239630();
      goto LAB_1802651e9;
    }
    if (uVar7 + 0x27 <= uVar7) {
LAB_180265350:
                    /* WARNING: Subroutine does not return */
      FUN_180001427();
    }
    lVar6 = FUN_180239630(uVar7 + 0x27);
    if (lVar6 != 0) {
      unaff_RSI = lVar6 + 0x27U & 0xffffffffffffffe0;
      *(longlong *)(unaff_RSI - 8) = lVar6;
      goto LAB_1802651e9;
    }
LAB_1802652a7:
    pcVar5 = (code *)swi(0x29);
    (*pcVar5)(5);
    puVar9 = auStack_40;
  }
  *(undefined8 *)(puVar9 + -8) = 0x1802652b6;
  thunk_FUN_1802464a0(uVar10);
LAB_1802652d4:
  *param_1 = unaff_RSI;
  uVar13 = param_1[3];
  if ((7 < uVar13) && (DAT_18034e408 != '\0')) {
    uVar10 = unaff_RSI + (uVar13 + 1) * 2;
    uVar7 = uVar13 * 2 + 9 + unaff_RSI & 0xfffffffffffffff8;
    uVar13 = unaff_RSI + (param_1[2] + 1) * 2;
    uVar12 = uVar7;
    if (uVar10 <= uVar7) {
      uVar12 = uVar10;
    }
    if (uVar7 < uVar13) {
      uVar13 = uVar7;
    }
    *(undefined8 *)(puVar9 + -8) = 0x180265328;
    _guard_check_icall(unaff_RSI,uVar7,uVar12,uVar13);
  }
  return param_1;
}

