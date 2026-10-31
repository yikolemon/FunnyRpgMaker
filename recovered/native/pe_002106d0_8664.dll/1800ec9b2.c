/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800ec9b2 */

undefined8 * FUN_1800ec9b2(char *param_1,undefined8 *param_2,undefined8 param_3,longlong *param_4)

{
  char cVar1;
  undefined8 uVar2;
  undefined1 local_b8 [56];
  char *local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 *local_60;
  char *local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 *local_38;
  undefined8 local_30;
  
  local_30 = 0xfffffffffffffffe;
  if (*param_1 == '\x01') {
    local_48 = 0;
    local_40 = 0x8000000000000000;
    local_58 = param_1;
    local_50 = FUN_1800dca3c(*(undefined8 *)(param_1 + 8),param_3);
    local_78 = 0;
    uStack_70 = 0;
    local_68 = 0x8000000000000000;
    if (*param_1 == '\x02') {
      uStack_70 = *(undefined8 *)(*(longlong *)(param_1 + 8) + 8);
    }
    else if (*param_1 == '\x01') {
      local_78 = **(undefined8 **)(param_1 + 8);
    }
    else {
      local_68 = 1;
    }
    local_80 = param_1;
    cVar1 = FUN_18005324c(&local_58,&local_80);
    local_38 = param_2;
    if (cVar1 == '\0') {
      uVar2 = FUN_180052ed0(&local_58);
      FUN_1800ecba8(uVar2,param_2);
    }
    else {
      *param_2 = 0;
      param_2[1] = 0;
      param_2[2] = 0;
      FUN_1800b037c(param_2,(param_4[1] - *param_4 >> 4) * -0x3333333333333333,param_4,param_4 + 1);
      local_60 = local_38 + 3;
      FUN_1800b0332(local_60,param_4 + 3);
    }
    return local_38;
  }
  local_80 = (char *)FUN_1800173a0(param_1);
  FUN_1800172c9(&local_58,"cannot use value() with ");
  FUN_180017158(local_b8,0x132,&local_58,param_1);
                    /* WARNING: Subroutine does not return */
  FUN_18026d5b0(local_b8,&DAT_180391520);
}

