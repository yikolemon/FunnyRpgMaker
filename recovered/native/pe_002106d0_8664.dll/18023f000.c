/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18023f000 */

ulonglong * FUN_18023f000(ulonglong *param_1,ulonglong param_2,char param_3)

{
  code *pcVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  undefined1 *puVar7;
  ulonglong uVar8;
  undefined8 uStack_50;
  undefined1 auStack_48 [32];
  
  puVar7 = auStack_48;
  uVar5 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  if (0x7fffffffffffffff < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1800013a5();
  }
  if (param_2 < 0x10) {
    param_1[2] = param_2;
    param_1[3] = 0xf;
    FUN_1802a89a0(0,(int)param_3,param_2);
    *(undefined1 *)(param_2 + (longlong)param_1) = 0;
    return param_1;
  }
  uVar2 = param_2 | 0xf;
  if (uVar2 < 0x8000000000000000) goto LAB_18023f091;
  uVar3 = 0x8000000000000027;
  puVar7 = auStack_48;
  uVar2 = 0x7fffffffffffffff;
  while( true ) {
    *(undefined8 *)(puVar7 + -8) = 0x18023f085;
    lVar4 = FUN_180239630(uVar3);
    if (lVar4 != 0) break;
    pcVar1 = (code *)swi(0x29);
    uVar2 = (*pcVar1)(5);
    puVar7 = puVar7 + 8;
LAB_18023f091:
    if (uVar2 < 0x16) {
      uVar2 = 0x16;
    }
    if (uVar2 == 0xffffffffffffffff) goto LAB_18023f0d7;
    if (uVar2 + 1 < 0x1000) {
      *(undefined8 *)(puVar7 + -8) = 0x18023f0d4;
      uVar5 = FUN_180239630();
      goto LAB_18023f0d7;
    }
    uVar3 = uVar2 + 0x28;
    if (uVar3 <= uVar2 + 1) {
                    /* WARNING: Subroutine does not return */
      *(undefined **)(puVar7 + -8) = &UNK_18023f155;
      FUN_180001427();
    }
  }
  uVar5 = lVar4 + 0x27U & 0xffffffffffffffe0;
  *(longlong *)(uVar5 - 8) = lVar4;
LAB_18023f0d7:
  *param_1 = uVar5;
  param_1[2] = param_2;
  param_1[3] = uVar2;
  *(undefined8 *)(puVar7 + -8) = 0x18023f0f0;
  FUN_1802a89a0(uVar5,(int)param_3,param_2);
  *(undefined1 *)(uVar5 + param_2) = 0;
  uVar5 = param_1[3];
  if ((0xf < uVar5) && (DAT_18034e408 != '\0')) {
    uVar2 = *param_1;
    uVar3 = param_1[2] + 1 + uVar2;
    uVar8 = uVar2 + 1 + uVar5;
    uVar6 = uVar5 + 8 + uVar2 & 0xfffffffffffffff8;
    uVar5 = uVar6;
    if (uVar8 <= uVar6) {
      uVar5 = uVar8;
    }
    if (uVar6 < uVar3) {
      uVar3 = uVar6;
    }
    *(undefined8 *)(puVar7 + -8) = 0x18023f13c;
    _guard_check_icall(uVar2,uVar6,uVar5,uVar3);
  }
  return param_1;
}

