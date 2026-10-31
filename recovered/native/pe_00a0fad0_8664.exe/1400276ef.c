/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400276ef */

undefined8 FUN_1400276ef(undefined8 param_1)

{
  undefined8 ***pppuVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong lVar4;
  undefined8 **local_50 [2];
  ulonglong local_40;
  ulonglong local_38;
  longlong local_30 [2];
  
  local_30[1] = 0xfffffffffffffffe;
  FUN_140006874(local_50);
  pppuVar1 = local_50;
  if (0xf < local_38) {
    pppuVar1 = (undefined8 ***)local_50[0];
  }
  FUN_1400293e4(local_30,local_40 + (longlong)pppuVar1,pppuVar1);
  pppuVar1 = local_50;
  if (0xf < local_38) {
    pppuVar1 = (undefined8 ***)local_50[0];
  }
  uVar2 = (longlong)pppuVar1 + (local_40 - local_30[0]);
  uVar3 = local_40 - (local_30[0] - (longlong)pppuVar1);
  if (uVar2 <= uVar3) {
    uVar3 = uVar2;
  }
  uVar2 = local_40 - uVar3;
  FUN_140135ff0(local_30[0],uVar3 + local_30[0],(uVar2 - (local_30[0] - (longlong)pppuVar1)) + 1);
  pppuVar1 = local_50;
  if (0xf < local_38) {
    pppuVar1 = (undefined8 ***)local_50[0];
  }
  local_40 = uVar2;
  FUN_14002930a(local_30,pppuVar1,uVar2 + (longlong)pppuVar1);
  pppuVar1 = local_50;
  if (0xf < local_38) {
    pppuVar1 = (undefined8 ***)local_50[0];
  }
  uVar3 = local_30[0] - (longlong)pppuVar1;
  if (local_40 < (ulonglong)(local_30[0] - (longlong)pppuVar1)) {
    uVar3 = local_40;
  }
  lVar4 = local_40 - uVar3;
  FUN_140135ff0(pppuVar1,uVar3 + (longlong)pppuVar1,lVar4 + 1);
  local_40 = lVar4;
  FUN_140006874(param_1,local_50);
  FUN_1400017de(local_50);
  return param_1;
}

