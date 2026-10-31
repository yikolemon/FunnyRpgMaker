/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1014ae21 */

void FUN_1014ae21(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = DAT_1039d74c;
  *(int *)(DAT_1039d74c + 0x1e5c) = param_2;
  *(int *)(iVar2 + 0x1e58) = param_1;
  *(undefined4 *)(iVar2 + 0x1e50) = *(undefined4 *)(iVar2 + 0x1e3c);
  iVar1 = *(int *)(iVar2 + 0x2414);
  if (iVar1 == 0) {
    *(uint *)(iVar2 + 0x1e4c) = *(uint *)(iVar2 + 0x1e4c) | 0x200000;
  }
  else {
    *(uint *)(iVar2 + 0x1e4c) = *(uint *)(iVar2 + 0x1e4c) | 0x600000;
    if (param_1 == *(int *)(iVar1 + 0x10) && param_2 == *(int *)(iVar1 + 0x14)) {
      *(undefined1 *)(iVar1 + 0x51) = 1;
    }
  }
  return;
}

