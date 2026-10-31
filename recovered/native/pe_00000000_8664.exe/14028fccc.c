/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14028fccc */

undefined8 *
FUN_14028fccc(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined4 *param_5)

{
  char *local_78;
  size_t local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 *local_50;
  undefined8 *local_48;
  undefined8 *local_40;
  undefined8 *local_38;
  undefined8 local_30;
  
  local_30 = 0xfffffffffffffffe;
  local_68 = *param_5;
  uStack_64 = param_5[1];
  uStack_60 = param_5[2];
  uStack_5c = param_5[3];
  local_38 = param_1;
  FUN_140214190(local_68,&local_68,param_2);
  *local_38 = &DAT_1404bd7f8;
  local_50 = local_38 + 5;
  FUN_1402141fc(local_50,param_3);
  local_48 = local_38 + 9;
  FUN_1402141fc(local_48,param_4);
  local_40 = local_38 + 0xd;
  local_78 = "nel";
  if ((char *)local_38[1] != (char *)0x0) {
    local_78 = (char *)local_38[1];
  }
  local_70 = strlen(local_78);
  FUN_14021429a(local_40,&local_78,param_3,param_4);
  return local_38;
}

