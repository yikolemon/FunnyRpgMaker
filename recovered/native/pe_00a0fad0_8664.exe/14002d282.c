/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14002d282 */

void FUN_14002d282(longlong *param_1,ulonglong *param_2)

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
  if (*param_2 >> 0x3a != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1400062c7();
  }
  lVar1 = param_1[1];
  lVar2 = *param_1;
  lVar4 = FUN_140006280(*param_2 << 6);
  uVar5 = *param_2;
  lVar7 = *param_1;
  lVar3 = param_1[1];
  lVar6 = lVar4;
  local_60 = param_1;
  local_58 = lVar4;
  local_50 = uVar5;
  if (lVar7 != lVar3) {
    do {
      FUN_14002d44e(lVar6,lVar7);
      lVar7 = lVar7 + 0x40;
      lVar6 = lVar6 + 0x40;
    } while (lVar7 != lVar3);
    uVar5 = *param_2;
  }
  local_58 = 0;
  FUN_14002d374(param_1,lVar4,lVar1 - lVar2 >> 6,uVar5);
  FUN_14002d40c(&local_60);
  return;
}

