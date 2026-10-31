/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180019634 */

void FUN_180019634(longlong *param_1,ulonglong param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *local_68;
  longlong local_60;
  ulonglong local_58;
  longlong local_50;
  longlong local_48;
  undefined8 local_40;
  
  local_40 = 0xfffffffffffffffe;
  if (0xaaaaaaaaaaaaaaa < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_18001620a();
  }
  uVar3 = (param_1[2] - *param_1 >> 3) * -0x5555555555555555;
  uVar4 = 0xaaaaaaaaaaaaaaa - (uVar3 >> 1);
  uVar2 = (uVar3 >> 1) + uVar3;
  if (uVar2 <= param_2) {
    uVar2 = param_2;
  }
  if (uVar4 <= uVar3 && uVar3 - uVar4 != 0) {
    uVar2 = 0xaaaaaaaaaaaaaaa;
  }
  if (uVar2 < 0xaaaaaaaaaaaaaab) {
    lVar5 = param_1[1] - *param_1;
    lVar1 = FUN_1800013e0(uVar2 * 0x18);
    lVar6 = lVar1 + lVar5;
    lVar5 = (lVar5 >> 3) * 0x5555555555555555 + param_2;
    local_68 = param_1;
    local_60 = lVar1;
    local_58 = uVar2;
    local_50 = lVar6;
    if (lVar5 != 0) {
      lVar5 = lVar5 * 0x18;
      local_48 = lVar6;
      FUN_1802a89a0(lVar6,0,lVar5);
      lVar6 = lVar6 + lVar5;
    }
    local_48 = lVar6;
    thunk_FUN_180019858(*param_1,param_1[1],lVar1);
    local_60 = 0;
    FUN_18001979c(param_1,lVar1,param_2,uVar2);
    FUN_18001980e(&local_68);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_180001427();
}

