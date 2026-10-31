/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800f6b14 */

void FUN_1800f6b14(longlong *param_1)

{
  longlong lVar1;
  undefined **local_80;
  undefined1 local_78 [16];
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined1 local_58 [16];
  undefined **local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  longlong *local_20;
  undefined8 local_18;
  
  local_18 = 0xfffffffffffffffe;
  lVar1 = *param_1;
  local_20 = param_1;
  if ((lVar1 != 0) &&
     ((((char)param_1[1] != '\x01' || (*(char *)(lVar1 + 0xb8) == '\0')) &&
      (*(int *)(lVar1 + 0xbc) == 0)))) {
    FUN_1800f7503();
    FUN_1800f75ee(&local_80);
    local_48 = std::exception::vftable;
    local_40 = 0;
    uStack_38 = 0;
    FUN_18026e9f0(local_78);
    local_48 = std::future_error::vftable;
    local_30 = local_68;
    uStack_2c = uStack_64;
    uStack_28 = uStack_60;
    uStack_24 = uStack_5c;
    FUN_1800f7721(local_58,&local_48);
    FUN_1800f7664(local_20,local_58,0);
    local_80 = std::exception::vftable;
    FUN_18026ea90(local_78);
  }
  FUN_1800f408a(local_20);
  return;
}

