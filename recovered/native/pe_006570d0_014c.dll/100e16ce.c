/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100e16ce */

float10 __thiscall FUN_100e16ce(char *param_1,undefined4 param_2,float *param_3)

{
  char cVar1;
  undefined4 uVar2;
  int *unaff_FS_OFFSET;
  undefined1 local_68 [28];
  char *local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  char *local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined1 *local_20;
  int local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = local_68;
  local_14 = 0xffffffff;
  local_18 = &LAB_100ea950;
  local_1c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_1c;
  if (*param_1 == '\x01') {
    local_44 = 0;
    local_48 = 0;
    local_40 = 0x80000000;
    local_4c = param_1;
    local_20 = local_68;
    local_48 = FUN_100d8aac(param_2);
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
    cVar1 = FUN_10051c02(&local_30);
    if (cVar1 == '\0') {
      uVar2 = FUN_1005189a();
      local_30 = (char *)0x0;
      FUN_100e1fe0(uVar2,&local_30);
    }
    else {
      local_30 = (char *)*param_3;
    }
    *unaff_FS_OFFSET = local_1c;
    return (float10)(float)local_30;
  }
  local_30 = (char *)FUN_1001776c();
  FUN_10017682(&local_4c,"cannot use value() with ",&local_30);
  local_14 = 0;
  FUN_10017546(local_68,0x132,&local_4c,param_1);
                    /* WARNING: Subroutine does not return */
  FUN_102586e0(local_68,&DAT_1036074c);
}

