/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101ed566 */

undefined4 FUN_101ed566(void)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = FUN_101ed6f9();
  iVar3 = 0;
  do {
    iVar2 = FUN_1025bc20(uVar1,&DAT_1030e4cc + iVar3);
    if (iVar2 != 0) {
      return 1;
    }
    iVar3 = iVar3 + 0x14;
  } while (iVar3 != 400);
  return 0;
}

