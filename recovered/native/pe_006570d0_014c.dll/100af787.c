/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100af787 */

undefined4 FUN_100af787(undefined4 param_1,int param_2)

{
  undefined4 ***pppuVar1;
  int iVar2;
  int *unaff_FS_OFFSET;
  undefined4 in_stack_00000024;
  int in_stack_00000028;
  undefined4 in_stack_00000044;
  int in_stack_00000048;
  undefined4 in_stack_00000064;
  undefined4 in_stack_00000068;
  undefined4 in_stack_00000084;
  int local_b8 [8];
  int local_98 [8];
  undefined4 local_78;
  int local_74 [8];
  int local_54;
  undefined4 **local_50 [4];
  undefined4 local_40;
  uint local_3c;
  undefined4 local_34;
  undefined1 *local_30;
  undefined1 *local_2c;
  undefined1 *local_28;
  undefined1 *local_24;
  undefined1 *local_20;
  int local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)local_b8;
  local_18 = &LAB_100c4730;
  local_1c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_1c;
  local_34 = param_1;
  local_14 = 0xb;
  local_b8[0] = param_2;
  local_30 = &stack0x0000000c;
  FUN_100afbd4(local_b8,local_30,in_stack_00000024);
  local_14 = 0xc;
  local_54 = in_stack_00000028;
  local_2c = &stack0x0000002c;
  FUN_100afbd4(&local_54,local_2c,in_stack_00000044);
  local_14 = 0xd;
  local_98[0] = in_stack_00000048;
  local_28 = &stack0x0000004c;
  FUN_100afbd4(local_98,local_28,in_stack_00000064);
  local_14 = 0xe;
  local_78 = in_stack_00000068;
  local_24 = &stack0x0000006c;
  FUN_100afbd4(&local_78,local_24,in_stack_00000084);
  local_14 = 0xf;
  while ((local_74[0] != local_b8[0] && (local_54 != local_98[0]))) {
    pppuVar1 = local_50;
    if (7 < local_3c) {
      pppuVar1 = (undefined4 ***)local_50[0];
    }
    iVar2 = FUN_1006d1a8(pppuVar1,local_40);
    if (iVar2 != 0) break;
    FUN_100ae432();
    FUN_100ae432();
  }
  FUN_100afc58(&local_54);
  FUN_100afc58(local_74);
  FUN_100afb32(&param_2,&stack0x00000048);
  local_14 = 0xffffffff;
  FUN_10001f04();
  local_14 = 0xffffffff;
  FUN_10001f04();
  local_14 = 0xffffffff;
  FUN_10001f04();
  local_14 = 0xffffffff;
  FUN_10001f04();
  local_14 = 0xffffffff;
  FUN_10001f04();
  local_14 = 0xffffffff;
  FUN_10001f04();
  local_14 = 0xffffffff;
  FUN_10001f04();
  local_14 = 0xffffffff;
  FUN_10001f04();
  *unaff_FS_OFFSET = local_1c;
  return param_1;
}

