/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1008c23a */

undefined4 * __thiscall
FUN_1008c23a(undefined4 *param_1,int param_2,int param_3,char param_4,char param_5)

{
  byte bVar1;
  undefined4 uVar2;
  undefined4 *local_78;
  undefined4 *local_74;
  undefined1 local_70;
  int local_6c;
  int local_68 [2];
  int *local_60;
  int local_4c [2];
  undefined1 local_44 [28];
  undefined1 *local_28;
  undefined1 *local_24;
  void *local_20;
  undefined1 *local_1c;
  undefined4 local_18;
  
  local_28 = &stack0xfffffffc;
  local_24 = (undefined1 *)&local_78;
  local_1c = &LAB_100c3690;
  local_20 = ExceptionList;
  local_74 = param_1 + 2;
  ExceptionList = &local_20;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  local_18 = 0;
  local_78 = param_1;
  bVar1 = FUN_1008c400(param_2,param_3,local_70);
  if (param_4 == '\0') {
    if (param_5 == '\x01' && bVar1 == 0) {
      FUN_10001f66("cannot create object from initializer list");
      local_18 = 2;
      FUN_10017546(local_44,0x12d,local_68,0);
                    /* WARNING: Subroutine does not return */
      FUN_102586e0(local_44,&DAT_1036074c);
    }
    bVar1 = bVar1 & param_5 != '\x02';
  }
  if (bVar1 == 0) {
    *(undefined1 *)local_78 = 2;
    local_68[0] = param_3;
    local_4c[0] = param_2;
    uVar2 = FUN_1008c4e4(local_4c,local_68);
    *local_74 = uVar2;
  }
  else {
    *(undefined1 *)local_78 = 1;
    uVar2 = FUN_10080f6c();
    *local_74 = uVar2;
    while (param_2 != param_3) {
      local_18 = 0;
      local_6c = param_2;
      FUN_1008c44a(local_68);
      local_18 = 1;
      FUN_100879de(local_4c,*(undefined4 *)(*local_60 + 8),*local_60 + 0x10);
      local_18 = 0xffffffff;
      FUN_1007f222();
      param_2 = local_6c + 0x18;
    }
  }
  ExceptionList = local_20;
  return local_78;
}

