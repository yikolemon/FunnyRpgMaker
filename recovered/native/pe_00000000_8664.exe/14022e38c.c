/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14022e38c */

void FUN_14022e38c(undefined8 param_1,undefined4 param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14044ab00(0x28);
  *(undefined4 *)(puVar1 + 1) = 0xd;
  *(undefined8 *)((longlong)puVar1 + 0xc) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x14) = 0;
  *(undefined4 *)((longlong)puVar1 + 0x1c) = 0;
  *puVar1 = &DAT_1404c2a10;
  *(undefined4 *)(puVar1 + 4) = param_2;
  FUN_14022e746(param_1,puVar1);
  return;
}

