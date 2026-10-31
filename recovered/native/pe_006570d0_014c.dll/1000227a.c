/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1000227a */

void FUN_1000227a(undefined4 param_1,undefined4 *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined1 local_94 [92];
  undefined1 local_38 [24];
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = local_94;
  local_14 = 0xffffffff;
  local_18 = &LAB_10004fe0;
  local_1c = ExceptionList;
  uVar1 = *param_2;
  uVar2 = param_2[1];
  ExceptionList = &local_1c;
  FUN_10001f66(param_1);
  local_14 = 0;
  FUN_10002688(local_38,param_3,uVar1,uVar2);
                    /* WARNING: Subroutine does not return */
  FUN_102586e0(local_94,&DAT_1035f758);
}

