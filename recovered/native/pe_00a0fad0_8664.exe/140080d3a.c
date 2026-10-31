/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140080d3a */

undefined8 FUN_140080d3a(longlong param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 ***pppuVar2;
  undefined1 local_60 [32];
  undefined8 **local_40 [2];
  undefined8 local_30;
  ulonglong local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  local_18 = 0xfffffffffffffffe;
  local_20 = param_2;
  FUN_140055cae(param_2,param_1,&DAT_140173c42);
  if (*(char *)(param_1 + 0xa2) == '\x01') {
    FUN_1400ae753(local_60);
    FUN_140052f9e(local_40,local_60,&DAT_140173c42);
    pppuVar2 = local_40;
    if (7 < local_28) {
      pppuVar2 = (undefined8 ***)local_40[0];
    }
    FUN_140008bae(local_20,pppuVar2,local_30);
    FUN_140005242(local_40);
    FUN_140005242(local_60);
  }
  puVar1 = DAT_1401cc698;
  if (DAT_1401cc6b0 < 8) {
    puVar1 = &DAT_1401cc698;
  }
  FUN_140008bae(local_20,puVar1,DAT_1401cc6a8);
  return local_20;
}

