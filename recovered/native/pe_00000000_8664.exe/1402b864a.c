/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1402b864a */

longlong FUN_1402b864a(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong lVar8;
  longlong *local_78;
  longlong local_70;
  ulonglong local_68;
  longlong local_60;
  longlong local_58;
  undefined8 local_50;
  undefined8 local_48;
  
  lVar1 = param_1[1];
  if (lVar1 != param_1[2]) {
    FUN_1402b8814(lVar1,param_2);
    lVar1 = param_1[1];
    param_1[1] = lVar1 + 200;
    return lVar1;
  }
  local_48 = 0xfffffffffffffffe;
  lVar2 = *param_1;
  uVar6 = (param_1[1] - lVar2 >> 3) * -0x70a3d70a3d70a3d7 + 1;
  uVar4 = (param_1[2] - lVar2 >> 3) * -0x70a3d70a3d70a3d7;
  uVar7 = 0x147ae147ae147ae - (uVar4 >> 1);
  uVar5 = (uVar4 >> 1) + uVar4;
  if (uVar5 <= uVar6) {
    uVar5 = uVar6;
  }
  if (uVar7 <= uVar4 && uVar4 - uVar7 != 0) {
    uVar5 = 0x147ae147ae147ae;
  }
  local_50 = param_2;
  if (uVar5 < 0x147ae147ae147af) {
    lVar3 = FUN_1402128b0(uVar5 * 200);
    lVar8 = (lVar1 - lVar2) + lVar3;
    lVar2 = lVar8 + 200;
    local_78 = param_1;
    local_70 = lVar3;
    local_68 = uVar5;
    local_60 = lVar2;
    local_58 = lVar2;
    FUN_1402b8814(lVar8,local_50);
    local_60 = lVar8;
    if (lVar1 == param_1[1]) {
      FUN_1402bda18(*param_1,param_1[1],lVar3,param_1);
    }
    else {
      FUN_1402bdace(*param_1,lVar1,lVar3,param_1);
      local_60 = lVar3;
      FUN_1402bdace(lVar1,param_1[1],lVar2,param_1);
    }
    local_70 = 0;
    FUN_1402bdb84(param_1,lVar3,uVar6,uVar5);
    FUN_1402bdc26(&local_78);
    return lVar8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1402128f7();
}

