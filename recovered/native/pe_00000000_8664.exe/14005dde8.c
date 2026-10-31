/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14005dde8 */

void FUN_14005dde8(longlong param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 *puVar4;
  
  lVar1 = *(longlong *)(param_2 + 0x10);
  lVar2 = *(longlong *)(param_3 + 0x10);
  *(undefined8 *)(param_3 + 0x10) = 0;
  lVar3 = *(longlong *)(param_1 + 8);
  *(longlong *)(param_1 + 8) = param_3;
  *(undefined8 *)(param_3 + 0x10) = 0;
  *(longlong *)(lVar3 + 0x10) = param_3;
  do {
    lVar3 = lVar1;
    lVar1 = *(longlong *)(lVar3 + 0x28);
  } while (lVar1 != 0);
  puVar4 = (undefined8 *)FUN_1401887b0(0x30);
  *(undefined4 *)(puVar4 + 1) = 0x10;
  *(undefined8 *)((longlong)puVar4 + 0xc) = 0;
  *(undefined8 *)((longlong)puVar4 + 0x14) = 0;
  *(undefined4 *)((longlong)puVar4 + 0x1c) = 0;
  *puVar4 = std::_Node_if::vftable;
  puVar4[4] = param_3;
  puVar4[5] = 0;
  *(undefined8 **)(lVar3 + 0x28) = puVar4;
  puVar4[2] = lVar2;
  *(undefined8 **)(lVar2 + 0x18) = puVar4;
  return;
}

