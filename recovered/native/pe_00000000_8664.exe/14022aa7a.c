/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14022aa7a */

void FUN_14022aa7a(longlong *param_1,ulonglong param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *local_68;
  longlong local_60;
  ulonglong local_58;
  longlong local_50;
  longlong local_48;
  undefined8 local_40;
  
  lVar7 = *param_1;
  lVar6 = param_1[1];
  lVar5 = lVar6 - lVar7 >> 3;
  lVar1 = param_2 + lVar5 * 0x5555555555555555;
  if (param_2 < (ulonglong)(lVar5 * -0x5555555555555555)) {
    param_1[1] = lVar7 + param_2 * 0x18;
  }
  else if (lVar1 != 0) {
    if ((ulonglong)((param_1[2] - lVar7 >> 3) * -0x5555555555555555) < param_2) {
      local_40 = 0xfffffffffffffffe;
      if (0xaaaaaaaaaaaaaaa < param_2) {
                    /* WARNING: Subroutine does not return */
        FUN_1402276da();
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
        lVar6 = param_1[1] - *param_1;
        lVar1 = FUN_1402128b0(uVar2 * 0x18);
        lVar7 = lVar1 + lVar6;
        lVar6 = (lVar6 >> 3) * 0x5555555555555555 + param_2;
        local_68 = param_1;
        local_60 = lVar1;
        local_58 = uVar2;
        local_50 = lVar7;
        if (lVar6 != 0) {
          lVar6 = lVar6 * 0x18;
          local_48 = lVar7;
          FUN_1404b9e70(lVar7,0,lVar6);
          lVar7 = lVar7 + lVar6;
        }
        local_48 = lVar7;
        thunk_FUN_14022ad28(*param_1,param_1[1],lVar1);
        local_60 = 0;
        FUN_14022ac6c(param_1,lVar1,param_2,uVar2);
        FUN_14022acde(&local_68);
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_1402128f7();
    }
    lVar1 = lVar1 * 0x18;
    local_40 = 0x14022aaf5;
    FUN_1404b9e70(lVar6,0,lVar1);
    param_1[1] = lVar6 + lVar1;
  }
  return;
}

