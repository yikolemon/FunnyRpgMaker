/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18011053d */

void FUN_18011053d(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  int *piVar4;
  
  lVar1 = FUN_180107ee8();
  *(longlong *)(param_1 + 0x40) = param_1 + 200;
  *(undefined4 **)(param_1 + 0x110) = (undefined4 *)(param_1 + 0xd8);
  piVar4 = (int *)(param_1 + 0x120);
  *(int **)(param_1 + 0x118) = piVar4;
  if (*(int *)(param_1 + 0xdc) < 0) {
    uVar2 = FUN_1800fe7f8(0);
    if (*(longlong *)(param_1 + 0xe0) != 0) {
      FUN_1802a82f0(uVar2,*(longlong *)(param_1 + 0xe0),(longlong)*(int *)(param_1 + 0xd8) << 3);
      FUN_1800fe8d4(*(undefined8 *)(param_1 + 0xe0));
    }
    *(undefined8 *)(param_1 + 0xe0) = uVar2;
    *(undefined4 *)(param_1 + 0xdc) = 0;
    piVar4 = *(int **)(param_1 + 0x118);
  }
  *(undefined4 *)(param_1 + 0xd8) = 0;
  if (piVar4[1] < 0) {
    uVar2 = FUN_1800fe7f8(0);
    if (*(longlong *)(piVar4 + 2) != 0) {
      FUN_1802a82f0(uVar2,*(longlong *)(piVar4 + 2),(longlong)*piVar4 << 3);
      FUN_1800fe8d4(*(undefined8 *)(piVar4 + 2));
    }
    *(undefined8 *)(piVar4 + 2) = uVar2;
    piVar4[1] = 0;
  }
  *piVar4 = 0;
  *(undefined1 *)(param_1 + 200) = 1;
  *(undefined8 *)(param_1 + 0xcc) = 0;
  *(undefined4 *)(param_1 + 0xd4) = 0;
  *(undefined8 *)(param_1 + 0xe8) = *(undefined8 *)(param_1 + 8);
  uVar2 = 0;
  if ((*(uint *)(param_1 + 4) >> 0xc & 1) == 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x10);
  }
  *(undefined8 *)(param_1 + 0xf0) = uVar2;
  puVar3 = (undefined8 *)(lVar1 + 0x10);
  if (*(float *)(param_1 + 0x18) != 0.0) {
    puVar3 = (undefined8 *)(param_1 + 0x18);
  }
  if (NAN(*(float *)(param_1 + 0x18))) {
    puVar3 = (undefined8 *)(param_1 + 0x18);
  }
  *(undefined8 *)(param_1 + 0xf8) = *puVar3;
  *(longlong *)(param_1 + 0x100) = param_1;
  lVar1 = FUN_180107ef9();
  *(longlong *)(param_1 + 0x108) = lVar1 + 0x140;
  return;
}

