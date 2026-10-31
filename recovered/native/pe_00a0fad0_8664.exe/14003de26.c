/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14003de26 */

void FUN_14003de26(longlong param_1,undefined8 param_2)

{
  char cVar1;
  longlong lVar2;
  undefined1 local_e8 [64];
  undefined1 local_a8 [32];
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  longlong local_68;
  longlong lStack_60;
  undefined8 local_58;
  longlong local_48;
  longlong lStack_40;
  undefined8 local_38;
  undefined8 local_28;
  
  local_28 = 0xfffffffffffffffe;
  if (*(char *)(param_1 + 0x268) < '\x04') {
    if ((*(longlong *)(param_1 + 0x240) - *(longlong *)(param_1 + 0x238) != 0x20) ||
       (*(longlong *)(param_1 + 0x1b8) != *(longlong *)(param_1 + 0x1c0))) {
      local_68 = 0;
      lStack_60 = 0;
      local_58 = 0;
      if (*(longlong *)(param_1 + 0x238) == *(longlong *)(param_1 + 0x240)) {
        if (*(longlong *)(param_1 + 0xf8) == 0) {
          FUN_14000a06a(&local_68);
        }
        else {
          FUN_140006874(&local_48,param_1 + 0xe8);
          FUN_14003a478(param_1,&local_48,&local_68);
          FUN_1400017de(&local_48);
          FUN_1400203b6(param_1,&local_68);
          local_48 = 0;
          lStack_40 = 0;
          local_38 = 0;
          FUN_140020762(param_1,&local_48,&local_68);
          if (local_48 != lStack_40) {
            FUN_14000eeca(&local_68);
            local_68 = local_48;
            lStack_60 = lStack_40;
            local_58 = local_38;
            local_48 = 0;
            lStack_40 = 0;
            local_38 = 0;
          }
          FUN_14000eeca(&local_48);
        }
      }
      else {
        FUN_14001f18e(param_1,&local_48);
        FUN_14000eeca(&local_68);
        local_68 = local_48;
        lStack_60 = lStack_40;
        local_58 = local_38;
        local_48 = 0;
        lStack_40 = 0;
        local_38 = 0;
        FUN_14000eeca(&local_48);
      }
      cVar1 = FUN_14003e141(&local_68,param_2);
      FUN_14000eeca(&local_68);
      goto joined_r0x00014003dfd9;
    }
  }
  lVar2 = param_1 + 0x250;
  if (*(longlong *)(param_1 + 0x250) == *(longlong *)(param_1 + 600)) {
    lVar2 = param_1 + 0x238;
  }
  cVar1 = FUN_14003e141(lVar2,param_2);
joined_r0x00014003dfd9:
  if (cVar1 == '\0') {
    local_88 = 0;
    uStack_80 = 0;
    local_78 = 0;
    FUN_140020d68(&local_88,*(longlong *)(param_1 + 0x240) - *(longlong *)(param_1 + 0x238) >> 5,
                  param_1 + 0x238,param_1 + 0x240);
    FUN_14001190c(param_1,local_a8,0,0);
    FUN_14003a8cc(local_e8,local_a8,&local_88);
                    /* WARNING: Subroutine does not return */
    FUN_140106270(local_e8,&DAT_14017a3a8);
  }
  return;
}

