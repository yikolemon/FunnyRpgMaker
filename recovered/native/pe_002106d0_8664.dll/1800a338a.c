/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800a338a */

void FUN_1800a338a(longlong *param_1,ulonglong param_2)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *local_70;
  longlong local_68;
  ulonglong local_60;
  longlong local_58;
  longlong local_50;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  if (0x2e8ba2e8ba2e8ba < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_18001620a();
  }
  uVar4 = (param_1[2] - *param_1 >> 3) * 0x2e8ba2e8ba2e8ba3;
  uVar5 = 0x2e8ba2e8ba2e8ba - (uVar4 >> 1);
  uVar3 = (uVar4 >> 1) + uVar4;
  if (uVar3 <= param_2) {
    uVar3 = param_2;
  }
  if (uVar5 <= uVar4 && uVar4 - uVar5 != 0) {
    uVar3 = 0x2e8ba2e8ba2e8ba;
  }
  if (uVar3 < 0x2e8ba2e8ba2e8bb) {
    lVar7 = param_1[1] - *param_1;
    lVar2 = FUN_1800013e0(uVar3 * 0x58);
    local_58 = lVar2 + lVar7;
    local_70 = param_1;
    local_68 = lVar2;
    local_60 = uVar3;
    local_50 = local_58;
    local_50 = FUN_1800a34f8(local_58,(lVar7 >> 3) * -0x2e8ba2e8ba2e8ba3 + param_2,param_1);
    lVar1 = param_1[1];
    lVar6 = lVar2;
    for (lVar7 = *param_1; lVar7 != lVar1; lVar7 = lVar7 + 0x58) {
      FUN_1800a2bed(lVar6,lVar7);
      lVar6 = lVar6 + 0x58;
    }
    local_68 = 0;
    FUN_1800a2ae4(param_1,lVar2,param_2,uVar3);
    FUN_1800a2b7c(&local_70);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_180001427();
}

