/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 102068b9 */

int FUN_102068b9(void)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  undefined1 local_18 [4];
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)local_18;
  iVar3 = FUN_10206611();
  iVar4 = 0xa0;
  if (iVar3 != 0) {
    bVar1 = false;
    bVar2 = false;
    do {
      iVar3 = FUN_10206656();
      if (iVar3 < 0x35) {
        if (1 < iVar3 - 0x32U) {
          iVar4 = 0xa0;
          if (iVar3 - 0x14U < 2) {
            iVar4 = 0;
          }
          goto LAB_1020694d;
        }
        if (bVar1) break;
        iVar4 = FUN_1020708d();
        bVar1 = true;
LAB_10206922:
        if (iVar4 != 0) goto LAB_1020694d;
      }
      else if (iVar3 != 0x4b) {
        if ((iVar3 == 0x35) && (!bVar2)) {
          iVar4 = FUN_10206eec();
          bVar2 = true;
          goto LAB_10206922;
        }
        break;
      }
      iVar3 = FUN_10206611();
    } while (iVar3 != 0);
    iVar4 = 0xa0;
  }
LAB_1020694d:
  if (DAT_10388d00 != (local_14 ^ (uint)local_18)) {
                    /* WARNING: Subroutine does not return */
    FUN_102283e0();
  }
  return iVar4;
}

