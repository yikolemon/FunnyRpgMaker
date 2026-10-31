/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 102725e0 */

undefined4
FUN_102725e0(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
            undefined4 param_6,undefined4 param_7)

{
  int iVar1;
  undefined4 uVar2;
  uint uStack_5c;
  undefined1 local_4c [8];
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_20;
  undefined1 *local_1c;
  void *local_14;
  undefined1 *puStack_10;
  uint local_c;
  undefined4 local_8;
  
  local_8 = 0xfffffffe;
  puStack_10 = &LAB_102592b0;
  local_14 = ExceptionList;
  local_c = DAT_10388d00 ^ 0x10382d80;
  uStack_5c = DAT_10388d00 ^ (uint)&stack0xfffffffc;
  local_1c = (undefined1 *)&uStack_5c;
  ExceptionList = &local_14;
  local_20 = param_5;
  local_40 = 0;
  local_30 = *(undefined4 *)(param_2 + -4);
  local_34 = __CreateFrameInfo(local_4c,*(undefined4 *)(param_1 + 0x18));
  iVar1 = FUN_10272260();
  local_38 = *(undefined4 *)(iVar1 + 0x10);
  iVar1 = FUN_10272260();
  local_3c = *(undefined4 *)(iVar1 + 0x14);
  iVar1 = FUN_10272260();
  *(int *)(iVar1 + 0x10) = param_1;
  iVar1 = FUN_10272260();
  *(undefined4 *)(iVar1 + 0x14) = param_3;
  local_44 = 1;
  local_8 = 1;
  uVar2 = FUN_10258ae0(param_2,param_4,param_5,param_6,param_7);
  local_8 = 0xfffffffe;
  local_44 = 0;
  local_20 = uVar2;
  FUN_1027276a();
  ExceptionList = local_14;
  return uVar2;
}

