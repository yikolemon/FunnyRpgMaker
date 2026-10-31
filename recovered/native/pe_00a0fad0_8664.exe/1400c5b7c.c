/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400c5b7c */

longlong FUN_1400c5b7c(longlong *param_1,longlong param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong *local_78;
  longlong local_70;
  ulonglong local_68;
  longlong local_60;
  longlong local_58;
  undefined8 local_50;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  lVar1 = *param_1;
  uVar5 = (param_1[1] - lVar1 >> 3) * -0x70a3d70a3d70a3d7 + 1;
  uVar3 = (param_1[2] - lVar1 >> 3) * -0x70a3d70a3d70a3d7;
  uVar6 = 0x147ae147ae147ae - (uVar3 >> 1);
  uVar4 = (uVar3 >> 1) + uVar3;
  if (uVar4 <= uVar5) {
    uVar4 = uVar5;
  }
  if (uVar6 <= uVar3 && uVar3 - uVar6 != 0) {
    uVar4 = 0x147ae147ae147ae;
  }
  local_50 = param_3;
  if (uVar4 < 0x147ae147ae147af) {
    lVar2 = FUN_140006280(uVar4 * 200);
    lVar7 = (param_2 - lVar1) + lVar2;
    lVar1 = lVar7 + 200;
    local_78 = param_1;
    local_70 = lVar2;
    local_68 = uVar4;
    local_60 = lVar1;
    local_58 = lVar1;
    FUN_1400c5d04(lVar7,local_50);
    local_60 = lVar7;
    if (param_2 == param_1[1]) {
      FUN_1400cb6c4(*param_1,param_1[1],lVar2,param_1);
    }
    else {
      FUN_1400cb77a(*param_1,param_2,lVar2,param_1);
      local_60 = lVar2;
      FUN_1400cb77a(param_2,param_1[1],lVar1,param_1);
    }
    local_70 = 0;
    FUN_1400cb830(param_1,lVar2,uVar5,uVar4);
    FUN_1400cb8d2(&local_78);
    return lVar7;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1400062c7();
}

