/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801c7888 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_1801c7888(undefined8 param_1)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  undefined1 auStack_108 [32];
  undefined8 *local_e8;
  undefined4 local_e0;
  undefined4 local_d8;
  undefined4 *local_d0;
  undefined8 *local_c8;
  undefined8 *local_c0;
  undefined1 *local_b8;
  undefined8 *local_b0;
  longlong *local_a8;
  undefined1 local_9c [4];
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_180402640 ^ (ulonglong)auStack_108;
  local_78 = 0;
  uStack_6c = 0;
  local_88 = 0x1c;
  local_98 = _DAT_1803294e0;
  uStack_94 = _UNK_1803294e4;
  uStack_90 = _UNK_1803294e8;
  uStack_8c = _UNK_1803294ec;
  local_58 = 2;
  uStack_74 = 0x20;
  uStack_70 = 2;
  uStack_80 = 0x100000000;
  uStack_60 = 1;
  local_50 = 0xa0000000b000;
  local_b0 = &DAT_180420d30;
  local_c0 = &DAT_180420d28;
  local_c8 = &DAT_180420d38;
  local_e0 = 2;
  local_d8 = 7;
  local_e8 = &local_50;
  local_d0 = &local_98;
  local_b8 = local_9c;
  local_68 = param_1;
  iVar2 = D3D11CreateDeviceAndSwapChain(0,1,0,0);
  if (iVar2 == -0x7785fffc) {
    local_b0 = &DAT_180420d30;
    local_c0 = &DAT_180420d28;
    local_c8 = &DAT_180420d38;
    local_d8 = 7;
    local_e0 = 2;
    local_e8 = &local_50;
    local_d0 = &local_98;
    local_b8 = local_9c;
    iVar2 = D3D11CreateDeviceAndSwapChain(0,5,0,0);
  }
  plVar1 = DAT_180420d38;
  if (iVar2 == 0) {
    uVar4 = FUN_1800188ac(&local_a8);
    iVar3 = (**(code **)(*plVar1 + 0x30))(plVar1,&DAT_1803294f0,uVar4);
    if (-1 < iVar3) {
      (**(code **)(*local_a8 + 0x40))(local_a8,param_1,2);
      (**(code **)(*local_a8 + 0x10))();
    }
  }
  if (DAT_180402640 == (local_48 ^ (ulonglong)auStack_108)) {
    return iVar2 == 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_48 ^ (ulonglong)auStack_108);
}

