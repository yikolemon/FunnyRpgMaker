/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400048dc */

char * FUN_1400048dc(char *param_1,undefined8 param_2,undefined8 *param_3)

{
  char cVar1;
  undefined8 uVar2;
  undefined1 local_a0 [56];
  char *local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 local_28;
  
  local_28 = 0xfffffffffffffffe;
  if (*param_1 == '\x01') {
    local_58 = 0;
    local_50 = 0x8000000000000000;
    local_68 = param_1;
    local_60 = FUN_140015f14(*(undefined8 *)(param_1 + 8));
    local_40 = 0;
    uStack_38 = 0;
    local_30 = 0x8000000000000000;
    if (*param_1 == '\x02') {
      uStack_38 = *(undefined8 *)(*(longlong *)(param_1 + 8) + 8);
    }
    else if (*param_1 == '\x01') {
      local_40 = **(undefined8 **)(param_1 + 8);
    }
    else {
      local_30 = 1;
    }
    local_48 = param_1;
    cVar1 = FUN_14000e3e0(&local_68,&local_48);
    if (cVar1 == '\0') {
      uVar2 = FUN_14000d7d0(&local_68);
      local_48 = (char *)0x0;
      FUN_14001629f(uVar2,&local_48);
    }
    else {
      local_48 = (char *)*param_3;
    }
    return local_48;
  }
  local_48 = (char *)FUN_14000ea3a(param_1);
  FUN_14000e963(&local_68,"cannot use value() with ");
  FUN_14000e7f2(local_a0,0x132,&local_68,param_1);
                    /* WARNING: Subroutine does not return */
  FUN_14018f0a0(local_a0,&DAT_140ee3b30);
}

