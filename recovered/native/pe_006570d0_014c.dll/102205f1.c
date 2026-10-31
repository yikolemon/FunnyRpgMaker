/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 102205f1 */

void __fastcall FUN_102205f1(int *param_1)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  iVar7 = param_1[2];
  if (1 < iVar7) {
    iVar1 = param_1[1];
    iVar6 = iVar1 * (iVar7 + -2) * 0x10 + *param_1 + 0x10;
    iVar5 = iVar1 * -0x10;
    iVar3 = (iVar7 * 0x10 + -0x10) * iVar1 + *param_1 + -0x20;
    iVar7 = iVar7 + -2;
    do {
      iVar8 = 1;
      if (iVar1 < 3) {
        if (1 < iVar1) goto LAB_102206ab;
      }
      else {
        iVar4 = 2;
        do {
          FUN_102206e6(1,iVar1,iVar3,iVar5,iVar6);
          FUN_102206e6(1,iVar1);
          FUN_102206e6(1,iVar1);
          FUN_102206e6(0,iVar1);
          iVar4 = iVar4 + 1;
        } while (iVar1 != iVar4);
LAB_102206ab:
        do {
          FUN_102206e6(0,iVar1,iVar3,iVar5,iVar6);
          iVar8 = iVar8 + 1;
        } while (iVar1 != iVar8);
      }
      iVar6 = iVar6 + iVar5;
      iVar3 = iVar3 + iVar5;
      bVar2 = 0 < iVar7;
      iVar7 = iVar7 + -1;
    } while (bVar2);
  }
  return;
}

