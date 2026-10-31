/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140152fa3 */

void FUN_140152fa3(longlong param_1,longlong param_2)

{
  byte bVar1;
  ulonglong uVar2;
  
  FUN_1401c5830(param_2,0,0xc4);
  bVar1 = *(byte *)(param_1 + 0xb8);
  *(byte *)(param_2 + 8) = bVar1;
  if ((ulonglong)bVar1 != 0) {
    uVar2 = 0;
    do {
      *(short *)(param_2 + 0xc + uVar2 * 2) =
           (short)((uint)(*(int *)(param_1 + 0xbc + uVar2 * 4) + 0x8000) >> 0x10);
      uVar2 = uVar2 + 1;
    } while (bVar1 != uVar2);
  }
  bVar1 = *(byte *)(param_1 + 0xb9);
  *(byte *)(param_2 + 9) = bVar1;
  if ((ulonglong)bVar1 != 0) {
    uVar2 = 0;
    do {
      *(short *)(param_2 + 0x28 + uVar2 * 2) =
           (short)((uint)(*(int *)(param_1 + 0xf4 + uVar2 * 4) + 0x8000) >> 0x10);
      uVar2 = uVar2 + 1;
    } while (bVar1 != uVar2);
  }
  bVar1 = *(byte *)(param_1 + 0xba);
  *(byte *)(param_2 + 10) = bVar1;
  if ((ulonglong)bVar1 != 0) {
    uVar2 = 0;
    do {
      *(short *)(param_2 + 0x3c + uVar2 * 2) =
           (short)((uint)(*(int *)(param_1 + 0x11c + uVar2 * 4) + 0x8000) >> 0x10);
      uVar2 = uVar2 + 1;
    } while (bVar1 != uVar2);
  }
  bVar1 = *(byte *)(param_1 + 0xbb);
  *(byte *)(param_2 + 0xb) = bVar1;
  if ((ulonglong)bVar1 != 0) {
    uVar2 = 0;
    do {
      *(short *)(param_2 + 0x58 + uVar2 * 2) =
           (short)((uint)(*(int *)(param_1 + 0x154 + uVar2 * 4) + 0x8000) >> 0x10);
      uVar2 = uVar2 + 1;
    } while (bVar1 != uVar2);
  }
  *(undefined4 *)(param_2 + 0x6c) = *(undefined4 *)(param_1 + 0x17c);
  *(undefined4 *)(param_2 + 0x70) = *(undefined4 *)(param_1 + 0x180);
  *(undefined4 *)(param_2 + 0x74) = *(undefined4 *)(param_1 + 0x184);
  *(undefined2 *)(param_2 + 0x78) = *(undefined2 *)(param_1 + 0x188);
  *(undefined2 *)(param_2 + 0x7a) = *(undefined2 *)(param_1 + 0x18c);
  bVar1 = *(byte *)(param_1 + 400);
  *(byte *)(param_2 + 0x7c) = bVar1;
  if ((ulonglong)bVar1 != 0) {
    uVar2 = 0;
    do {
      *(undefined2 *)(param_2 + 0x80 + uVar2 * 2) = *(undefined2 *)(param_1 + 0x194 + uVar2 * 4);
      uVar2 = uVar2 + 1;
    } while (bVar1 != uVar2);
  }
  bVar1 = *(byte *)(param_1 + 0x191);
  *(byte *)(param_2 + 0x7d) = bVar1;
  if ((ulonglong)bVar1 != 0) {
    uVar2 = 0;
    do {
      *(undefined2 *)(param_2 + 0x9a + uVar2 * 2) = *(undefined2 *)(param_1 + 0x1c8 + uVar2 * 4);
      uVar2 = uVar2 + 1;
    } while (bVar1 != uVar2);
  }
  *(undefined1 *)(param_2 + 0x7e) = *(undefined1 *)(param_1 + 0x1fc);
  *(undefined4 *)(param_2 + 0xb8) = *(undefined4 *)(param_1 + 0x208);
  *(undefined4 *)(param_2 + 4) = *(undefined4 *)(param_1 + 0x204);
  return;
}

