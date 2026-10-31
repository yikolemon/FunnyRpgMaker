/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100729e8 */

undefined4 * __thiscall
FUN_100729e8(undefined4 *param_1,undefined4 *param_2,uint param_3,uint param_4)

{
  uint uVar1;
  undefined4 *local_24;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_24;
  local_18 = &LAB_100c2890;
  local_1c = ExceptionList;
  ExceptionList = &local_1c;
  *(undefined8 *)(param_1 + 4) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  local_14 = 0;
  uVar1 = param_2[4] - param_3;
  if (param_3 <= (uint)param_2[4]) {
    if (uVar1 < param_4) {
      param_4 = uVar1;
    }
    if (0xf < (uint)param_2[5]) {
      param_2 = (undefined4 *)*param_2;
    }
    local_24 = param_1;
    local_20 = (undefined1 *)&local_24;
    FUN_1000254c((int)param_2 + param_3,param_4);
    ExceptionList = local_1c;
    return local_24;
  }
                    /* WARNING: Subroutine does not return */
  FUN_100047d6();
}

