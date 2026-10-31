/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800da9be */

undefined8 FUN_1800da9be(char *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
    local_48 = FUN_1800dca3c(*(undefined8 *)(param_1 + 8),param_3);
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
    cVar1 = FUN_18005324c(&local_50,&local_70);
    if (cVar1 == '\0') {
      uVar2 = FUN_180052ed0(&local_50);
      FUN_180017024(uVar2,param_2);
    }
    else {
      FUN_180001e92(param_2,param_4);
    }
    return param_2;
  }
  local_70 = (char *)FUN_1800173a0(param_1);
  FUN_1800172c9(&local_50,"cannot use value() with ");
  FUN_180017158(local_a8,0x132,&local_50,param_1);
                    /* WARNING: Subroutine does not return */
  FUN_18026d5b0(local_a8,&DAT_180391520);
}

