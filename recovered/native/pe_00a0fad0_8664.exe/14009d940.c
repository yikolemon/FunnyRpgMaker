/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14009d940 */

void FUN_14009d940(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined4 local_70 [2];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 local_50;
  
  local_50 = 0xfffffffffffffffe;
  local_70[0] = CONCAT31(local_70[0]._1_3_,1);
  lVar1 = param_2 + 0x58;
  FUN_14008cb80(lVar1);
  puVar3 = *(undefined1 **)(param_1 + 0x60);
  puVar2 = *(undefined1 **)(param_1 + 0x68);
  if (puVar3 != puVar2) {
    do {
      local_70[0] = CONCAT31(local_70[0]._1_3_,*puVar3);
      FUN_14008cb80(lVar1,local_70);
      puVar3 = puVar3 + 1;
    } while (puVar3 != puVar2);
  }
  FUN_14008cb80(lVar1,param_1 + 0x78);
  local_70[0] = (undefined4)
                ((ulonglong)(*(longlong *)(param_1 + 0x88) - *(longlong *)(param_1 + 0x80)) >> 5);
  FUN_14009e652(lVar1);
  puVar3 = *(undefined1 **)(param_1 + 0x80);
  puVar2 = *(undefined1 **)(param_1 + 0x88);
  if (puVar3 != puVar2) {
    do {
      local_70[0] = CONCAT31(local_70[0]._1_3_,*puVar3);
      local_68 = 0;
      uStack_60 = 0;
      local_58 = 0;
      FUN_14009db1a(&local_68,*(longlong *)(puVar3 + 0x10) - *(longlong *)(puVar3 + 8) >> 2,
                    puVar3 + 8,puVar3 + 0x10);
      FUN_14009e59a(local_70,param_2);
      FUN_140016e5c(&local_68);
      puVar3 = puVar3 + 0x20;
    } while (puVar3 != puVar2);
  }
  return;
}

