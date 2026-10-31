/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18008ae86 */

longlong FUN_18008ae86(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *local_70;
  longlong local_68;
  ulonglong local_60;
  longlong local_58;
  longlong local_50;
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
  if (uVar3 >> 0x3c == 0) {
    lVar1 = FUN_1800013e0(uVar3 << 4);
    lVar5 = lVar1 + (param_2 - lVar6) + 0x10;
    lVar6 = (param_2 - lVar6) + lVar1;
    local_70 = param_1;
    local_68 = lVar1;
    local_60 = uVar3;
    local_58 = lVar5;
    local_50 = lVar5;
    FUN_180081664(lVar6,0);
    local_58 = lVar6;
    if (param_2 == param_1[1]) {
      FUN_180080e78(*param_1,param_1[1],lVar1,param_1);
    }
    else {
      FUN_180080e78(*param_1,param_2,lVar1,param_1);
      local_58 = lVar1;
      FUN_180080e78(param_2,param_1[1],lVar5,param_1);
    }
    local_68 = 0;
    FUN_180080ee6(param_1,lVar1,uVar4,uVar3);
    FUN_1800811bc(&local_70);
    return lVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_180001427();
}

