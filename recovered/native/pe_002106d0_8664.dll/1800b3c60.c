/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800b3c60 */

longlong FUN_1800b3c60(longlong *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 local_b0;
  longlong local_a8;
  undefined1 local_a0 [40];
  longlong local_78;
  undefined1 local_70 [40];
  undefined8 *local_48;
  undefined8 *local_40;
  longlong *local_38;
  undefined8 local_30;
  
  local_30 = 0xfffffffffffffffe;
  local_78 = *param_1;
  plVar1 = param_1 + 1;
  local_48 = param_2;
  local_38 = param_1;
  FUN_1800b4806(&local_a8,&local_78,plVar1,param_1[5]);
  local_b0 = *local_48;
  puVar2 = local_48 + 1;
  FUN_1800b4806(&local_78,&local_b0,puVar2,local_48[5]);
  lVar3 = 0;
  while (local_a8 != local_78) {
    lVar3 = lVar3 + 1;
    FUN_1800b2ef4(&local_a8);
  }
  FUN_180001e4c(local_70);
  FUN_180001e4c(local_a0);
  local_40 = puVar2;
  local_38 = plVar1;
  FUN_180001e4c(plVar1);
  FUN_180001e4c(local_40);
  return lVar3;
}

