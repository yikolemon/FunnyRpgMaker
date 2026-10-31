/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800dd190 */

undefined8 * FUN_1800dd190(char *param_1,undefined8 *param_2,undefined8 param_3,undefined8 *param_4)

{
  char cVar1;
  undefined8 uVar2;
  undefined1 local_b0 [56];
  char *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
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
    local_50 = FUN_1800dd766(*(undefined8 *)(param_1 + 8),param_3);
    local_70 = 0;
    uStack_68 = 0;
    local_60 = 0x8000000000000000;
    if (*param_1 == '\x02') {
      uStack_68 = *(undefined8 *)(*(longlong *)(param_1 + 8) + 8);
    }
    else if (*param_1 == '\x01') {
      local_70 = **(undefined8 **)(param_1 + 8);
    }
    else {
      local_60 = 1;
    }
    local_78 = param_1;
    cVar1 = FUN_18005324c(&local_58,&local_78);
    local_38 = param_2;
    if (cVar1 == '\0') {
      uVar2 = FUN_180052ed0(&local_58);
      FUN_1800136fa(param_2,uVar2);
    }
    else {
      uVar2 = param_4[1];
      *param_2 = *param_4;
      param_2[1] = uVar2;
      *(undefined1 *)param_4 = 0;
      param_4[1] = 0;
    }
    return local_38;
  }
  local_78 = (char *)FUN_1800173a0(param_1);
  FUN_1800172c9(&local_58,"cannot use value() with ");
  FUN_180017158(local_b0,0x132,&local_58,param_1);
                    /* WARNING: Subroutine does not return */
  FUN_18026d5b0(local_b0,&DAT_180391520);
}

