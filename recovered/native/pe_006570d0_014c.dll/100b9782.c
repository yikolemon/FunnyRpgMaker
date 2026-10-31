/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100b9782 */

void __thiscall FUN_100b9782(int param_1,uint param_2,undefined4 *param_3,undefined4 *param_4)

{
  int iVar1;
  undefined4 uVar2;
  int local_28;
  int local_24;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_28;
  local_14 = 0xffffffff;
  local_18 = &LAB_100c4b90;
  local_1c = ExceptionList;
  if (param_2 != 0) {
    ExceptionList = &local_1c;
    if (0x9249249 < param_2) {
                    /* WARNING: Subroutine does not return */
      FUN_10016590();
    }
    local_20 = (undefined1 *)&local_28;
    iVar1 = (*DAT_1039c960)(param_2 * 0x1c,1);
    *(int *)(param_1 + 4) = iVar1;
    *(int *)(param_1 + 8) = iVar1;
    *(uint *)(param_1 + 0xc) = param_2 * 0x1c + iVar1;
    local_14 = 0;
    local_28 = param_1;
    local_24 = param_1;
    uVar2 = FUN_100b984d(*param_3,*param_4,iVar1,param_1);
    *(undefined4 *)(local_28 + 8) = uVar2;
  }
  ExceptionList = local_1c;
  return;
}

