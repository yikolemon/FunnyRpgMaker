/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400128b5 */

longlong Unwind_1400128b5(longlong *param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong unaff_RBP;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong unaff_R15;
  
  lVar6 = *param_1;
  uVar4 = (param_1[1] - lVar6 >> 4) + 1;
  uVar2 = param_1[2] - lVar6 >> 4;
  uVar3 = (uVar2 >> 1) + uVar2;
  if (uVar3 <= uVar4) {
    uVar3 = uVar4;
  }
  if (0xfffffffffffffff - (uVar2 >> 1) < uVar2) {
    uVar3 = 0xfffffffffffffff;
  }
  if (uVar3 >> 0x3c == 0) {
    lVar1 = FUN_140001fba(uVar3 << 4);
    lVar5 = lVar1 + (unaff_R15 - lVar6) + 0x10;
    *(longlong **)(unaff_RBP + -0x30) = param_1;
    *(longlong *)(unaff_RBP + -0x28) = lVar1;
    *(ulonglong *)(unaff_RBP + -0x20) = uVar3;
    *(longlong *)(unaff_RBP + -0x18) = lVar5;
    *(longlong *)(unaff_RBP + -0x10) = lVar5;
    lVar6 = (unaff_R15 - lVar6) + lVar1;
    FUN_14000f088(lVar6,*(undefined8 *)(unaff_RBP + -8));
    *(longlong *)(unaff_RBP + -0x18) = lVar6;
    if (unaff_R15 == param_1[1]) {
      FUN_140006790(*param_1,param_1[1],lVar1,param_1);
    }
    else {
      FUN_140006790(*param_1);
      *(longlong *)(unaff_RBP + -0x18) = lVar1;
      FUN_140006790();
    }
    *(undefined8 *)(unaff_RBP + -0x28) = 0;
    FUN_1400067fe(param_1,lVar1,uVar4,uVar3);
    FUN_140006b16(unaff_RBP + -0x30);
    return lVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140002001();
}

