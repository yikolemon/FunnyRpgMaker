/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400d97b0 */

ulonglong *
FUN_1400d97b0(ulonglong *param_1,ulonglong param_2,undefined8 param_3,longlong param_4,
             longlong param_5,char param_6)

{
  longlong *plVar1;
  longlong lVar2;
  code *pcVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  undefined1 *puVar8;
  ulonglong unaff_RSI;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  undefined1 auStack_48 [8];
  undefined1 auStack_40 [24];
  
  puVar8 = auStack_48;
  uVar11 = param_1[2];
  uVar9 = 0x7fffffffffffffff;
  if (0x7fffffffffffffff - uVar11 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_14000626f();
  }
  uVar6 = param_1[3];
  uVar5 = uVar11 + param_2 | 0xf;
  if ((uVar5 < 0x8000000000000000) && (uVar6 <= 0x7fffffffffffffff - (uVar6 >> 1))) {
    uVar10 = uVar6 + (uVar6 >> 1);
    uVar9 = uVar5;
    if (uVar5 < uVar10) {
      uVar9 = uVar10;
    }
    uVar10 = uVar9 + 1;
    if (uVar10 == 0) {
      unaff_RSI = 0;
    }
    else {
      if (0xfff < uVar10) {
        uVar5 = uVar9 + 0x28;
        if (uVar5 <= uVar10) {
                    /* WARNING: Subroutine does not return */
          FUN_1400062c7();
        }
        goto LAB_1400d9853;
      }
      unaff_RSI = FUN_1400d3680(uVar10);
    }
LAB_1400d987a:
    if ((0xf < param_1[3]) && (DAT_140166098 != '\0')) {
      uVar5 = *param_1;
      uVar12 = param_1[3] + 1 + uVar5;
      uVar13 = param_1[2] + 1 + uVar5;
      uVar7 = uVar12 + 7 & 0xfffffffffffffff8;
      uVar10 = uVar7;
      if (uVar13 <= uVar7) {
        uVar10 = uVar13;
      }
      if (uVar7 < uVar12) {
        uVar12 = uVar7;
      }
      _guard_check_icall(uVar5,uVar7,uVar10,uVar12);
    }
    param_1[3] = uVar9;
    param_1[2] = uVar11 + param_2;
    lVar2 = unaff_RSI + param_4;
    lVar4 = (uVar11 - param_4) + 1;
    if (uVar6 < 0x10) {
      FUN_140135ff0(unaff_RSI,param_1,param_4);
      FUN_1401366a0(lVar2,(int)param_6,param_5);
      FUN_140135ff0(param_5 + lVar2,param_4 + (longlong)param_1,lVar4);
      goto LAB_1400d997c;
    }
    uVar9 = *param_1;
    FUN_140135ff0(unaff_RSI,uVar9,param_4);
    FUN_1401366a0(lVar2,(int)param_6,param_5);
    FUN_140135ff0(param_5 + lVar2,uVar9 + param_4,lVar4);
    puVar8 = auStack_48;
    if (0xfff < uVar6 + 1) {
      plVar1 = (longlong *)(uVar9 - 8);
      uVar9 = (uVar9 - *plVar1) - 8;
      if (uVar9 < 0x20) {
        thunk_FUN_1400ddcd0(*plVar1,uVar6 + 0x28);
        puVar8 = auStack_48;
        goto LAB_1400d997c;
      }
      goto LAB_1400d9945;
    }
  }
  else {
    uVar5 = 0x8000000000000027;
LAB_1400d9853:
    lVar4 = FUN_1400d3680(uVar5);
    if (lVar4 != 0) {
      unaff_RSI = lVar4 + 0x27U & 0xffffffffffffffe0;
      *(longlong *)(unaff_RSI - 8) = lVar4;
      goto LAB_1400d987a;
    }
LAB_1400d9945:
    pcVar3 = (code *)swi(0x29);
    (*pcVar3)(5);
    puVar8 = auStack_40;
  }
  *(undefined8 *)(puVar8 + -8) = 0x1400d9954;
  thunk_FUN_1400ddcd0(uVar9);
LAB_1400d997c:
  *param_1 = unaff_RSI;
  uVar11 = param_1[3];
  if ((0xf < uVar11) && (DAT_140166098 != '\0')) {
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
    *(undefined8 *)(puVar8 + -8) = 0x1400d99ca;
    _guard_check_icall(unaff_RSI,uVar5,uVar11,uVar9);
  }
  return param_1;
}

