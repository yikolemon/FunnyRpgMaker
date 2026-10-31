/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101c1544 */

void __fastcall FUN_101c1544(int param_1)

{
  uint *puVar1;
  undefined4 *puVar2;
  
  FUN_101c0a92(param_1);
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x50) = 0;
  *(undefined4 *)(param_1 + 0x4c) = 0;
  *(undefined4 *)(param_1 + 0x54) = 0;
  *(undefined1 *)(param_1 + 0x5e) = 0;
  *(undefined4 *)(param_1 + 100) = 0;
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(undefined4 *)(param_1 + 0x6c) = 0;
  *(undefined4 *)(param_1 + 0x70) = 0;
  *(undefined4 *)(param_1 + 0x74) = 0;
  *(undefined4 *)(param_1 + 0x78) = 0;
  *(undefined4 *)(param_1 + 0x7c) = 0;
  *(undefined4 *)(param_1 + 0x80) = 0;
  *(undefined4 *)(param_1 + 0x80) = 0;
  *(undefined4 *)(param_1 + 0x84) = 0;
  *(undefined4 *)(param_1 + 0x88) = 0;
  *(undefined4 *)(param_1 + 0x8c) = 0;
  if ((*(byte *)(*(int *)(param_1 + 4) + 10) & 1) == 0) {
    *(undefined4 *)(param_1 + 0x98) = 0;
  }
  else if ((*(byte *)(*(int *)(param_1 + 0x9c) + 4) & 2) != 0) {
    puVar2 = *(undefined4 **)(param_1 + 0x98);
    FUN_101c0017(*(undefined4 *)(*(int *)(param_1 + 4) + 100),*puVar2);
    *puVar2 = 0;
    puVar1 = (uint *)(*(int *)(param_1 + 0x9c) + 4);
    *puVar1 = *puVar1 & 0xfffffffd;
  }
  *(undefined4 *)(param_1 + 0x90) = 0;
  *(undefined4 *)(param_1 + 0x94) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x44) = 0;
  *(undefined4 *)(param_1 + 0x48) = 0;
  return;
}

