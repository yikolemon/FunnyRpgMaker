/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100d8c68 */

undefined8 __thiscall FUN_100d8c68(char *param_1,undefined4 param_2,undefined4 *param_3)

{
  char cVar1;
  undefined4 uVar2;
  char *local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  char *local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined1 local_44 [28];
  undefined1 *local_28;
  undefined1 *local_24;
  void *local_20;
  undefined1 *local_1c;
  undefined4 local_18;
  
  local_28 = &stack0xfffffffc;
  local_24 = (undefined1 *)&local_70;
  local_18 = 0xffffffff;
  local_1c = &LAB_100ddfb0;
  local_20 = ExceptionList;
  ExceptionList = &local_20;
  if (*param_1 == '\x01') {
    local_54 = 0;
    local_58 = 0;
    local_50 = 0x80000000;
    local_5c = param_1;
    local_28 = &stack0xfffffffc;
    local_24 = (undefined1 *)&local_70;
    local_58 = FUN_100627c2(param_2);
    local_68 = 0;
    local_6c = 0;
    local_64 = 0x80000000;
    if (*param_1 == '\x02') {
      local_68 = *(undefined4 *)(*(int *)(param_1 + 8) + 4);
    }
    else if (*param_1 == '\x01') {
      local_6c = **(undefined4 **)(param_1 + 8);
    }
    else {
      local_64 = 1;
    }
    local_70 = param_1;
    cVar1 = FUN_10051c02(&local_70);
    if (cVar1 == '\0') {
      uVar2 = FUN_1005189a();
      local_6c = 0;
      local_70 = (char *)0x0;
      FUN_100d8b63(uVar2,&local_70);
    }
    else {
      local_70 = (char *)*param_3;
      local_6c = param_3[1];
    }
    ExceptionList = local_20;
    return CONCAT44(local_6c,local_70);
  }
  local_70 = (char *)FUN_1001776c();
  FUN_10017682(&local_5c,"cannot use value() with ",&local_70);
  local_18 = 0;
  FUN_10017546(local_44,0x132,&local_5c,param_1);
                    /* WARNING: Subroutine does not return */
  FUN_102586e0(local_44,&DAT_1036074c);
}

