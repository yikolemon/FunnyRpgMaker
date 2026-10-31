/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0044e0f8 */

void __fastcall FUN_0044e0f8(int param_1,void *param_2)

{
  byte bVar1;
  uint uVar2;
  
  _memset(param_2,0,0xc4);
  bVar1 = *(byte *)(param_1 + 0xb8);
  *(byte *)((int)param_2 + 8) = bVar1;
  if (bVar1 != 0) {
    uVar2 = 0;
    do {
      *(short *)((int)param_2 + uVar2 * 2 + 0xc) =
           (short)((uint)(*(int *)(param_1 + 0xbc + uVar2 * 4) + 0x8000) >> 0x10);
      uVar2 = uVar2 + 1;
    } while (bVar1 != uVar2);
  }
  bVar1 = *(byte *)(param_1 + 0xb9);
  *(byte *)((int)param_2 + 9) = bVar1;
  if (bVar1 != 0) {
    uVar2 = 0;
    do {
      *(short *)((int)param_2 + uVar2 * 2 + 0x28) =
           (short)((uint)(*(int *)(param_1 + 0xf4 + uVar2 * 4) + 0x8000) >> 0x10);
      uVar2 = uVar2 + 1;
    } while (bVar1 != uVar2);
  }
  bVar1 = *(byte *)(param_1 + 0xba);
  *(byte *)((int)param_2 + 10) = bVar1;
  if (bVar1 != 0) {
    uVar2 = 0;
    do {
      *(short *)((int)param_2 + uVar2 * 2 + 0x3c) =
           (short)((uint)(*(int *)(param_1 + 0x11c + uVar2 * 4) + 0x8000) >> 0x10);
      uVar2 = uVar2 + 1;
    } while (bVar1 != uVar2);
  }
  bVar1 = *(byte *)(param_1 + 0xbb);
  *(byte *)((int)param_2 + 0xb) = bVar1;
  if (bVar1 != 0) {
    uVar2 = 0;
    do {
      *(short *)((int)param_2 + uVar2 * 2 + 0x58) =
           (short)((uint)(*(int *)(param_1 + 0x154 + uVar2 * 4) + 0x8000) >> 0x10);
      uVar2 = uVar2 + 1;
    } while (bVar1 != uVar2);
  }
  *(undefined4 *)((int)param_2 + 0x6c) = *(undefined4 *)(param_1 + 0x17c);
  *(undefined4 *)((int)param_2 + 0x70) = *(undefined4 *)(param_1 + 0x180);
  *(undefined4 *)((int)param_2 + 0x74) = *(undefined4 *)(param_1 + 0x184);
  *(undefined2 *)((int)param_2 + 0x78) = *(undefined2 *)(param_1 + 0x188);
  *(undefined2 *)((int)param_2 + 0x7a) = *(undefined2 *)(param_1 + 0x18c);
  bVar1 = *(byte *)(param_1 + 400);
  *(byte *)((int)param_2 + 0x7c) = bVar1;
  if (bVar1 != 0) {
    uVar2 = 0;
    do {
      *(undefined2 *)((int)param_2 + uVar2 * 2 + 0x80) =
           *(undefined2 *)(param_1 + 0x194 + uVar2 * 4);
      uVar2 = uVar2 + 1;
    } while (bVar1 != uVar2);
  }
  bVar1 = *(byte *)(param_1 + 0x191);
  *(byte *)((int)param_2 + 0x7d) = bVar1;
  if (bVar1 != 0) {
    uVar2 = 0;
    do {
      *(undefined2 *)((int)param_2 + uVar2 * 2 + 0x9a) =
           *(undefined2 *)(param_1 + 0x1c8 + uVar2 * 4);
      uVar2 = uVar2 + 1;
    } while (bVar1 != uVar2);
  }
  *(undefined1 *)((int)param_2 + 0x7e) = *(undefined1 *)(param_1 + 0x1fc);
  *(undefined4 *)((int)param_2 + 0xb8) = *(undefined4 *)(param_1 + 0x208);
  *(undefined4 *)((int)param_2 + 4) = *(undefined4 *)(param_1 + 0x204);
  return;
}

