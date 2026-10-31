/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100470ba */

int * FUN_100470ba(undefined4 param_1)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  int *unaff_FS_OFFSET;
  undefined1 local_30 [4];
  int *local_2c;
  int *local_28;
  int *local_24;
  undefined1 *local_20;
  int local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = local_30;
  local_14 = 0xffffffff;
  local_18 = &LAB_1005a6b0;
  local_1c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_1c;
  FUN_1022bea0(0);
  local_14 = 0;
  local_24 = DAT_1039c948;
  local_28 = DAT_1039c948;
  uVar1 = FUN_1000d88a();
  piVar2 = (int *)FUN_1000d916(uVar1);
  if ((piVar2 == (int *)0x0) && (piVar2 = local_24, local_24 == (int *)0x0)) {
    iVar3 = FUN_1004835c(&local_28,param_1);
    if (iVar3 == -1) {
                    /* WARNING: Subroutine does not return */
      FUN_1000da81();
    }
    local_14 = 1;
    local_2c = local_28;
    local_24 = local_28;
    FUN_1022b910(local_28);
    (**(code **)(*local_24 + 4))();
    DAT_1039c948 = local_28;
    local_2c = (int *)0x0;
    piVar2 = local_28;
  }
  local_14 = 0xffffffff;
  FUN_1022bee0();
  *unaff_FS_OFFSET = local_1c;
  return piVar2;
}

