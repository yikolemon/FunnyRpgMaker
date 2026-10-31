/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100672c2 */

int * __thiscall
FUN_100672c2(undefined4 *param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  bool bVar1;
  int iVar2;
  undefined4 local_44;
  undefined4 local_40;
  int local_3c;
  undefined4 local_38;
  undefined4 local_34;
  int local_30;
  int local_28;
  undefined4 *local_24;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_44;
  local_14 = 0xffffffff;
  local_18 = &LAB_100c2250;
  local_1c = ExceptionList;
  ExceptionList = &local_1c;
  local_24 = param_1;
  FUN_100673ce(param_1,*param_1,param_3,param_4);
  local_14 = 0;
  local_30 = local_28 + 0x10;
  FUN_10052556(&local_44,local_30);
  local_38 = local_44;
  local_34 = local_40;
  if (*(char *)(local_3c + 0xd) == '\0') {
    iVar2 = FUN_1001baf4(local_3c + 0x10);
    if (-1 < iVar2) {
      *param_2 = local_3c;
      *(undefined1 *)(param_2 + 1) = 0;
      bVar1 = true;
      iVar2 = local_3c;
      goto code_r0x10067375;
    }
  }
  iVar2 = local_28;
  if (local_24[1] == 0x3ffffff) {
                    /* WARNING: Subroutine does not return */
    FUN_1005283a();
  }
  local_28 = 0;
  bVar1 = false;
code_r0x10067375:
  local_14 = 0xffffffff;
  FUN_1006748c();
  if (!bVar1) {
    iVar2 = FUN_1005271c(local_38,local_34,iVar2);
    *param_2 = iVar2;
    *(undefined1 *)(param_2 + 1) = 1;
  }
  ExceptionList = local_1c;
  return param_2;
}

