/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140112bfb */

void FUN_140112bfb(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  
  iVar2 = *(int *)(param_1 + 0x6c);
  if (0 < iVar2) {
    lVar3 = 0x70;
    lVar4 = 0;
    do {
      lVar1 = *(longlong *)(param_1 + 0x18);
      if ((*(char *)(lVar1 + -10 + lVar3) != '\0') || ((*(byte *)(lVar1 + -0x70 + lVar3) & 8) != 0))
      {
        *(undefined2 *)(lVar1 + -1 + lVar3) = 0x102;
        iVar2 = *(int *)(param_1 + 0x6c);
      }
      lVar4 = lVar4 + 1;
      lVar3 = lVar3 + 0x74;
    } while (lVar4 < iVar2);
  }
  return;
}

