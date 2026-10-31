/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180166229 */

void FUN_180166229(longlong param_1)

{
  longlong lVar1;
  short sVar2;
  int iVar3;
  longlong lVar4;
  
  if (*(short *)(param_1 + 0x78) == 0) {
    sVar2 = *(short *)(param_1 + 0x212);
    if (sVar2 == -1) {
      sVar2 = -1;
    }
    else if ((*(float *)(param_1 + 0xdc) != DAT_1802de564) ||
            (NAN(*(float *)(param_1 + 0xdc)) || NAN(DAT_1802de564))) {
      FUN_18016635e();
      sVar2 = *(short *)(param_1 + 0x212);
    }
    *(short *)(param_1 + 0x214) = sVar2;
    *(undefined4 *)(param_1 + 0xdc) = 0x7f7fffff;
    *(undefined2 *)(param_1 + 0x212) = 0xffff;
    iVar3 = (int)*(short *)(param_1 + 0x210);
    if (iVar3 != -1) {
      FUN_18016635e(iVar3,*(undefined4 *)
                           (*(longlong *)(param_1 + 0x18) + 0x14 + (longlong)iVar3 * 0x74));
      *(undefined2 *)(param_1 + 0x210) = 0xffff;
    }
    if (*(short *)(param_1 + 0x78) == 0) {
      *(undefined2 *)(param_1 + 0x218) = *(undefined2 *)(param_1 + 0x216);
      *(undefined2 *)(param_1 + 0x216) = 0xffff;
      if ((*(short *)(param_1 + 0x21a) != -1) && (*(short *)(param_1 + 0x21c) != -1)) {
        FUN_1801664a1();
        *(undefined2 *)(param_1 + 0x21c) = 0xffff;
      }
      if (*(int *)(DAT_180419160 + 0x167c) == 0) {
        *(undefined2 *)(param_1 + 0x21a) = 0xffff;
      }
    }
  }
  if (*(char *)(param_1 + 0x244) == '\x01') {
    if (0 < *(int *)(param_1 + 0x6c)) {
      lVar1 = 0x2b;
      lVar4 = 0;
      do {
        *(short *)(*(longlong *)(param_1 + 0x18) + lVar1 * 2) = (short)lVar4;
        *(short *)(*(longlong *)(param_1 + 0x28) + lVar4 * 2) = (short)lVar4;
        lVar4 = lVar4 + 1;
        lVar1 = lVar1 + 0x3a;
      } while (lVar4 < *(int *)(param_1 + 0x6c));
    }
    *(undefined1 *)(param_1 + 0x244) = 0;
    *(undefined1 *)(param_1 + 0x241) = 1;
  }
  return;
}

