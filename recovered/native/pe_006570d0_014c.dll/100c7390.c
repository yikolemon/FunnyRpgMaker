/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100c7390 */

void __thiscall FUN_100c7390(undefined4 *param_1,int *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 uVar3;
  undefined4 local_34;
  undefined4 local_30;
  int local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_34;
  local_14 = 0xffffffff;
  local_18 = &LAB_100c7ec0;
  local_1c = ExceptionList;
  ExceptionList = &local_1c;
  FUN_100c7474(&local_34,param_3);
  local_28 = local_34;
  local_24 = local_30;
  if (*(char *)(local_2c + 0xd) == '\0') {
    iVar2 = FUN_100915e6(local_2c + 0x10);
    if (-1 < iVar2) {
      uVar3 = 0;
      goto code_r0x100c743f;
    }
  }
  if (param_1[1] == 0x6666666) {
                    /* WARNING: Subroutine does not return */
    FUN_1005283a();
  }
  FUN_100c74ca(param_1,*param_1,param_3);
  uVar1 = local_30;
  local_30 = 0;
  local_14 = 0xffffffff;
  FUN_100c75a8();
  local_2c = FUN_1005271c(local_28,local_24,uVar1);
  uVar3 = 1;
code_r0x100c743f:
  *param_2 = local_2c;
  *(undefined1 *)(param_2 + 1) = uVar3;
  ExceptionList = local_1c;
  return;
}

