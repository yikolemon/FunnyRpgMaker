/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100cbf67 */

void FUN_100cbf67(int *param_1)

{
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  char local_28;
  char local_21;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_38;
  local_14 = 0xffffffff;
  local_18 = &LAB_100cc580;
  local_1c = ExceptionList;
  local_34 = *param_1;
  local_38 = local_34 + 0xc;
  local_30 = local_34 + 0x3c;
  ExceptionList = &local_1c;
  do {
    local_2c = local_38;
    local_28 = 0;
    FUN_100446d6();
    local_28 = '\x01';
    local_14 = 0;
    local_21 = FUN_100cc04e(&local_2c,param_1[0xc],param_1[0xd],local_34);
    if (local_21 == '\0') {
      if ((int *)param_1[0xb] == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_10228590();
      }
      (**(code **)(*(int *)param_1[0xb] + 8))();
    }
    local_14 = 0xffffffff;
    if (local_28 == '\x01') {
      FUN_1022c200(local_2c);
    }
  } while (local_21 == '\0');
  ExceptionList = local_1c;
  return;
}

