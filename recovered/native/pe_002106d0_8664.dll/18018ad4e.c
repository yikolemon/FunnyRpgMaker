/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18018ad4e */

void FUN_18018ad4e(longlong *param_1,ulonglong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *local_60;
  longlong local_58;
  ulonglong local_50;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  if (0x666666666666666 < *param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_180001427();
  }
  lVar1 = param_1[1];
  lVar2 = *param_1;
  lVar4 = FUN_1800013e0(*param_2 * 0x28);
  uVar5 = *param_2;
  lVar7 = *param_1;
  lVar3 = param_1[1];
  lVar6 = lVar4;
  local_60 = param_1;
  local_58 = lVar4;
  local_50 = uVar5;
  if (lVar7 != lVar3) {
    do {
      FUN_18018af37(lVar6,lVar7);
      lVar7 = lVar7 + 0x28;
      lVar6 = lVar6 + 0x28;
    } while (lVar7 != lVar3);
    uVar5 = *param_2;
  }
  local_58 = 0;
  FUN_18018ae58(param_1,lVar4,(lVar1 - lVar2 >> 3) * -0x3333333333333333,uVar5);
  FUN_18018aef2(&local_60);
  return;
}

