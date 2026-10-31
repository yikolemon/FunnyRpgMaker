/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100754c0 */

void FUN_100754c0(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int *unaff_FS_OFFSET;
  undefined1 auStack_98 [4];
  undefined1 *local_94;
  int local_90;
  undefined4 local_8c;
  int local_88 [6];
  undefined1 local_70 [8];
  undefined4 local_68;
  undefined1 local_4c [36];
  undefined1 *local_28;
  undefined1 *local_24;
  int local_20;
  undefined1 *local_1c;
  undefined4 local_18;
  
  local_28 = &stack0xfffffffc;
  local_24 = auStack_98;
  local_18 = 0xffffffff;
  local_1c = &LAB_100c2ad0;
  local_20 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_20;
  FUN_10002303();
  local_88[0] = 0;
  local_88[1] = 0xffff;
  puVar2 = param_1;
  if (7 < (uint)param_1[5]) {
    puVar2 = (undefined4 *)*param_1;
  }
  local_88[2] = FUN_10228d20(puVar2,local_70,3,0xffffffff);
  FUN_100025ec(local_88[2],local_70);
  iVar1 = local_88[2];
  local_8c = FUN_10002303();
  iVar3 = local_88[0];
  local_90 = iVar1;
  if (local_88[0] == 0) {
    if (iVar1 == 0) goto LAB_100755ae;
  }
  else {
    FUN_10002303();
    if (iVar3 == 1) {
LAB_100755ae:
      FUN_10003728(param_1);
      local_18 = 0;
      FUN_10075656(local_70,L"File does not exist: ",local_88);
      local_18 = 1;
      FUN_100756a4(local_70);
                    /* WARNING: Subroutine does not return */
      FUN_102586e0(local_4c,&DAT_10367d38);
    }
    puVar2 = param_1;
    if (7 < (uint)param_1[5]) {
      puVar2 = (undefined4 *)*param_1;
    }
    iVar3 = FUN_10228d20(puVar2,local_70,9,0xffffffff);
    if (iVar3 == 0) {
      *(undefined4 *)(local_94 + 0x18) = local_68;
      FUN_1007592e(param_1);
      *(undefined4 *)(local_94 + 0x14) = *param_2;
      *local_94 = 1;
      *unaff_FS_OFFSET = local_20;
      return;
    }
    FUN_1006cded("file_size",iVar3,param_1);
  }
                    /* WARNING: Subroutine does not return */
  FUN_1000227a("exists",&local_90,param_1);
}

