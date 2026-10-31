/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10102871 */

void FUN_10102871(void)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  
  iVar3 = DAT_1039d74c;
  iVar2 = *(int *)(DAT_1039d74c + 0x14dc);
  if ((iVar2 != 0) && (*(int *)(iVar2 + 0x3c) != 0)) {
    if ((*(byte *)(DAT_1039d74c + 0x120d) & 4) != 0) {
      FUN_10103881();
    }
    cVar4 = FUN_10103a65();
    if (cVar4 == '\0') {
      *(undefined4 *)(iVar3 + 0x1ff0) = *(undefined4 *)(iVar2 + 0x3c);
    }
    if ((~*(uint *)(iVar2 + 0xc) & 0x10200) != 0) {
      puVar1 = (uint *)(*(int *)(iVar2 + 0x3c) + 4);
      *puVar1 = *puVar1 & 0xffffff7f;
    }
  }
  *(undefined4 *)(iVar3 + 0x14dc) = 0;
  return;
}

