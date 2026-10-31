/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14022e4b0 */

void FUN_14022e4b0(undefined8 param_1,longlong param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  
  uVar1 = *(int *)(param_2 + 8) - 8;
  uVar3 = 0xe;
  if (uVar1 < 4) {
    uVar3 = *(undefined4 *)(&DAT_1404c2088 + (ulonglong)uVar1 * 4);
  }
  puVar2 = (undefined8 *)FUN_14044ab00(0x28);
  *(undefined4 *)(puVar2 + 1) = uVar3;
  *(undefined8 *)((longlong)puVar2 + 0xc) = 0;
  *(undefined8 *)((longlong)puVar2 + 0x14) = 0;
  *(undefined4 *)((longlong)puVar2 + 0x1c) = 0;
  *puVar2 = &DAT_1404c2d28;
  puVar2[4] = param_2;
  FUN_14022e746(param_1,puVar2);
  return;
}

