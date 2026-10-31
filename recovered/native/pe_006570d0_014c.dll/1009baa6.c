/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1009baa6 */

void __thiscall FUN_1009baa6(int *param_1,uint param_2)

{
  int iVar1;
  int *local_20;
  undefined1 *local_1c;
  void *local_18;
  undefined1 *local_14;
  undefined4 local_10;
  
  local_1c = (undefined1 *)&local_20;
  local_10 = 0xffffffff;
  local_14 = &LAB_100c3d50;
  local_18 = ExceptionList;
  if (param_2 != 0) {
    ExceptionList = &local_18;
    if (0x3fffffff < param_2) {
                    /* WARNING: Subroutine does not return */
      FUN_10016590();
    }
    local_1c = (undefined1 *)&local_20;
    FUN_10061bba(param_2);
    local_10 = 0;
    iVar1 = *param_1 + param_2 * 4;
    local_20 = param_1;
    FUN_1001659a(*param_1,iVar1);
    param_1[1] = iVar1;
  }
  ExceptionList = local_18;
  return;
}

