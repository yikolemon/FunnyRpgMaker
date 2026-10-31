/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1402c11ec */

longlong FUN_1402c11ec(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *local_70;
  longlong local_68;
  ulonglong local_60;
  longlong local_58;
  longlong local_50;
  undefined8 local_48;
  
  lVar1 = param_1[1];
  if (lVar1 != param_1[2]) {
    FUN_1402c13a4(lVar1);
    lVar1 = param_1[1];
    param_1[1] = lVar1 + 0x78;
    return lVar1;
  }
  local_48 = 0xfffffffffffffffe;
  lVar8 = *param_1;
  uVar5 = (param_1[1] - lVar8 >> 3) * -0x1111111111111111 + 1;
  uVar3 = (param_1[2] - lVar8 >> 3) * -0x1111111111111111;
  uVar6 = 0x222222222222222 - (uVar3 >> 1);
  uVar4 = (uVar3 >> 1) + uVar3;
  if (uVar4 <= uVar5) {
    uVar4 = uVar5;
  }
  if (uVar6 <= uVar3 && uVar3 - uVar6 != 0) {
    uVar4 = 0x222222222222222;
  }
  if (uVar4 < 0x222222222222223) {
    lVar2 = FUN_1402128b0(uVar4 * 0x78);
    lVar7 = lVar2 + (lVar1 - lVar8) + 0x78;
    lVar8 = (lVar1 - lVar8) + lVar2;
    local_70 = param_1;
    local_68 = lVar2;
    local_60 = uVar4;
    local_58 = lVar7;
    local_50 = lVar7;
    FUN_1402c13a4(lVar8);
    local_58 = lVar8;
    if (lVar1 == param_1[1]) {
      FUN_1402c149b(*param_1,param_1[1],lVar2,param_1);
    }
    else {
      FUN_1402c153f(*param_1,lVar1,lVar2,param_1);
      local_58 = lVar2;
      FUN_1402c153f(lVar1,param_1[1],lVar7,param_1);
    }
    local_68 = 0;
    FUN_1402c15e4(param_1,lVar2,uVar5,uVar4);
    FUN_1402c167c(&local_70);
    return lVar8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1402128f7();
}

