/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140088530 */

undefined8 *
FUN_140088530(undefined8 *param_1,ulonglong param_2,undefined8 param_3,undefined1 param_4)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  undefined8 *puVar4;
  code *pcVar5;
  longlong lVar6;
  ulonglong uVar7;
  undefined1 *puVar8;
  undefined8 *unaff_RSI;
  ulonglong uVar9;
  undefined1 auStack_38 [8];
  undefined1 auStack_30 [24];
  
  puVar8 = auStack_38;
  uVar2 = param_1[2];
  uVar9 = 0x7fffffffffffffff;
  if (0x7fffffffffffffff - uVar2 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_14000263f();
  }
  uVar3 = param_1[3];
  uVar7 = uVar2 + param_2 | 0xf;
  if ((uVar7 < 0x8000000000000000) && (uVar3 <= 0x7fffffffffffffff - (uVar3 >> 1))) {
    uVar1 = uVar3 + (uVar3 >> 1);
    uVar9 = uVar7;
    if (uVar7 < uVar1) {
      uVar9 = uVar1;
    }
    uVar1 = uVar9 + 1;
    if (uVar1 == 0) {
      unaff_RSI = (undefined8 *)0x0;
    }
    else {
      if (0xfff < uVar1) {
        uVar7 = uVar9 + 0x28;
        if (uVar7 <= uVar1) {
                    /* WARNING: Subroutine does not return */
          FUN_140002697();
        }
        goto LAB_1400885d2;
      }
      unaff_RSI = (undefined8 *)FUN_1400863a0(uVar1);
    }
LAB_1400885f9:
    if ((0xf < (ulonglong)param_1[3]) && (DAT_14010b500 != '\0')) {
      _guard_check_icall();
    }
    param_1[2] = uVar2 + param_2;
    param_1[3] = uVar9;
    if (uVar3 < 0x10) {
      FUN_1400b3550(unaff_RSI,param_1,uVar2);
      *(undefined1 *)(uVar2 + (longlong)unaff_RSI) = param_4;
      *(undefined1 *)(uVar2 + 1 + (longlong)unaff_RSI) = 0;
      goto LAB_1400886b9;
    }
    puVar4 = (undefined8 *)*param_1;
    FUN_1400b3550(unaff_RSI,puVar4,uVar2);
    *(undefined1 *)(uVar2 + (longlong)unaff_RSI) = param_4;
    *(undefined1 *)(uVar2 + 1 + (longlong)unaff_RSI) = 0;
    puVar8 = auStack_38;
    if (0xfff < uVar3 + 1) {
      if ((ulonglong)((longlong)puVar4 + (-8 - puVar4[-1])) < 0x20) {
        FUN_1400863f0();
        puVar8 = auStack_38;
        goto LAB_1400886b9;
      }
      goto LAB_140088696;
    }
  }
  else {
    uVar7 = 0x8000000000000027;
LAB_1400885d2:
    lVar6 = FUN_1400863a0(uVar7);
    if (lVar6 != 0) {
      unaff_RSI = (undefined8 *)(lVar6 + 0x27U & 0xffffffffffffffe0);
      unaff_RSI[-1] = lVar6;
      goto LAB_1400885f9;
    }
LAB_140088696:
    pcVar5 = (code *)swi(0x29);
    (*pcVar5)(5);
    puVar8 = auStack_30;
  }
  *(undefined8 *)(puVar8 + -8) = 0x1400886a5;
  FUN_1400863f0();
LAB_1400886b9:
  *param_1 = unaff_RSI;
  if ((0xf < (ulonglong)param_1[3]) && (DAT_14010b500 != '\0')) {
    *(undefined8 *)(puVar8 + -8) = 0x140088707;
    _guard_check_icall();
  }
  return param_1;
}

