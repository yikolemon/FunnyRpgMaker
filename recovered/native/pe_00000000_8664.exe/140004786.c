/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140004786 */

undefined8 FUN_140004786(char *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  undefined8 uVar2;
  undefined1 local_a8 [56];
  char *local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  char *local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  
  local_30 = 0xfffffffffffffffe;
  if (*param_1 == '\x01') {
    local_40 = 0;
    local_38 = 0x8000000000000000;
    local_50 = param_1;
    local_48 = FUN_140015f14(*(undefined8 *)(param_1 + 8),param_3);
    local_68 = 0;
    uStack_60 = 0;
    local_58 = 0x8000000000000000;
    if (*param_1 == '\x02') {
      uStack_60 = *(undefined8 *)(*(longlong *)(param_1 + 8) + 8);
    }
    else if (*param_1 == '\x01') {
      local_68 = **(undefined8 **)(param_1 + 8);
    }
    else {
      local_58 = 1;
    }
    local_70 = param_1;
    cVar1 = FUN_14000e3e0(&local_50,&local_70);
    if (cVar1 == '\0') {
      uVar2 = FUN_14000d7d0(&local_50);
      FUN_14001604a(uVar2,param_2);
    }
    else {
      FUN_14000372c(param_2,param_4);
    }
    return param_2;
  }
  local_70 = (char *)FUN_14000ea3a(param_1);
  FUN_14000e963(&local_50,"cannot use value() with ");
  FUN_14000e7f2(local_a8,0x132,&local_50,param_1);
                    /* WARNING: Subroutine does not return */
  FUN_14018f0a0(local_a8,&DAT_140ee3b30);
}

