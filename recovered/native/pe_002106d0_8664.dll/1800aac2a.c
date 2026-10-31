/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800aac2a */

void FUN_1800aac2a(longlong param_1,longlong param_2)

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
  FUN_18008ca8a(lVar1,param_1 + 4);
  FUN_18008c5f2(param_2,param_1 + 8);
  FUN_18007f392(lVar1,param_1 + 0x28);
  FUN_18007f392(lVar1,param_1 + 0x29);
  FUN_18007f392(lVar1,param_1 + 0x2a);
  FUN_18007f392(lVar1,param_1 + 0x2b);
  local_80[0] = 0xffffffff;
  FUN_18008cdc4(lVar1,param_1 + 0x30,local_80);
  local_80[0] = 0xffffffff;
  FUN_18008cdc4(lVar1,param_1 + 0x48,local_80);
  FUN_18007f392(lVar1,param_1 + 0x60);
  FUN_18007f392(lVar1,param_1 + 0x61);
  local_80[0] = (undefined4)
                ((ulonglong)(*(longlong *)(param_1 + 0x70) - *(longlong *)(param_1 + 0x68)) >> 5);
  FUN_18008ca8a(lVar1,local_80);
  puVar2 = *(undefined1 **)(param_1 + 0x70);
  for (puVar5 = *(undefined1 **)(param_1 + 0x68); puVar5 != puVar2; puVar5 = puVar5 + 0x20) {
    local_80[0]._1_3_ = (undefined3)((uint)local_80[0] >> 8);
    local_80[0] = CONCAT31(local_80[0]._1_3_,*puVar5);
    local_78 = 0;
    uStack_70 = 0;
    local_68 = 0;
    FUN_18009c334(&local_78,*(longlong *)(puVar5 + 0x10) - *(longlong *)(puVar5 + 8) >> 2,puVar5 + 8
                  ,puVar5 + 0x10);
    FUN_18009ced8(local_80,param_2);
    FUN_180004cea(&local_78);
  }
  local_80[0] = (undefined4)
                ((ulonglong)(*(longlong *)(param_1 + 0x88) - *(longlong *)(param_1 + 0x80)) >> 4);
  FUN_18008ca8a(lVar1);
  puVar3 = *(undefined8 **)(param_1 + 0x88);
  for (puVar4 = *(undefined8 **)(param_1 + 0x80); puVar4 != puVar3; puVar4 = puVar4 + 2) {
    FUN_18009f0c6(*puVar4,param_2);
  }
  FUN_18008ca8a(lVar1,param_1 + 0x98);
  FUN_18007f392(lVar1,param_1 + 0x9c);
  FUN_18007f392(lVar1,param_1 + 0x9d);
  FUN_18007f392(lVar1,param_1 + 0x9e);
  if (3 < *(uint *)(param_1 + 0x98)) {
    FUN_18007f392(lVar1,param_1 + 0x9f);
  }
  local_80[0] = CONCAT31(local_80[0]._1_3_,0x7a);
  FUN_18007f392(lVar1);
  return;
}

