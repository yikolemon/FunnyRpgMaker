/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140106dd8 */

void FUN_140106dd8(undefined **param_1)

{
  uint uVar1;
  char cVar2;
  longlong lVar3;
  
  FUN_14011264b(0,0);
  FUN_140112b04();
  uVar1 = DAT_140f1c4d4 & 0xffff7fff;
  if (param_1 == &PTR_s_Root_with_Long_Name_140e8cd90) {
    uVar1 = DAT_140f1c4d4;
  }
  if (*(int *)(param_1 + 3) < 1) {
    FUN_1400c5ee6(*param_1,uVar1 | 0x308);
    FUN_140112b04();
    FUN_1400abfd5(&DAT_140ecbfd4,*(undefined4 *)(param_1 + 2));
    FUN_140112b04();
    FUN_1400abfca(param_1[1],0);
    return;
  }
  cVar2 = FUN_1400c5ee6(*param_1,uVar1);
  if (-1 < (short)uVar1) {
    FUN_140112b04();
    FUN_1400ac13f(&DAT_140ed6fe1);
    FUN_140112b04();
    FUN_1400abfca(param_1[1],0);
  }
  if (cVar2 != '\0') {
    if (0 < *(int *)(param_1 + 3)) {
      lVar3 = 0;
      do {
        FUN_140106dd8(&PTR_s_Root_with_Long_Name_140e8cd90 +
                      (*(int *)((longlong)param_1 + 0x14) + lVar3) * 4);
        lVar3 = lVar3 + 1;
      } while ((int)lVar3 < *(int *)(param_1 + 3));
    }
    FUN_1400c66d9();
    return;
  }
  return;
}

