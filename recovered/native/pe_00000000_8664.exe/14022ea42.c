/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14022ea42 */

undefined8 * FUN_14022ea42(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = (undefined8 *)FUN_14044ab00(0x20);
  *(undefined4 *)(puVar1 + 1) = 0x11;
  *(undefined8 *)((longlong)puVar1 + 0xc) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x14) = 0;
  *(undefined4 *)((longlong)puVar1 + 0x1c) = 0;
  *puVar1 = &DAT_1404c2c48;
  FUN_14022e746(param_1,puVar1);
  puVar2 = (undefined8 *)FUN_14044ab00(0x30);
  *(undefined4 *)(puVar2 + 1) = 0x10;
  *(undefined8 *)((longlong)puVar2 + 0xc) = 0;
  *(undefined8 *)((longlong)puVar2 + 0x14) = 0;
  *(undefined4 *)((longlong)puVar2 + 0x1c) = 0;
  *puVar2 = &DAT_1404c2cb8;
  puVar2[4] = puVar1;
  puVar2[5] = 0;
  FUN_140231e48(*(undefined8 *)(param_2 + 0x10),puVar2);
  return puVar1;
}

