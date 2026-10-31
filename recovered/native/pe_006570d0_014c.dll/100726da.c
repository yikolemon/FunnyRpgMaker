/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100726da */

undefined4 __thiscall FUN_100726da(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined4 *puVar5;
  int *unaff_FS_OFFSET;
  undefined1 auStack_68 [4];
  undefined4 local_64;
  int local_60;
  undefined4 local_5c;
  int local_58;
  undefined4 local_54;
  int local_34;
  undefined4 local_30;
  int local_2c;
  undefined1 *local_28;
  undefined1 *local_24;
  int local_20;
  undefined1 *local_1c;
  undefined4 local_18;
  
  local_28 = &stack0xfffffffc;
  local_24 = auStack_68;
  local_18 = 0xffffffff;
  local_1c = &LAB_100c2870;
  local_20 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_20;
  local_64 = param_1;
  puVar3 = &stack0xfffffffc;
  puVar4 = auStack_68;
  if (DAT_1039cb40 != 0) {
    FUN_10002303();
    local_34 = 0;
    local_30 = 0xffff;
    puVar5 = &DAT_1039cb30;
    if (7 < DAT_1039cb44) {
      puVar5 = DAT_1039cb30;
    }
    local_2c = FUN_10228d20(puVar5,&local_58,3,0xffffffff);
    FUN_100025ec(local_2c,&local_58);
    iVar2 = local_2c;
    local_5c = FUN_10002303();
    iVar1 = local_34;
    local_60 = iVar2;
    if (local_34 == 0) {
      if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1000227a("exists",&local_60,&DAT_1039cb30);
      }
    }
    else {
      FUN_10002303();
      puVar3 = local_28;
      puVar4 = local_24;
      if (iVar1 != 1) goto code_r0x100727b4;
    }
    local_58 = 0;
    local_54 = FUN_10002303();
    FUN_1006cb64(&DAT_1039cb30,&local_58);
    puVar3 = local_28;
    puVar4 = local_24;
    if (local_58 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1000227a("create_directories",&local_58,&DAT_1039cb30);
    }
  }
code_r0x100727b4:
  local_24 = puVar4;
  local_28 = puVar3;
  FUN_1006ad36(&local_58);
  local_18 = 0;
  FUN_10001cfb(param_2,&DAT_1039cb30,&local_58);
  local_18 = 0xffffffff;
  FUN_10001f04();
  *unaff_FS_OFFSET = local_20;
  return param_2;
}

