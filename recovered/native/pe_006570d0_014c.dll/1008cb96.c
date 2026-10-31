/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1008cb96 */

void FUN_1008cb96(char *param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  undefined1 local_58 [28];
  undefined1 local_3c [24];
  undefined4 local_24;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = local_58;
  local_14 = 0xffffffff;
  local_18 = &LAB_100c3740;
  local_1c = ExceptionList;
  if (*param_1 != '\x03') {
    ExceptionList = &local_1c;
    local_24 = FUN_10087286();
    FUN_10017682(local_3c,"type must be string, but is ",&local_24);
    local_14 = 0;
    FUN_10017546(local_58,0x12e,local_3c,param_1);
                    /* WARNING: Subroutine does not return */
    FUN_102586e0(local_58,&DAT_1036074c);
  }
  piVar2 = *(int **)(param_1 + 8);
  if ((int *)param_2 != piVar2) {
    piVar1 = piVar2 + 4;
    if (0xf < (uint)piVar2[5]) {
      piVar2 = (int *)*piVar2;
    }
    ExceptionList = &local_1c;
    local_20 = local_58;
    FUN_100180a6(piVar2,*piVar1);
    ExceptionList = local_1c;
  }
  return;
}

