/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400e8d44 */

void FUN_1400e8d44(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  if (*(longlong *)(param_1 + 0xe0) != 0) {
    FUN_140077b90();
  }
  puVar2 = *(undefined8 **)(param_1 + 0xd0);
  puVar1 = puVar2 + *(int *)(param_1 + 200);
  for (; puVar2 != puVar1; puVar2 = puVar2 + 1) {
    FUN_140077b90(*puVar2);
  }
  if (*(longlong *)(param_1 + 0xd0) != 0) {
    FUN_140077b90();
  }
  if (*(longlong *)(param_1 + 0x88) != 0) {
    FUN_140077b90();
  }
  if (*(longlong *)(param_1 + 0x78) != 0) {
    FUN_140077b90();
  }
  if (*(longlong *)(param_1 + 0x68) != 0) {
    FUN_140077b90();
  }
  if (*(longlong *)(param_1 + 0x58) != 0) {
    FUN_140077b90();
    return;
  }
  return;
}

