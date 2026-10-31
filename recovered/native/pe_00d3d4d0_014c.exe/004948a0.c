/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 004948a0 */

undefined4 __cdecl
FUN_004948a0(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
            int param_6,int param_7)

{
  PVOID pvVar1;
  undefined4 uVar2;
  uint uStack_5c;
  undefined4 local_4c [2];
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 *local_34;
  undefined4 local_30;
  undefined4 local_20;
  undefined1 *local_1c;
  void *local_14;
  undefined1 *puStack_10;
  uint local_c;
  undefined4 local_8;
  
  local_8 = 0xfffffffe;
  puStack_10 = &LAB_004858c0;
  local_14 = ExceptionList;
  local_c = DAT_0050e8c0 ^ 0x50cfb0;
  uStack_5c = DAT_0050e8c0 ^ (uint)&stack0xfffffffc;
  local_1c = (undefined1 *)&uStack_5c;
  ExceptionList = &local_14;
  local_20 = param_5;
  local_40 = 0;
  local_30 = *(undefined4 *)(param_2 + -4);
  local_34 = __CreateFrameInfo(local_4c,*(undefined4 *)(param_1 + 0x18));
  pvVar1 = FUN_00494580();
  local_38 = *(undefined4 *)((int)pvVar1 + 0x10);
  pvVar1 = FUN_00494580();
  local_3c = *(undefined4 *)((int)pvVar1 + 0x14);
  pvVar1 = FUN_00494580();
  *(int *)((int)pvVar1 + 0x10) = param_1;
  pvVar1 = FUN_00494580();
  *(undefined4 *)((int)pvVar1 + 0x14) = param_3;
  local_44 = 1;
  local_8 = 1;
  uVar2 = FUN_004851a0(param_2,param_4,param_5,param_6,param_7);
  local_8 = 0xfffffffe;
  local_44 = 0;
  local_20 = uVar2;
  FUN_00494a2a();
  ExceptionList = local_14;
  return uVar2;
}

