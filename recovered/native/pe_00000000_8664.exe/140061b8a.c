/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140061b8a */

void FUN_140061b8a(longlong *param_1,ulonglong param_2)

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
    FUN_1400066bc();
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
    lVar1 = FUN_140001fba(uVar2 * 0x18);
    lVar6 = lVar1 + lVar5;
    lVar5 = (lVar5 >> 3) * 0x5555555555555555 + param_2;
    local_68 = param_1;
    local_60 = lVar1;
    local_58 = uVar2;
    local_50 = lVar6;
    if (lVar5 != 0) {
      lVar5 = lVar5 * 0x18;
      local_48 = lVar6;
      FUN_1401c5830(lVar6,0,lVar5);
      lVar6 = lVar6 + lVar5;
    }
    local_48 = lVar6;
    thunk_FUN_140061dae(*param_1,param_1[1],lVar1);
    local_60 = 0;
    FUN_140061cf2(param_1,lVar1,param_2,uVar2);
    FUN_140061d64(&local_68);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140002001();
}

