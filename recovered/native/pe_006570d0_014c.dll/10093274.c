/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10093274 */

void __fastcall FUN_10093274(int param_1)

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
      FUN_1009301c();
      cVar1 = FUN_100933ac(7,0);
      if (cVar1 != '\0') {
        iVar5 = *(int *)(param_1 + 0x44);
        iVar2 = *(int *)(param_1 + 0x48);
        iVar4 = iVar5;
        if (iVar2 == 0x2c) {
          FUN_1009301c();
          if (*(int *)(param_1 + 0x48) == 0x7d) goto LAB_1009330b;
          cVar1 = FUN_100933ac(7,0);
          if (cVar1 == '\0') goto LAB_100932fb;
          iVar4 = *(int *)(param_1 + 0x44);
          iVar2 = *(int *)(param_1 + 0x48);
        }
        if ((iVar2 == 0x7d) && ((iVar4 == -1 || (iVar3 = iVar4, iVar5 <= iVar4))))
        goto LAB_1009330b;
      }
LAB_100932fb:
                    /* WARNING: Subroutine does not return */
      FUN_1001d9e4(7);
    }
    iVar3 = 1;
  }
LAB_1009330b:
  FUN_1009301c();
  bVar6 = (*(byte *)(param_1 + 0x39) & 2) == 0;
  bVar7 = *(int *)(param_1 + 0x48) != 0x3f;
  if (!bVar7 && !bVar6) {
    FUN_1009301c();
  }
  FUN_10094a00(iVar5,iVar3,bVar7 || bVar6);
  return;
}

