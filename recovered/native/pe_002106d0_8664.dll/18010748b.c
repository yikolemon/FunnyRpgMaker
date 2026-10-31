/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18010748b */

void FUN_18010748b(int param_1)

{
  uint uVar1;
  longlong lVar2;
  
  lVar2 = DAT_180419160;
  uVar1 = *(uint *)(DAT_180419160 + 0x1fe8);
  *(uint *)(DAT_180419160 + 0x1fe8) = uVar1 | 0x800;
  if ((*(byte *)(lVar2 + 0x1fe6) & 1) == 0) {
    *(uint *)(lVar2 + 0x1fe8) = uVar1 | 0x804;
    if (((*(int *)(lVar2 + 0x167c) == param_1) || (*(int *)(lVar2 + 0x167c) == 0)) &&
       (*(undefined2 *)(lVar2 + 0x168c) = 0x101, *(int *)(lVar2 + 0x16ac) == param_1)) {
      *(undefined1 *)(lVar2 + 0x16b4) = 1;
      return;
    }
  }
  return;
}

