/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1402b47be */

void FUN_1402b47be(longlong *param_1,ulonglong param_2)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong *local_70;
  longlong local_68;
  ulonglong local_60;
  longlong local_58;
  longlong local_50;
  undefined8 local_48;
  
  lVar7 = *param_1;
  lVar1 = param_1[1];
  lVar5 = lVar1 - lVar7 >> 3;
  lVar2 = param_2 + lVar5 * -0x2e8ba2e8ba2e8ba3;
  if (param_2 < (ulonglong)(lVar5 * 0x2e8ba2e8ba2e8ba3)) {
    lVar7 = lVar7 + param_2 * 0x58;
    for (lVar2 = lVar7; lVar2 != lVar1; lVar2 = lVar2 + 0x58) {
      local_50 = 0x1402b4808;
      FUN_1402b1485(lVar2);
    }
    param_1[1] = lVar7;
  }
  else if (lVar2 != 0) {
    if ((ulonglong)((param_1[2] - lVar7 >> 3) * 0x2e8ba2e8ba2e8ba3) < param_2) {
      local_48 = 0xfffffffffffffffe;
      if (0x2e8ba2e8ba2e8ba < param_2) {
                    /* WARNING: Subroutine does not return */
        FUN_1402276da();
      }
      uVar4 = (param_1[2] - *param_1 >> 3) * 0x2e8ba2e8ba2e8ba3;
      uVar6 = 0x2e8ba2e8ba2e8ba - (uVar4 >> 1);
      uVar3 = (uVar4 >> 1) + uVar4;
      if (uVar3 <= param_2) {
        uVar3 = param_2;
      }
      if (uVar6 <= uVar4 && uVar4 - uVar6 != 0) {
        uVar3 = 0x2e8ba2e8ba2e8ba;
      }
      if (uVar3 < 0x2e8ba2e8ba2e8bb) {
        lVar7 = param_1[1] - *param_1;
        lVar5 = FUN_1402128b0(uVar3 * 0x58);
        local_58 = lVar5 + lVar7;
        local_70 = param_1;
        local_68 = lVar5;
        local_60 = uVar3;
        local_50 = local_58;
        local_50 = FUN_1402b49c8(local_58,(lVar7 >> 3) * -0x2e8ba2e8ba2e8ba3 + param_2,param_1);
        lVar1 = param_1[1];
        lVar2 = lVar5;
        for (lVar7 = *param_1; lVar7 != lVar1; lVar7 = lVar7 + 0x58) {
          FUN_1402b40bd(lVar2,lVar7);
          lVar2 = lVar2 + 0x58;
        }
        local_68 = 0;
        FUN_1402b3fb4(param_1,lVar5,param_2,uVar3);
        FUN_1402b404c(&local_70);
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_1402128f7();
    }
    local_50 = 0x1402b484c;
    lVar7 = FUN_1402b49c8(lVar1,lVar2,param_1);
    param_1[1] = lVar7;
  }
  return;
}

