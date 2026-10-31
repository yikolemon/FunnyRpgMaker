/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101bd00c */

bool FUN_101bd00c(undefined4 param_1)

{
  int iVar1;
  bool bVar2;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 local_14;
  uint local_10;
  
  local_10 = DAT_10388d00 ^ (uint)&local_48;
  DAT_103a4d1c = (int *)Direct3DCreate9(0x20);
  bVar2 = false;
  if (DAT_103a4d1c != (int *)0x0) {
    uStack_1c = 0;
    local_38 = 0;
    uStack_34 = 0;
    uStack_2c = 0;
    local_18 = 0;
    local_48 = 0;
    uStack_44 = 0;
    uStack_40 = 0;
    uStack_3c = 0;
    local_28 = 1;
    uStack_30 = 1;
    uStack_24 = 1;
    uStack_20 = 0x50;
    local_14 = 1;
    iVar1 = (**(code **)(*DAT_103a4d1c + 0x40))
                      (DAT_103a4d1c,0,1,param_1,0x40,&local_48,&DAT_103a4d20);
    bVar2 = -1 < iVar1;
  }
  if (DAT_10388d00 == (local_10 ^ (uint)&local_48)) {
    return bVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

