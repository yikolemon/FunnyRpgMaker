/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10042356 */

void __thiscall FUN_10042356(undefined4 *param_1,uint param_2,undefined4 *param_3,int *param_4)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined1 local_24 [4];
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = local_24;
  local_14 = 0xffffffff;
  local_18 = &LAB_1005a460;
  local_1c = ExceptionList;
  if (param_2 != 0) {
    ExceptionList = &local_1c;
    if (0x1fffffff < param_2) {
                    /* WARNING: Subroutine does not return */
      FUN_10016590();
    }
    local_20 = local_24;
    FUN_1004242a(param_2);
    puVar3 = (undefined4 *)*param_1;
    puVar2 = (undefined4 *)*param_4;
    for (param_3 = (undefined4 *)*param_3; param_3 != puVar2; param_3 = param_3 + 2) {
      *puVar3 = 0;
      puVar3[1] = 0;
      if (param_3[1] != 0) {
        LOCK();
        piVar1 = (int *)(param_3[1] + 4);
        *piVar1 = *piVar1 + 1;
        UNLOCK();
      }
      *puVar3 = *param_3;
      puVar3[1] = param_3[1];
      puVar3 = puVar3 + 2;
    }
    param_1[1] = puVar3;
  }
  ExceptionList = local_1c;
  return;
}

