/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140050ef3 */

void FUN_140050ef3(longlong param_1,undefined1 (*param_2) [32])

{
  byte bVar1;
  ulonglong uVar2;
  
  FUN_1400b3c00(param_2,0,0xc4);
  bVar1 = *(byte *)(param_1 + 0xb8);
  (*param_2)[8] = bVar1;
  if ((ulonglong)bVar1 != 0) {
    uVar2 = 0;
    do {
      *(short *)(*param_2 + uVar2 * 2 + 0xc) =
           (short)((uint)(*(int *)(param_1 + 0xbc + uVar2 * 4) + 0x8000) >> 0x10);
      uVar2 = uVar2 + 1;
    } while (bVar1 != uVar2);
  }
  bVar1 = *(byte *)(param_1 + 0xb9);
  (*param_2)[9] = bVar1;
  if ((ulonglong)bVar1 != 0) {
    uVar2 = 0;
    do {
      *(short *)(param_2[1] + uVar2 * 2 + 8) =
           (short)((uint)(*(int *)(param_1 + 0xf4 + uVar2 * 4) + 0x8000) >> 0x10);
      uVar2 = uVar2 + 1;
    } while (bVar1 != uVar2);
  }
  bVar1 = *(byte *)(param_1 + 0xba);
  (*param_2)[10] = bVar1;
  if ((ulonglong)bVar1 != 0) {
    uVar2 = 0;
    do {
      *(short *)(param_2[1] + uVar2 * 2 + 0x1c) =
           (short)((uint)(*(int *)(param_1 + 0x11c + uVar2 * 4) + 0x8000) >> 0x10);
      uVar2 = uVar2 + 1;
    } while (bVar1 != uVar2);
  }
  bVar1 = *(byte *)(param_1 + 0xbb);
  (*param_2)[0xb] = bVar1;
  if ((ulonglong)bVar1 != 0) {
    uVar2 = 0;
    do {
      *(short *)(param_2[2] + uVar2 * 2 + 0x18) =
           (short)((uint)(*(int *)(param_1 + 0x154 + uVar2 * 4) + 0x8000) >> 0x10);
      uVar2 = uVar2 + 1;
    } while (bVar1 != uVar2);
  }
  *(undefined4 *)(param_2[3] + 0xc) = *(undefined4 *)(param_1 + 0x17c);
  *(undefined4 *)(param_2[3] + 0x10) = *(undefined4 *)(param_1 + 0x180);
  *(undefined4 *)(param_2[3] + 0x14) = *(undefined4 *)(param_1 + 0x184);
  *(undefined2 *)(param_2[3] + 0x18) = *(undefined2 *)(param_1 + 0x188);
  *(undefined2 *)(param_2[3] + 0x1a) = *(undefined2 *)(param_1 + 0x18c);
  bVar1 = *(byte *)(param_1 + 400);
  param_2[3][0x1c] = bVar1;
  if ((ulonglong)bVar1 != 0) {
    uVar2 = 0;
    do {
      *(undefined2 *)(param_2[4] + uVar2 * 2) = *(undefined2 *)(param_1 + 0x194 + uVar2 * 4);
      uVar2 = uVar2 + 1;
    } while (bVar1 != uVar2);
  }
  bVar1 = *(byte *)(param_1 + 0x191);
  param_2[3][0x1d] = bVar1;
  if ((ulonglong)bVar1 != 0) {
    uVar2 = 0;
    do {
      *(undefined2 *)(param_2[4] + uVar2 * 2 + 0x1a) = *(undefined2 *)(param_1 + 0x1c8 + uVar2 * 4);
      uVar2 = uVar2 + 1;
    } while (bVar1 != uVar2);
  }
  param_2[3][0x1e] = *(undefined1 *)(param_1 + 0x1fc);
  *(undefined4 *)(param_2[5] + 0x18) = *(undefined4 *)(param_1 + 0x208);
  *(undefined4 *)(*param_2 + 4) = *(undefined4 *)(param_1 + 0x204);
  return;
}

