/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1019b9c6 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_1019b9c6(int *param_1)

{
  char cVar1;
  int iVar2;
  int ****ppppiStack_64;
  int ****ppppiStack_60;
  int *piStack_5c;
  undefined *puStack_58;
  int ***pppiStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  int iStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  int *piStack_24;
  int ****ppppiStack_20;
  int ***pppiStack_1c;
  uint uStack_18;
  undefined4 local_14;
  int ***local_10;
  uint local_c;
  
  local_c = DAT_10388d00 ^ (uint)&uStack_50;
  pppiStack_54 = (int ***)&local_10;
  local_10 = (int ***)0x0;
  local_14 = 0;
  puStack_58 = &DAT_1030206c;
  ppppiStack_60 = (int ****)0x1019b9f0;
  piStack_5c = param_1;
  iVar2 = (**(code **)(*param_1 + 0x1c))();
  if ((int ****)local_10 != (int ****)0x0 && -1 < iVar2) {
    ppppiStack_60 = (int ****)&ppppiStack_20;
    ppppiStack_64 = (int ****)local_10;
    (*(code *)(*local_10)[0x28])();
    if ((int *****)ppppiStack_20 != (int *****)0x0) {
      uStack_34 = 0;
      uStack_30 = 0;
      uStack_2c = 0;
      uStack_44 = 0;
      uStack_40 = 0;
      uStack_3c = 0;
      iStack_38 = 0;
      pppiStack_54 = (int ***)0x0;
      uStack_50 = 0;
      uStack_4c = 0;
      uStack_48 = 0;
      ppppiStack_64 = (int ****)0x0;
      ppppiStack_60 = (int ****)0x0;
      piStack_5c = (int *)0x0;
      puStack_58 = (undefined *)0x0;
      iVar2 = (**(code **)(*param_1 + 0x30))(param_1,&ppppiStack_64);
      if (iStack_38 != 0 && -1 < iVar2) {
        ppppiStack_60 = (int ****)0x1019ba56;
        cVar1 = FUN_1019b7dc();
        if (cVar1 != '\0') {
          if (DAT_103a4d24 != (int ****)pppiStack_1c) {
            if (DAT_103a4d28 != (int *****)ppppiStack_20) {
              if (DAT_103a4d28 != (int *****)0x0 && DAT_103a4d24 != (int ****)0x0) {
                ppppiStack_60 = (int ****)0x1019ba91;
                FUN_101bf842();
                ppppiStack_60 = DAT_103a4d24;
                ppppiStack_64 = (int ****)0x1019ba9c;
                (*(code *)(*DAT_103a4d24)[2])();
                ppppiStack_64 = (int ****)DAT_103a4d28;
                (*(code *)(*DAT_103a4d28)[2])();
                DAT_103a4d24 = (int ****)0x0;
                DAT_103a4d28 = (int *****)0x0;
              }
              ppppiStack_60 = ppppiStack_20;
              ppppiStack_64 = (int ****)pppiStack_1c;
              cVar1 = FUN_101bf60d();
              if (cVar1 != '\0') {
                DAT_103a4d24 = (int ****)pppiStack_1c;
                DAT_103a4d28 = (int *****)ppppiStack_20;
                _DAT_103a3388 = 0;
                _DAT_103a338c = (int ****)pppiStack_1c;
                DAT_103a4d2c = param_1;
                goto LAB_1019bb07;
              }
            }
          }
        }
      }
      ppppiStack_60 = ppppiStack_20;
      ppppiStack_64 = (int ****)0x1019bafd;
      (*(code *)(*ppppiStack_20)[2])();
    }
    (**(code **)(*piStack_24 + 8))(piStack_24);
  }
LAB_1019bb07:
  if (DAT_10388d00 == (uStack_18 ^ (uint)&piStack_5c)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ppppiStack_60 = (int ****)FUN_1019bb28;
  FUN_102283e0();
}

