/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14009dcc2 */

longlong FUN_14009dcc2(longlong *param_1,longlong param_2,undefined8 param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong lVar8;
  longlong *local_80;
  longlong local_78;
  ulonglong local_70;
  longlong local_68;
  longlong local_60;
  longlong *local_58;
  longlong local_50;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  lVar5 = *param_1;
  uVar4 = (param_1[1] - lVar5 >> 5) + 1;
  uVar2 = param_1[2] - lVar5 >> 5;
  uVar7 = (uVar2 >> 1) + uVar2;
  if (uVar7 <= uVar4) {
    uVar7 = uVar4;
  }
  if (0x7ffffffffffffff - (uVar2 >> 1) < uVar2) {
    uVar7 = 0x7ffffffffffffff;
  }
  local_50 = param_3;
  if (uVar7 >> 0x3b != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1400062c7();
  }
  lVar1 = FUN_140006280(uVar7 << 5);
  lVar6 = lVar1 + (param_2 - lVar5) + 0x20;
  lVar8 = (param_2 - lVar5) + lVar1;
  local_80 = param_1;
  local_78 = lVar1;
  local_70 = uVar7;
  local_68 = lVar6;
  local_60 = lVar6;
  local_58 = param_1;
  FUN_14009de80(lVar8,local_50);
  lVar5 = *local_58;
  lVar3 = local_58[1];
  local_68 = lVar8;
  local_50 = lVar1;
  if (param_2 == lVar3) {
    for (; lVar5 != param_2; lVar5 = lVar5 + 0x20) {
      FUN_14009e006(lVar1,lVar5);
      lVar1 = lVar1 + 0x20;
    }
  }
  else {
    if (lVar5 != param_2) {
      do {
        FUN_14009e006(lVar1,lVar5);
        lVar1 = lVar1 + 0x20;
        lVar5 = lVar5 + 0x20;
      } while (lVar5 != param_2);
      lVar3 = local_58[1];
      lVar1 = local_50;
    }
    for (; local_68 = lVar1, param_2 != lVar3; param_2 = param_2 + 0x20) {
      FUN_14009e006(lVar6,param_2);
      lVar6 = lVar6 + 0x20;
      lVar1 = local_68;
    }
  }
  local_78 = 0;
  FUN_14009defa(local_58,local_50,uVar4,uVar7);
  FUN_14009df92(&local_80);
  return lVar8;
}

