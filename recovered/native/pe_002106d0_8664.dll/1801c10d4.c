/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801c10d4 */

void FUN_1801c10d4(undefined **param_1)

{
  uint uVar1;
  char cVar2;
  longlong lVar3;
  
  FUN_18016a67b(0,0);
  FUN_18016ab34();
  uVar1 = DAT_180408d34 & 0xffff7fff;
  if (param_1 == &PTR_s_Root_with_Long_Name_180328a00) {
    uVar1 = DAT_180408d34;
  }
  if (*(int *)(param_1 + 3) < 1) {
    FUN_18014cfb6(*param_1,uVar1 | 0x308);
    FUN_18016ab34();
    FUN_1801330a5(&DAT_18036b4b0,*(undefined4 *)(param_1 + 2));
    FUN_18016ab34();
    FUN_18013309a(param_1[1],0);
    return;
  }
  cVar2 = FUN_18014cfb6(*param_1,uVar1);
  if (-1 < (short)uVar1) {
    FUN_18016ab34();
    FUN_18013320f(&DAT_180377192);
    FUN_18016ab34();
    FUN_18013309a(param_1[1],0);
  }
  if (cVar2 != '\0') {
    if (0 < *(int *)(param_1 + 3)) {
      lVar3 = 0;
      do {
        FUN_1801c10d4(&PTR_s_Root_with_Long_Name_180328a00 +
                      (*(int *)((longlong)param_1 + 0x14) + lVar3) * 4);
        lVar3 = lVar3 + 1;
      } while ((int)lVar3 < *(int *)(param_1 + 3));
    }
    FUN_18014d7a9();
    return;
  }
  return;
}

