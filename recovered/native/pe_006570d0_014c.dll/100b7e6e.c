/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100b7e6e */

void __thiscall FUN_100b7e6e(int *param_1,uint param_2,undefined4 *param_3,undefined4 *param_4)

{
  int iVar1;
  int *local_28;
  int *local_24;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_28;
  local_14 = 0xffffffff;
  local_18 = &LAB_100c4b10;
  local_1c = ExceptionList;
  if (param_2 != 0) {
    ExceptionList = &local_1c;
    if (0xaaaaaaa < param_2) {
                    /* WARNING: Subroutine does not return */
      FUN_10016590();
    }
    local_20 = (undefined1 *)&local_28;
    iVar1 = (*DAT_1039c960)(param_2 * 0x18,1);
    *param_1 = iVar1;
    param_1[1] = iVar1;
    param_1[2] = param_2 * 0x18 + iVar1;
    local_14 = 0;
    local_28 = param_1;
    local_24 = param_1;
    iVar1 = FUN_100b7f37(*param_3,*param_4,iVar1,param_1);
    local_28[1] = iVar1;
  }
  ExceptionList = local_1c;
  return;
}

