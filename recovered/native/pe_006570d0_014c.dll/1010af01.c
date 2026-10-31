/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1010af01 */

void FUN_1010af01(void)

{
  uint uVar1;
  int iVar2;
  char cVar3;
  
  iVar2 = DAT_1039d74c;
  if (*(int *)(DAT_1039d74c + 0x221c) != 0) {
    FUN_10128e66();
  }
  if (*(int *)(iVar2 + 0x2048) != 0) {
    cVar3 = FUN_101172b5();
    if ((cVar3 != '\0') &&
       (uVar1 = *(uint *)(iVar2 + 0x20dc), -1 < (char)uVar1 && (uVar1 & 0xf) != 0)) {
      FUN_10128fda();
      return;
    }
  }
  return;
}

