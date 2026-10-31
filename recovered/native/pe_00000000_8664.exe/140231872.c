/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140231872 */

void FUN_140231872(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14044ab00(0x30);
  *(undefined4 *)(puVar1 + 1) = 6;
  *(undefined8 *)((longlong)puVar1 + 0xc) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x14) = 0;
  *(undefined4 *)((longlong)puVar1 + 0x1c) = 0;
  *puVar1 = &DAT_1404c2bd8;
  puVar1[4] = 0;
  puVar1[5] = 0;
  FUN_14022e746(param_1,puVar1);
  return;
}

