/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1001dc3c */

void __fastcall FUN_1001dc3c(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  bool bVar7;
  
  iVar2 = *(int *)(param_1 + 0x48);
  iVar5 = 0;
  iVar3 = -1;
  if (iVar2 < 0x3f) {
    if (iVar2 != 0x2a) {
      if (iVar2 != 0x2b) {
        return;
      }
      iVar5 = 1;
    }
  }
  else {
    if (iVar2 != 0x3f) {
      if (iVar2 != 0x7b) {
        return;
      }
      FUN_1001d8ea();
      cVar1 = FUN_1001de0a(7,0);
      if (cVar1 != '\0') {
        iVar5 = *(int *)(param_1 + 0x44);
        iVar2 = *(int *)(param_1 + 0x48);
        iVar4 = iVar5;
        if (iVar2 == 0x2c) {
          FUN_1001d8ea();
          if (*(int *)(param_1 + 0x48) == 0x7d) goto LAB_1001dcd3;
          cVar1 = FUN_1001de0a(7,0);
          if (cVar1 == '\0') goto LAB_1001dcc3;
          iVar4 = *(int *)(param_1 + 0x44);
          iVar2 = *(int *)(param_1 + 0x48);
        }
        if ((iVar2 == 0x7d) && ((iVar4 == -1 || (iVar3 = iVar4, iVar5 <= iVar4))))
        goto LAB_1001dcd3;
      }
LAB_1001dcc3:
                    /* WARNING: Subroutine does not return */
      FUN_1001d9e4(7);
    }
    iVar3 = 1;
  }
LAB_1001dcd3:
  FUN_1001d8ea();
  bVar6 = (*(byte *)(param_1 + 0x39) & 2) == 0;
  bVar7 = *(int *)(param_1 + 0x48) != 0x3f;
  if (!bVar7 && !bVar6) {
    FUN_1001d8ea();
  }
  FUN_100202ba(iVar5,iVar3,bVar7 || bVar6);
  return;
}

