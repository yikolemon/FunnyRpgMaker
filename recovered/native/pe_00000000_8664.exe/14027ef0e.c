/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14027ef0e */

undefined8 * FUN_14027ef0e(undefined8 *param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined *puVar1;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 *local_30;
  undefined8 *local_28;
  undefined8 *local_20;
  undefined8 *local_18;
  undefined8 local_10;
  
  local_10 = 0xfffffffffffffffe;
  local_48 = *param_3;
  uStack_44 = param_3[1];
  uStack_40 = param_3[2];
  uStack_3c = param_3[3];
  local_18 = param_1;
  FUN_140214190(local_48,&local_48,param_2);
  *local_18 = &DAT_1404bd7f8;
  local_30 = local_18 + 5;
  FUN_140214244();
  local_28 = local_18 + 9;
  FUN_140214244();
  local_20 = local_18 + 0xd;
  puVar1 = &DAT_140577346;
  if ((undefined *)local_18[1] != (undefined *)0x0) {
    puVar1 = (undefined *)local_18[1];
  }
  FUN_140213362(local_20,puVar1);
  return local_18;
}

