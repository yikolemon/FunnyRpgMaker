/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1006dab1 */

void FUN_1006dab1(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int *unaff_FS_OFFSET;
  undefined1 local_94 [92];
  undefined1 local_38 [24];
  undefined1 *local_20;
  int local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = local_94;
  local_14 = 0xffffffff;
  local_18 = &LAB_100c26c0;
  local_1c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_1c;
  uVar1 = FUN_10002303();
  FUN_10001f66(param_1);
  local_14 = 0;
  FUN_1006db34(local_38,param_2,uVar1);
                    /* WARNING: Subroutine does not return */
  FUN_102586e0(local_94,&DAT_1035f758);
}

