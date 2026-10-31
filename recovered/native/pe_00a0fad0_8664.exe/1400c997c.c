/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400c997c */

void FUN_1400c997c(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined1 *puVar5;
  undefined4 local_80 [2];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 local_60;
  
  local_60 = 0xfffffffffffffffe;
  lVar1 = param_2 + 0x58;
  FUN_14009e652(lVar1,param_1 + 4);
  FUN_1400a0a20(param_2,param_1 + 8);
  FUN_14008cb80(lVar1,param_1 + 0x28);
  FUN_14008cb80(lVar1,param_1 + 0x29);
  FUN_14008cb80(lVar1,param_1 + 0x2a);
  FUN_14008cb80(lVar1,param_1 + 0x2b);
  local_80[0] = 0xffffffff;
  FUN_14009e716(lVar1,param_1 + 0x30,local_80);
  local_80[0] = 0xffffffff;
  FUN_14009e716(lVar1,param_1 + 0x48,local_80);
  FUN_14008cb80(lVar1,param_1 + 0x60);
  FUN_14008cb80(lVar1,param_1 + 0x61);
  local_80[0] = (undefined4)
                ((ulonglong)(*(longlong *)(param_1 + 0x70) - *(longlong *)(param_1 + 0x68)) >> 5);
  FUN_14009e652(lVar1,local_80);
  puVar2 = *(undefined1 **)(param_1 + 0x70);
  for (puVar5 = *(undefined1 **)(param_1 + 0x68); puVar5 != puVar2; puVar5 = puVar5 + 0x20) {
    local_80[0]._1_3_ = (undefined3)((uint)local_80[0] >> 8);
    local_80[0] = CONCAT31(local_80[0]._1_3_,*puVar5);
    local_78 = 0;
    uStack_70 = 0;
    local_68 = 0;
    FUN_14009db1a(&local_78,*(longlong *)(puVar5 + 0x10) - *(longlong *)(puVar5 + 8) >> 2,puVar5 + 8
                  ,puVar5 + 0x10);
    FUN_14009e59a(local_80,param_2);
    FUN_140016e5c(&local_78);
  }
  local_80[0] = (undefined4)
                ((ulonglong)(*(longlong *)(param_1 + 0x88) - *(longlong *)(param_1 + 0x80)) >> 4);
  FUN_14009e652(lVar1);
  puVar3 = *(undefined8 **)(param_1 + 0x88);
  for (puVar4 = *(undefined8 **)(param_1 + 0x80); puVar4 != puVar3; puVar4 = puVar4 + 2) {
    FUN_1400a0ce6(*puVar4,param_2);
  }
  FUN_14009e652(lVar1,param_1 + 0x98);
  FUN_14008cb80(lVar1,param_1 + 0x9c);
  FUN_14008cb80(lVar1,param_1 + 0x9d);
  FUN_14008cb80(lVar1,param_1 + 0x9e);
  if (3 < *(uint *)(param_1 + 0x98)) {
    FUN_14008cb80(lVar1,param_1 + 0x9f);
  }
  local_80[0] = CONCAT31(local_80[0]._1_3_,0x7a);
  FUN_14008cb80(lVar1);
  return;
}

