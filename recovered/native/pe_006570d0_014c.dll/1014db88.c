/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1014db88 */

void FUN_1014db88(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  char cVar5;
  
  iVar4 = DAT_1039d74c;
  iVar1 = *(int *)(DAT_1039d74c + 0x14cc);
  if ((~*(uint *)(iVar1 + 0xc) & 0x14000000) == 0) {
    if ((*(short *)(iVar1 + 0x108) == *(short *)(iVar1 + 0x10a)) &&
       (*(int *)(DAT_1039d74c + 0x20e8) == 0)) {
      iVar2 = *(int *)(iVar1 + 0x3a0);
      cVar5 = FUN_101172b5();
      if ((cVar5 != '\0') &&
         (((iVar3 = *(int *)(iVar4 + 0x2048), iVar3 != 0 && (*(int *)(iVar3 + 0x3b8) == iVar1)) &&
          (*(int *)(iVar2 + 0x1f0) == 1)))) {
        FUN_1011630c(*(int *)(iVar4 + 0x1fc8) + -1,1);
        FUN_1010c017();
      }
    }
    FUN_101165cb();
    return;
  }
  FUN_100fcef5("Calling EndMenu() in wrong window!");
  return;
}

