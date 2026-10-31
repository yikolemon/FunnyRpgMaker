/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 1400560a4 */

void FUN_1400560a4(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  FUN_14001c53d(param_2,*(longlong *)(param_1 + 0x60));
  *(undefined8 *)(param_1 + 0x60) = 0;
  FUN_14001c53d(param_2,*(longlong *)(param_1 + 0x68));
  *(undefined8 *)(param_1 + 0x68) = 0;
  FUN_14001c53d(param_2,*(longlong *)(param_1 + 0x70));
  *(undefined8 *)(param_1 + 0x70) = 0;
  FUN_14001c53d(param_2,*(longlong *)(param_1 + 0x58));
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined4 *)(param_1 + 0x54) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 0x44) = 0;
  FUN_14001c53d(param_2,*(longlong *)(param_1 + 0x80));
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined8 *)(param_1 + 0x80) = 0;
  FUN_14001c53d(param_2,*(longlong *)(param_1 + 0xb0));
  *(undefined4 *)(param_1 + 0xa0) = 0;
  *(undefined8 *)(param_1 + 0xa8) = 0;
  *(undefined8 *)(param_1 + 0xb0) = 0;
  FUN_14001c53d(param_2,*(longlong *)(param_1 + 0x90));
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(undefined4 *)(param_1 + 0x88) = 0;
  puVar2 = *(undefined8 **)(param_1 + 0xc0);
  while (puVar2 != (undefined8 *)0x0) {
    puVar1 = (undefined8 *)*puVar2;
    FUN_14001c53d(param_2,(longlong)puVar2);
    puVar2 = puVar1;
  }
  *(undefined4 *)(param_1 + 0xb8) = 0;
  *(undefined8 *)(param_1 + 0xc0) = 0;
  *(undefined8 *)(param_1 + 200) = 0;
  return;
}

