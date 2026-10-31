/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1019b6fd */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_1019b6fd(int *param_1)

{
  char cVar1;
  int iVar2;
  int *piStack_54;
  undefined4 uStack_50;
  int **ppiStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  int iStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined8 uStack_24;
  uint uStack_18;
  int *local_10;
  uint local_c;
  
  local_c = DAT_10388d00 ^ (uint)&uStack_48;
  ppiStack_4c = &local_10;
  local_10 = (int *)0x0;
  uStack_50 = 0;
  piStack_54 = param_1;
  iVar2 = (**(code **)(*param_1 + 0x38))();
  if (local_10 != (int *)0x0 && -1 < iVar2) {
    uStack_24 = 0;
    uStack_34 = 0;
    uStack_30 = 0;
    uStack_2c = 0;
    uStack_28 = 0;
    uStack_44 = 0;
    uStack_40 = 0;
    uStack_3c = 0;
    iStack_38 = 0;
    piStack_54 = (int *)0x0;
    uStack_50 = 0;
    ppiStack_4c = (int **)0x0;
    uStack_48 = 0;
    iVar2 = (**(code **)(*local_10 + 0x24))(local_10,&piStack_54);
    if (iStack_38 != 0 && -1 < iVar2) {
      cVar1 = FUN_1019b7dc();
      if ((cVar1 != '\0') && (DAT_103a4d20 != param_1)) {
        if (DAT_103a4d20 != (int *)0x0) {
          FUN_101bdfae();
          DAT_103a4d20 = (int *)0x0;
        }
        cVar1 = FUN_101bdda8(param_1);
        if (cVar1 != '\0') {
          _DAT_103a338c = 0;
          _DAT_103a3388 = param_1;
          DAT_103a4d20 = param_1;
        }
      }
    }
    (**(code **)(*(int *)uStack_24 + 8))((int *)uStack_24);
  }
  if (DAT_10388d00 == (uStack_18 ^ (uint)&piStack_54)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

