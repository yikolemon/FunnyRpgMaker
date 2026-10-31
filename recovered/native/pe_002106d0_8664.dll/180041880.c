/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180041880 */

void FUN_180041880(longlong param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined1 local_c0 [64];
  undefined1 local_80 [32];
  undefined1 local_60 [32];
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  
  local_28 = 0xfffffffffffffffe;
  local_38 = *(undefined8 *)(param_1 + 0x18);
  FUN_180044980();
  local_30 = FUN_180239630(0xd8);
  FUN_1800231c2(local_c0);
  FUN_180001e92(local_80,"\r\n");
  FUN_180003216(local_60,param_2);
  FUN_180035102(local_30,local_60,0,local_80,local_c0);
  local_40 = local_30;
  puVar1 = *(undefined8 **)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = local_30;
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  local_40 = 0;
  FUN_18023d6e0(local_38);
  return;
}

