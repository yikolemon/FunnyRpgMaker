/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180201f87 */

undefined4 FUN_180201f87(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  undefined4 uVar3;
  
  uVar3 = 0xa1;
  if (*(longlong *)(param_1 + 0x20) + 0x28U <= *(ulonglong *)(param_1 + 0x28)) {
    lVar1 = *(longlong *)(param_1 + 0x38);
    iVar2 = FUN_180201c8b(param_1);
    uVar3 = 3;
    if (0xfffffff0 < iVar2 - 0x11U) {
      *(short *)(lVar1 + 0xac) = (short)iVar2;
      *(short *)(lVar1 + 0xae) =
           (short)((uint)(*(int *)(param_1 + 0x28) - *(int *)(param_1 + 0x20)) >> 3) + -4;
      *(short *)(param_1 + 0x40) = (short)iVar2;
      *(undefined2 *)(param_1 + 0x42) = *(undefined2 *)(lVar1 + 0xae);
      uVar3 = 0;
    }
  }
  return uVar3;
}

