/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140774060 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140774060(ulonglong param_1)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  undefined8 unaff_R14;
  undefined4 unaff_retaddr;
  
  puVar2 = (undefined4 *)(param_1 & 0xffffffff);
  *(undefined8 *)(param_1 + 0x24) = 0;
  *(undefined8 *)(param_1 + 0x2c) = 0;
  *(undefined8 *)(param_1 + 0x54) = 0;
  *(undefined8 *)(param_1 + 0x5c) = 0;
  *(undefined8 *)(param_1 + 100) = 0;
  *(undefined8 *)(param_1 + 0x6c) = 0;
  *(undefined4 *)(param_1 + 0x74) = 0;
  *(undefined8 *)(param_1 + 0x34) = 0;
  *(undefined8 *)(param_1 + 0x3c) = 0;
  *(undefined8 *)(param_1 + 0x44) = 0;
  *(undefined8 *)(param_1 + 0x58) = unaff_R14;
  *(undefined1 *)((longlong)puVar2 + 0x71) = 1;
  *puVar2 = unaff_retaddr;
  *(undefined8 *)(puVar2 + 1) = 0;
  *(undefined8 *)(puVar2 + 3) = 0;
  puVar2[0x13] = 0;
  *(undefined8 *)(puVar2 + 5) = 0;
  *(undefined8 *)(puVar2 + 7) = 0;
  puVar2[0x14] = 0;
  *(undefined8 *)(puVar2 + 0x1e) = 0;
  *(undefined8 *)(puVar2 + 0x20) = 0;
  uVar1 = uRam0000000150a2cf28;
  *(undefined8 *)(puVar2 + 0x22) = _DAT_150a2cf20;
  *(undefined8 *)(puVar2 + 0x24) = uVar1;
  *(undefined8 *)(puVar2 + 0x26) = 0;
  *(undefined8 *)(puVar2 + 0x28) = 0;
  puVar2[0x2a] = puVar2[0x2a] & 0xfffffe00 | 9;
  *(byte *)((longlong)puVar2 + 0xadU) = *(byte *)((longlong)puVar2 + 0xadU) & 0xf8;
  *(undefined1 *)(puVar2 + 0x2b) = 1;
  return;
}

