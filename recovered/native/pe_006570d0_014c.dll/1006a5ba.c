/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1006a5ba */

undefined4 * FUN_1006a5ba(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int *unaff_FS_OFFSET;
  undefined8 uVar3;
  int local_2c;
  undefined4 local_28;
  int local_24;
  undefined1 *local_20;
  int local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_2c;
  local_14 = 0xffffffff;
  local_18 = &LAB_100c23d0;
  local_1c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_1c;
  FUN_10002303();
  FUN_10002eb6();
  local_14 = 0;
  FUN_10004c42(0x105,0);
  puVar1 = param_1;
  if (7 < (uint)param_1[5]) {
    puVar1 = (undefined4 *)*param_1;
  }
  uVar3 = FUN_102291f0(puVar1);
  local_24 = (int)((ulonglong)uVar3 >> 0x20);
  FUN_10004c42((int)uVar3,0);
  iVar2 = local_24;
  if (local_24 == -1) {
    iVar2 = 0x14;
    local_28 = FUN_100025af();
  }
  else {
    local_28 = FUN_10002303();
  }
  local_14 = 1;
  if (iVar2 == 0) {
    *unaff_FS_OFFSET = local_1c;
    return param_1;
  }
  local_2c = iVar2;
                    /* WARNING: Subroutine does not return */
  FUN_1000227a("temp_directory_path",&local_2c,param_1);
}

