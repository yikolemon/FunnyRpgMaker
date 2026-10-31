/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10220516 */

void __fastcall FUN_10220516(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar1 = param_1[2];
  if (1 < iVar1) {
    iVar2 = param_1[1];
    iVar3 = *param_1 + iVar2 * 0x20 + -0x20;
    iVar4 = 1;
    do {
      if (iVar2 < 3) {
        if (1 < iVar2) goto LAB_102205af;
      }
      else {
        iVar5 = 2;
        do {
          FUN_102206e6(0xffffffff,iVar2,iVar3);
          FUN_102206e6(0xffffffff,iVar2);
          FUN_102206e6(0xffffffff,iVar2);
          FUN_102206e6(0,iVar2);
          iVar5 = iVar5 + 1;
        } while (iVar2 != iVar5);
LAB_102205af:
        iVar5 = 1;
        do {
          FUN_102206e6(0,iVar2,iVar3);
          iVar5 = iVar5 + 1;
        } while (iVar2 != iVar5);
      }
      iVar4 = iVar4 + 1;
      iVar3 = iVar3 + iVar2 * 0x10;
    } while (iVar4 != iVar1);
  }
  return;
}

