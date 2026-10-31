/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10072d50 */

void FUN_10072d50(undefined4 *param_1)

{
  undefined4 **ppuVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 ***pppuVar5;
  int extraout_EDX;
  int *unaff_FS_OFFSET;
  undefined1 auStack_78 [4];
  undefined4 **local_74;
  undefined4 local_70;
  int local_6c;
  uint local_60;
  int local_5c;
  undefined4 local_58;
  int local_54;
  int local_50;
  undefined4 local_4c;
  undefined1 local_48 [32];
  undefined1 *local_28;
  undefined1 *local_24;
  int local_20;
  undefined1 *local_1c;
  undefined4 local_18;
  
  local_28 = &stack0xfffffffc;
  local_24 = auStack_78;
  local_18 = 0xffffffff;
  local_1c = &LAB_100c28c0;
  local_20 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_20;
  FUN_10002303();
  local_74 = (undefined4 ***)0x0;
  local_70 = 0xffff;
  puVar4 = param_1;
  if (7 < (uint)param_1[5]) {
    puVar4 = (undefined4 *)*param_1;
  }
  local_6c = FUN_10228d20(puVar4,local_48,3,0xffffffff);
  FUN_100025ec(local_6c,local_48);
  iVar2 = local_6c;
  local_58 = FUN_10002303();
  ppuVar1 = local_74;
  local_5c = iVar2;
  if ((undefined4 ***)local_74 == (undefined4 ***)0x0) {
    if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1000227a("exists",&local_5c,param_1);
    }
    goto code_r0x10072ea6;
  }
  FUN_10002303();
  if ((undefined4 ***)ppuVar1 == (undefined4 ***)0x1) goto code_r0x10072ea6;
  FUN_10002e46(param_1);
  local_18 = 0;
  FUN_1007da60(&DAT_10336e9b);
  FUN_10002303();
  local_5c = 0;
  local_58 = 0xffff;
  pppuVar5 = &local_74;
  if (7 < local_60) {
    pppuVar5 = (undefined4 ***)local_74;
  }
  local_54 = FUN_10228d20(pppuVar5,local_48,3,0xffffffff);
  FUN_100025ec(local_54,local_48);
  iVar3 = local_54;
  local_4c = FUN_10002303();
  iVar2 = local_5c;
  local_50 = iVar3;
  if (local_5c == 0) {
    if (iVar3 != 0) goto LAB_10072edd;
code_r0x10072e6f:
    pppuVar5 = (undefined4 ***)local_74;
    if (local_60 < 8) {
      pppuVar5 = &local_74;
    }
    puVar4 = param_1;
    if (7 < (uint)param_1[5]) {
      puVar4 = (undefined4 *)*param_1;
    }
    FUN_102289c0(puVar4,pppuVar5,0);
    if (extraout_EDX != 0) {
      FUN_1007daf6("copy_file",extraout_EDX,param_1,&local_74);
LAB_10072edd:
                    /* WARNING: Subroutine does not return */
      FUN_1000227a("exists",&local_50,&local_74);
    }
  }
  else {
    FUN_10002303();
    if (iVar2 == 1) goto code_r0x10072e6f;
  }
  local_18 = 0xffffffff;
  FUN_10001f04();
code_r0x10072ea6:
  *unaff_FS_OFFSET = local_20;
  return;
}

