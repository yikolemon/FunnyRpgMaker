/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10102913 */

void FUN_10102913(int param_1)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = DAT_1039d74c;
  uVar1 = *(uint *)(DAT_1039d74c + 0x1e88);
  *(uint *)(DAT_1039d74c + 0x1e88) = uVar1 | 0x800;
  if ((*(byte *)(iVar2 + 0x1e86) & 1) == 0) {
    *(uint *)(iVar2 + 0x1e88) = uVar1 | 0x804;
    if (((*(int *)(iVar2 + 0x1528) == param_1) || (*(int *)(iVar2 + 0x1528) == 0)) &&
       (*(undefined2 *)(iVar2 + 0x1538) = 0x101, *(int *)(iVar2 + 0x1554) == param_1)) {
      *(undefined1 *)(iVar2 + 0x155c) = 1;
      return;
    }
  }
  return;
}

