/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100d9481 */

void FUN_100d9481(char *param_1,int *param_2)

{
  int *piVar1;
  undefined1 local_58 [28];
  undefined1 local_3c [24];
  undefined4 local_24;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = local_58;
  local_14 = 0xffffffff;
  local_18 = &LAB_100ddff0;
  local_1c = ExceptionList;
  if (*param_1 != '\x02') {
    ExceptionList = &local_1c;
    local_24 = FUN_1001776c();
    FUN_10017682(local_3c,"type must be array, but is ",&local_24);
    local_14 = 0;
    FUN_10017546(local_58,0x12e,local_3c,param_1);
                    /* WARNING: Subroutine does not return */
    FUN_102586e0(local_58,&DAT_1036074c);
  }
  piVar1 = *(int **)(param_1 + 8);
  if (piVar1 != param_2) {
    ExceptionList = &local_1c;
    local_20 = local_58;
    FUN_100d954e(*piVar1,piVar1[1] - *piVar1 >> 4);
    ExceptionList = local_1c;
  }
  return;
}

