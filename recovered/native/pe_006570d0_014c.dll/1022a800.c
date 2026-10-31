/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1022a800 */

/* WARNING: Removing unreachable block (ram,0x1022a95c) */
/* WARNING: Removing unreachable block (ram,0x1022a95e) */
/* WARNING: Removing unreachable block (ram,0x1022a961) */

void FUN_1022a800(undefined1 (*param_1) [16],uint param_2,undefined1 (*param_3) [16],
                 undefined1 (*param_4) [16])

{
  undefined1 (*pauVar1) [16];
  int iVar2;
  undefined1 (*pauVar3) [16];
  bool bVar4;
  undefined1 *puStack_8c;
  undefined1 (*pauStack_88) [16];
  undefined1 (*pauStack_84) [16];
  undefined1 local_70 [16];
  undefined1 (*local_54) [16];
  undefined1 (*local_50) [16];
  undefined1 (*local_4c) [16];
  undefined1 (*local_48) [16];
  int local_44;
  undefined1 (*local_40) [16];
  undefined1 (*local_3c) [16];
  undefined4 local_38;
  undefined1 (*local_34) [16];
  undefined1 local_30 [16];
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)&stack0xfffffff0;
  local_48 = (undefined1 (*) [16])(*param_1 + (param_2 & 0xfffffff0));
  local_50 = param_1;
  local_54 = param_3;
  if (param_4 < (undefined1 (*) [16])0x11) {
    pauStack_84 = param_4;
    pauStack_88 = param_3;
    puStack_8c = local_30;
    FUN_1025b2d0();
    local_70 = local_30;
    for (; param_1 != local_48; param_1 = param_1 + 1) {
      pcmpestri(local_30,*param_1,0,param_4,0x10);
      if (param_1 < local_48) goto LAB_1022a8b5;
    }
    pauVar1 = (undefined1 (*) [16])(param_2 & 0xf);
    if (pauVar1 != (undefined1 (*) [16])0x0) {
      puStack_8c = local_30;
      pauStack_88 = param_1;
      pauStack_84 = pauVar1;
      FUN_1025b2d0();
      pcmpestri(local_70,local_30,0,param_4,pauVar1);
      if ((undefined1 *)0xfffffff3 < &puStack_8c) {
LAB_1022a8b5:
                    /* WARNING: Subroutine does not return */
        FUN_102283e0();
      }
    }
  }
  else {
    pauVar1 = (undefined1 (*) [16])((uint)param_4 & 0xf);
    pauStack_88 = (undefined1 (*) [16])(*param_3 + ((uint)param_4 & 0xfffffff0));
    puStack_8c = local_70;
    pauStack_84 = pauVar1;
    local_4c = pauStack_88;
    FUN_1025b2d0();
    local_40 = local_54;
    local_3c = local_4c;
    local_38 = 0x10;
    local_30 = local_70;
    while (local_34 = pauVar1, param_1 != local_48) {
      bVar4 = param_1 < local_48;
      local_44 = 0x10;
      pauVar3 = local_54;
      do {
        iVar2 = pcmpestri(*pauVar3,*param_1,0,0x10,0x10);
        if ((bVar4) && (iVar2 < local_44)) {
          local_44 = iVar2;
        }
        pauVar3 = pauVar3 + 1;
        bVar4 = pauVar3 < local_4c;
      } while (pauVar3 != local_4c);
      if (pauVar1 != (undefined1 (*) [16])0x0) {
        pcmpestri(local_70,*param_1,0,pauVar1,0x10);
      }
      if (local_44 != 0x10) {
                    /* WARNING: Subroutine does not return */
        FUN_102283e0();
      }
      local_44 = 0x10;
      local_50 = local_50 + 1;
      param_1 = local_50;
    }
    pauVar1 = (undefined1 (*) [16])(param_2 & 0xf);
    if (pauVar1 != (undefined1 (*) [16])0x0) {
      puStack_8c = local_70;
      pauStack_88 = param_1;
      pauStack_84 = pauVar1;
      FUN_1025b2d0();
      puStack_8c = (undefined1 *)0x1022a99c;
      pauStack_88 = pauVar1;
      pauStack_84 = pauVar1;
      FUN_1022b4a0();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

