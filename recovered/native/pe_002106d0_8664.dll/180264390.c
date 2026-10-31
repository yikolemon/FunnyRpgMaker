/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180264390 */

ulonglong *
FUN_180264390(ulonglong *param_1,ulonglong param_2,undefined8 param_3,longlong param_4,
             undefined2 param_5)

{
  longlong *plVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  code *pcVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong unaff_RBX;
  undefined1 *puVar8;
  ulonglong uVar9;
  undefined2 *puVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  undefined1 auStack_38 [8];
  undefined1 auStack_30 [24];
  
  puVar8 = auStack_38;
  uVar13 = param_1[2];
  uVar9 = 0x7ffffffffffffffe;
  if (0x7ffffffffffffffe - uVar13 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1800013a5();
  }
  param_2 = uVar13 + param_2;
  uVar12 = param_1[3];
  uVar6 = param_2 | 7;
  if ((uVar6 < 0x7fffffffffffffff) && (uVar12 <= 0x7ffffffffffffffe - (uVar12 >> 1))) {
    uVar2 = uVar12 + (uVar12 >> 1);
    uVar9 = uVar6;
    if (uVar6 < uVar2) {
      uVar9 = uVar2;
    }
    if (0x7fffffffffffffff < uVar9 + 1) goto LAB_1802645d5;
    uVar6 = (uVar9 + 1) * 2;
    if (uVar6 != 0) goto LAB_18026442a;
    unaff_RBX = 0;
LAB_180264467:
    if ((7 < param_1[3]) && (DAT_18034e408 != '\0')) {
      uVar3 = *param_1;
      uVar6 = uVar3 + (param_1[3] + 1) * 2;
      uVar7 = uVar6 + 7 & 0xfffffffffffffff8;
      uVar2 = uVar3 + (param_1[2] + 1) * 2;
      uVar11 = uVar7;
      if (uVar2 <= uVar7) {
        uVar11 = uVar2;
      }
      if (uVar7 < uVar6) {
        uVar6 = uVar7;
      }
      _guard_check_icall(uVar3,uVar7,uVar11,uVar6);
    }
    param_1[3] = uVar9;
    param_1[2] = param_2;
    puVar10 = (undefined2 *)(uVar13 * 2 + unaff_RBX);
    if (uVar12 < 8) {
      FUN_1802a82f0(unaff_RBX,param_1);
      lVar5 = param_4;
      if (param_4 != 0) {
        for (; lVar5 != 0; lVar5 = lVar5 + -1) {
          *puVar10 = param_5;
          puVar10 = puVar10 + 1;
        }
      }
      *(undefined2 *)(unaff_RBX + (uVar13 + param_4) * 2) = 0;
      goto LAB_18026455a;
    }
    param_2 = *param_1;
    FUN_1802a82f0(unaff_RBX,param_2);
    lVar5 = param_4;
    if (param_4 != 0) {
      for (; lVar5 != 0; lVar5 = lVar5 + -1) {
        *puVar10 = param_5;
        puVar10 = puVar10 + 1;
      }
    }
    *(undefined2 *)(unaff_RBX + (uVar13 + param_4) * 2) = 0;
    puVar8 = auStack_38;
    if (0xfff < uVar12 * 2 + 2) {
      plVar1 = (longlong *)(param_2 - 8);
      param_2 = (param_2 - *plVar1) - 8;
      if (param_2 < 0x20) {
        thunk_FUN_1802464a0(*plVar1,uVar12 * 2 + 0x29);
        puVar8 = auStack_38;
        goto LAB_18026455a;
      }
      goto LAB_180264518;
    }
  }
  else {
    uVar6 = 0xfffffffffffffffe;
LAB_18026442a:
    if (uVar6 < 0x1000) {
      unaff_RBX = FUN_180239630();
      goto LAB_180264467;
    }
    if (uVar6 + 0x27 <= uVar6) {
LAB_1802645d5:
                    /* WARNING: Subroutine does not return */
      FUN_180001427();
    }
    lVar5 = FUN_180239630(uVar6 + 0x27);
    if (lVar5 != 0) {
      unaff_RBX = lVar5 + 0x27U & 0xffffffffffffffe0;
      *(longlong *)(unaff_RBX - 8) = lVar5;
      goto LAB_180264467;
    }
LAB_180264518:
    pcVar4 = (code *)swi(0x29);
    (*pcVar4)(5);
    puVar8 = auStack_30;
  }
  *(undefined8 *)(puVar8 + -8) = 0x180264527;
  thunk_FUN_1802464a0(param_2);
LAB_18026455a:
  *param_1 = unaff_RBX;
  uVar13 = param_1[3];
  if ((7 < uVar13) && (DAT_18034e408 != '\0')) {
    uVar9 = unaff_RBX + (uVar13 + 1) * 2;
    uVar6 = uVar13 * 2 + 9 + unaff_RBX & 0xfffffffffffffff8;
    uVar13 = unaff_RBX + (param_1[2] + 1) * 2;
    uVar12 = uVar6;
    if (uVar9 <= uVar6) {
      uVar12 = uVar9;
    }
    if (uVar6 < uVar13) {
      uVar13 = uVar6;
    }
    *(undefined8 *)(puVar8 + -8) = 0x1802645ae;
    _guard_check_icall(unaff_RBX,uVar6,uVar12,uVar13);
  }
  return param_1;
}

