/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14031895b */

void FUN_14031895b(int param_1)

{
  uint uVar1;
  longlong lVar2;
  
  lVar2 = DAT_14062a630;
  uVar1 = *(uint *)(DAT_14062a630 + 0x1fe8);
  *(uint *)(DAT_14062a630 + 0x1fe8) = uVar1 | 0x800;
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

