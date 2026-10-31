/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140012892 */

longlong FUN_140012892(longlong *param_1,longlong param_2,undefined8 param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plStack_78;
  longlong lStack_70;
  ulonglong uStack_68;
  longlong lStack_60;
  longlong lStack_58;
  undefined8 local_50;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
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
  local_50 = param_3;
  if (uVar3 >> 0x3c == 0) {
    lVar1 = FUN_140001fba(uVar3 << 4);
    lVar5 = lVar1 + (param_2 - lVar6) + 0x10;
    lVar6 = (param_2 - lVar6) + lVar1;
    plStack_78 = param_1;
    lStack_70 = lVar1;
    uStack_68 = uVar3;
    lStack_60 = lVar5;
    lStack_58 = lVar5;
    FUN_14000f088(lVar6,local_50);
    lStack_60 = lVar6;
    if (param_2 == param_1[1]) {
      FUN_140006790(*param_1,param_1[1],lVar1,param_1);
    }
    else {
      FUN_140006790(*param_1,param_2,lVar1,param_1);
      lStack_60 = lVar1;
      FUN_140006790(param_2,param_1[1],lVar5,param_1);
    }
    lStack_70 = 0;
    FUN_1400067fe(param_1,lVar1,uVar4,uVar3);
    FUN_140006b16(&plStack_78);
    return lVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140002001();
}

