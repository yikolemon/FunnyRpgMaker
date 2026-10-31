/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14001dca3 */

void FUN_14001dca3(longlong param_1)

{
  uint *puVar1;
  longlong *plVar2;
  
  FUN_14001d094(param_1);
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined4 *)(param_1 + 0x70) = 0;
  *(undefined1 *)(param_1 + 0x82) = 0;
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(undefined8 *)(param_1 + 0x98) = 0;
  *(undefined8 *)(param_1 + 0xa0) = 0;
  *(undefined8 *)(param_1 + 0xa8) = 0;
  *(undefined8 *)(param_1 + 0xb0) = 0;
  *(undefined8 *)(param_1 + 0xb8) = 0;
  *(undefined4 *)(param_1 + 0xc0) = 0;
  *(undefined8 *)(param_1 + 200) = 0;
  *(undefined8 *)(param_1 + 0xd0) = 0;
  *(undefined4 *)(param_1 + 0xd8) = 0;
  if ((*(byte *)(*(longlong *)(param_1 + 8) + 10) & 1) == 0) {
    *(undefined8 *)(param_1 + 0xe8) = 0;
  }
  else if ((*(byte *)(*(longlong *)(param_1 + 0xf0) + 8) & 2) != 0) {
    plVar2 = *(longlong **)(param_1 + 0xe8);
    FUN_14001c53d(*(longlong *)(*(longlong *)(param_1 + 8) + 0x98),*plVar2);
    *plVar2 = 0;
    puVar1 = (uint *)(*(longlong *)(param_1 + 0xf0) + 8);
    *puVar1 = *puVar1 & 0xfffffffd;
  }
  *(undefined8 *)(param_1 + 0xdc) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined4 *)(param_1 + 0x60) = 0;
  return;
}

