/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101bdece */

bool __fastcall FUN_101bdece(int *param_1)

{
  int iVar1;
  bool bVar2;
  int *piStack_40;
  code *pcStack_3c;
  int *piStack_38;
  undefined4 *puStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  int *piStack_20;
  undefined4 uStack_1c;
  uint uStack_14;
  undefined4 local_10;
  uint local_c;
  
  local_c = DAT_10388d00 ^ (uint)&uStack_30;
  puStack_34 = &local_10;
  local_10 = 0;
  pcStack_3c = (code *)0x101bdef1;
  piStack_38 = param_1;
  iVar1 = (**(code **)(*param_1 + 0x18))();
  if (iVar1 != 0) {
    bVar2 = false;
    goto LAB_101bdf2d;
  }
  pcStack_3c = (code *)&uStack_28;
  uStack_28 = 0;
  uStack_24 = 0;
  piStack_20 = (int *)0x0;
  uStack_1c = 0;
  piStack_38 = (int *)0x0;
  puStack_34 = (undefined4 *)0x0;
  uStack_30 = 0;
  uStack_2c = 0;
  piStack_40 = param_1;
  iVar1 = (**(code **)(*param_1 + 0x24))();
  if (iVar1 == 0) {
    iVar1 = (**(code **)(*param_1 + 0x20))(param_1,0,&piStack_40);
    if (iVar1 != 0) goto LAB_101bdf21;
    iVar1 = (**(code **)(*piStack_20 + 0x28))
                      (piStack_20,uStack_30,uStack_2c,puStack_34,0xa0200,3,0x20);
    bVar2 = iVar1 == 0;
  }
  else {
LAB_101bdf21:
    bVar2 = false;
  }
  (**(code **)(*piStack_20 + 8))(piStack_20);
LAB_101bdf2d:
  if (DAT_10388d00 == (uStack_14 ^ (uint)&piStack_38)) {
    return bVar2;
  }
                    /* WARNING: Subroutine does not return */
  pcStack_3c = FUN_101bdf76;
  FUN_102283e0();
}

