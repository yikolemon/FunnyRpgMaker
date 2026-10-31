/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800b0732 */

undefined4 * FUN_1800b0732(undefined4 *param_1,undefined4 *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 local_60 [16];
  undefined4 *local_50;
  undefined4 *local_48;
  undefined8 local_40;
  
  local_40 = 0xfffffffffffffffe;
  *param_1 = *param_2;
  local_50 = param_1 + 2;
  *(undefined8 *)(param_1 + 2) = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  lVar2 = FUN_180239630(0x38);
  *(longlong *)lVar2 = lVar2;
  *(longlong *)(lVar2 + 8) = lVar2;
  *(longlong *)(param_1 + 2) = lVar2;
  local_48 = param_1 + 6;
  *(undefined8 *)(param_1 + 6) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 10) = 0;
  *(undefined8 *)(param_1 + 0xc) = *(undefined8 *)(param_2 + 0xc);
  *(undefined8 *)(param_1 + 0xe) = *(undefined8 *)(param_2 + 0xe);
  FUN_180022e2a(param_1 + 6,*(longlong *)(param_2 + 8) - *(longlong *)(param_2 + 6) >> 3,lVar2);
  plVar1 = *(longlong **)(param_2 + 2);
  plVar3 = (longlong *)*plVar1;
  if (plVar3 != plVar1) {
    do {
      FUN_1800b085e(param_1,local_60,plVar3 + 2);
      plVar3 = (longlong *)*plVar3;
    } while (plVar3 != plVar1);
  }
  return param_1;
}

