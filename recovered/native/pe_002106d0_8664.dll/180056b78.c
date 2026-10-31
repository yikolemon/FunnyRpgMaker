/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180056b78 */

longlong FUN_180056b78(longlong *param_1,longlong param_2,undefined8 param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *local_78;
  longlong local_70;
  ulonglong local_68;
  longlong local_60;
  longlong local_58;
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
    lVar1 = FUN_1800013e0(uVar3 << 4);
    lVar5 = lVar1 + (param_2 - lVar6) + 0x10;
    lVar6 = (param_2 - lVar6) + lVar1;
    local_78 = param_1;
    local_70 = lVar1;
    local_68 = uVar3;
    local_60 = lVar5;
    local_58 = lVar5;
    FUN_180054d80(lVar6,local_50);
    local_60 = lVar6;
    if (param_2 == param_1[1]) {
      FUN_180016852(*param_1,param_1[1],lVar1,param_1);
    }
    else {
      FUN_180016852(*param_1,param_2,lVar1,param_1);
      local_60 = lVar1;
      FUN_180016852(param_2,param_1[1],lVar5,param_1);
    }
    local_70 = 0;
    FUN_1800168c0(param_1,lVar1,uVar4,uVar3);
    FUN_180016bd8(&local_78);
    return lVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_180001427();
}

