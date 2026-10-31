/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1008c5a4 */

int __thiscall FUN_1008c5a4(char *param_1,int param_2)

{
  undefined1 local_58 [28];
  undefined1 local_3c [24];
  undefined4 local_24;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = local_58;
  local_14 = 0xffffffff;
  local_18 = &LAB_100c36c0;
  local_1c = ExceptionList;
  if (*param_1 == '\x02') {
    return param_2 * 0x10 + **(int **)(param_1 + 8);
  }
  ExceptionList = &local_1c;
  local_24 = FUN_10087286();
  FUN_10017682(local_3c,"cannot use operator[] with a numeric argument with ",&local_24);
  local_14 = 0;
  FUN_10017546(local_58,0x131,local_3c,param_1);
                    /* WARNING: Subroutine does not return */
  FUN_102586e0(local_58,&DAT_1036074c);
}

