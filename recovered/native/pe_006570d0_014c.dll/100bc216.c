/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100bc216 */

int * __thiscall FUN_100bc216(undefined4 *param_1,int *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 uVar3;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  int local_30;
  undefined4 local_28;
  undefined1 local_21;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_3c;
  local_14 = 0xffffffff;
  local_18 = &LAB_100c4c40;
  local_1c = ExceptionList;
  ExceptionList = &local_1c;
  FUN_10052556(&local_38,param_3);
  if (*(char *)(local_30 + 0xd) == '\0') {
    iVar2 = FUN_1001baf4(local_30 + 0x10);
    if (-1 < iVar2) {
      uVar3 = 0;
      goto code_r0x100bc2ce;
    }
  }
  if (param_1[1] == 0x3ffffff) {
                    /* WARNING: Subroutine does not return */
    FUN_1005283a();
  }
  local_3c = param_3;
  FUN_100bc304(param_1,*param_1,&DAT_102910a0,&local_3c,&local_21);
  uVar1 = local_28;
  local_28 = 0;
  local_14 = 0xffffffff;
  FUN_1006748c();
  local_30 = FUN_1005271c(local_38,local_34,uVar1);
  uVar3 = 1;
code_r0x100bc2ce:
  *param_2 = local_30;
  *(undefined1 *)(param_2 + 1) = uVar3;
  ExceptionList = local_1c;
  return param_2;
}

