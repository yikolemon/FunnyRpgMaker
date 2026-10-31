/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1001b4dc */

void __thiscall FUN_1001b4dc(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_2 + 0x20) * 0x10;
  if (*(int *)(*(int *)(param_1 + 0x40) + 8 + iVar2) == 0) {
    iVar2 = *(int *)(param_1 + 0x40) + iVar2;
    if (((*(byte *)(param_1 + 0x74) & 0x3e) == 0) &&
       (cVar1 = FUN_1001bde0(*(undefined4 *)(param_2 + 0xc),iVar2), cVar1 != '\0')) {
      return;
    }
    *(int *)(iVar2 + 8) = *(int *)(param_1 + 0x10) - *(int *)(param_1 + 0xc) >> 3;
  }
  return;
}

