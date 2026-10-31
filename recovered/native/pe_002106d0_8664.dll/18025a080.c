/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18025a080 */

ulonglong * FUN_18025a080(ulonglong *param_1,undefined8 *param_2)

{
  ulonglong uVar1;
  code *pcVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  undefined1 *puVar8;
  undefined8 uStack_50;
  undefined1 auStack_48 [40];
  
  puVar8 = auStack_48;
  *param_1 = 0;
  param_1[1] = 0;
  uVar5 = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  uVar1 = param_2[2];
  if (7 < (ulonglong)param_2[3]) {
    param_2 = (undefined8 *)*param_2;
  }
  if (0x7ffffffffffffffe < uVar1) {
                    /* WARNING: Subroutine does not return */
    FUN_1800013a5();
  }
  if (uVar1 < 8) {
    param_1[2] = uVar1;
    param_1[3] = 7;
    FUN_1802a82f0(0,param_2,uVar1 * 2 + 2);
    return param_1;
  }
  uVar3 = uVar1 | 7;
  if (uVar3 < 0x7fffffffffffffff) goto LAB_18025a130;
  uVar6 = 0xfffffffffffffffe;
  puVar8 = auStack_48;
  uVar3 = 0x7ffffffffffffffe;
  do {
    if (uVar6 < 0x1000) {
      *(undefined8 *)(puVar8 + -8) = 0x18025a173;
      uVar5 = FUN_180239630();
      goto LAB_18025a173;
    }
    if (uVar6 + 0x27 <= uVar6) {
LAB_18025a1f2:
                    /* WARNING: Subroutine does not return */
      *(undefined **)(puVar8 + -8) = &UNK_18025a1f7;
      FUN_180001427();
    }
    *(undefined8 *)(puVar8 + -8) = 0x18025a121;
    lVar4 = FUN_180239630(uVar6 + 0x27);
    if (lVar4 != 0) {
      uVar5 = lVar4 + 0x27U & 0xffffffffffffffe0;
      *(longlong *)(uVar5 - 8) = lVar4;
      goto LAB_18025a173;
    }
    pcVar2 = (code *)swi(0x29);
    uVar3 = (*pcVar2)(5);
    puVar8 = puVar8 + 8;
LAB_18025a130:
    if (uVar3 < 10) {
      uVar3 = 10;
    }
    if (0x7fffffffffffffff < uVar3 + 1) goto LAB_18025a1f2;
    uVar6 = (uVar3 + 1) * 2;
    if (uVar6 == 0) {
LAB_18025a173:
      *param_1 = uVar5;
      param_1[2] = uVar1;
      param_1[3] = uVar3;
      *(undefined8 *)(puVar8 + -8) = 0x18025a191;
      FUN_1802a82f0(uVar5,param_2,uVar1 * 2 + 2);
      uVar1 = param_1[3];
      if ((7 < uVar1) && (DAT_18034e408 != '\0')) {
        uVar3 = *param_1;
        uVar7 = uVar1 * 2 + 9 + uVar3 & 0xfffffffffffffff8;
        uVar1 = uVar3 + (uVar1 + 1) * 2;
        uVar5 = uVar3 + (param_1[2] + 1) * 2;
        uVar6 = uVar7;
        if (uVar1 <= uVar7) {
          uVar6 = uVar1;
        }
        if (uVar7 < uVar5) {
          uVar5 = uVar7;
        }
        *(undefined8 *)(puVar8 + -8) = 0x18025a1df;
        _guard_check_icall(uVar3,uVar7,uVar6,uVar5);
      }
      return param_1;
    }
  } while( true );
}

