/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400374ce */

void FUN_1400374ce(longlong param_1,undefined8 param_2)

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
  FUN_1400378a0();
  local_30 = FUN_1401887b0(0xd8);
  FUN_14001863a(local_c0);
  FUN_1400027d2(local_80,"\r\n");
  FUN_14000372c(local_60,param_2);
  FUN_14002ac86(local_30,local_60,0,local_80,local_c0);
  local_40 = local_30;
  puVar1 = *(undefined8 **)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = local_30;
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  local_40 = 0;
  FUN_14018a340(local_38);
  return;
}

