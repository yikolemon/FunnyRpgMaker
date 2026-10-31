/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800bf6ee */

void FUN_1800bf6ee(longlong param_1,ulonglong param_2)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  longlong lVar7;
  
  if (0x666666666666666 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_18001620a();
  }
  lVar4 = *(longlong *)(param_1 + 8);
  lVar1 = *(longlong *)(param_1 + 0x18);
  if (lVar4 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x10);
    lVar7 = lVar4;
    if (lVar4 != lVar2) {
      do {
        FUN_1800bf3e8(lVar7);
        lVar7 = lVar7 + 0x28;
      } while (lVar7 != lVar2);
      lVar7 = *(longlong *)(param_1 + 8);
    }
    (*DAT_180417870)(lVar7);
    *(longlong *)(param_1 + 8) = 0;
    *(undefined8 *)(param_1 + 0x10) = 0;
    *(undefined8 *)(param_1 + 0x18) = 0;
  }
  uVar3 = (lVar1 - lVar4 >> 3) * -0x3333333333333333;
  uVar6 = 0x666666666666666 - (uVar3 >> 1);
  uVar5 = (uVar3 >> 1) + uVar3;
  if (uVar5 <= param_2) {
    uVar5 = param_2;
  }
  if (uVar6 <= uVar3 && uVar3 - uVar6 != 0) {
    uVar5 = 0x666666666666666;
  }
  lVar4 = (*DAT_180417868)(uVar5 * 0x28,1);
  *(longlong *)(param_1 + 8) = lVar4;
  *(longlong *)(param_1 + 0x10) = lVar4;
  *(ulonglong *)(param_1 + 0x18) = lVar4 + uVar5 * 0x28;
  return;
}

