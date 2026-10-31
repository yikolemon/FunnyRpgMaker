/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100d9294 */

undefined4 * __thiscall
FUN_100d9294(char *param_1,undefined4 *param_2,undefined4 param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  char cVar3;
  undefined4 uVar4;
  undefined1 local_64 [28];
  char *local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  char *local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = local_64;
  local_14 = 0xffffffff;
  local_18 = &LAB_100ddfd0;
  local_1c = ExceptionList;
  ExceptionList = &local_1c;
  if (*param_1 == '\x01') {
    local_40 = 0;
    local_44 = 0;
    local_3c = 0x80000000;
    local_48 = param_1;
    local_20 = local_64;
    local_44 = FUN_100d98a2(param_3);
    local_28 = 0;
    local_2c = 0;
    local_24 = 0x80000000;
    if (*param_1 == '\x02') {
      local_28 = *(undefined4 *)(*(int *)(param_1 + 8) + 4);
    }
    else if (*param_1 == '\x01') {
      local_2c = **(undefined4 **)(param_1 + 8);
    }
    else {
      local_24 = 1;
    }
    local_30 = param_1;
    cVar3 = FUN_10051c02(&local_30);
    if (cVar3 == '\0') {
      uVar4 = FUN_1005189a();
      FUN_10013db4(uVar4);
    }
    else {
      uVar4 = param_4[1];
      uVar1 = param_4[2];
      uVar2 = param_4[3];
      *param_2 = *param_4;
      param_2[1] = uVar4;
      param_2[2] = uVar1;
      param_2[3] = uVar2;
      *(undefined1 *)param_4 = 0;
      param_4[3] = 0;
      param_4[2] = 0;
    }
    ExceptionList = local_1c;
    return param_2;
  }
  local_30 = (char *)FUN_1001776c();
  FUN_10017682(&local_48,"cannot use value() with ",&local_30);
  local_14 = 1;
  FUN_10017546(local_64,0x132,&local_48,param_1);
                    /* WARNING: Subroutine does not return */
  FUN_102586e0(local_64,&DAT_1036074c);
}

