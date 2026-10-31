/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100dc006 */

int __thiscall FUN_100dc006(char *param_1,undefined4 param_2)

{
  int iVar1;
  undefined1 local_58 [28];
  undefined1 local_3c [24];
  undefined4 local_24;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = local_58;
  local_14 = 0xffffffff;
  local_18 = &LAB_100de0a0;
  local_1c = ExceptionList;
  ExceptionList = &local_1c;
  if (*param_1 == '\x01') {
    local_20 = local_58;
    iVar1 = FUN_100dc0ba(param_2);
    ExceptionList = local_1c;
    return iVar1 + 0x28;
  }
  local_24 = FUN_1001776c();
  FUN_10017682(local_3c,"cannot use operator[] with a string argument with ",&local_24);
  local_14 = 0;
  FUN_10017546(local_58,0x131,local_3c,param_1);
                    /* WARNING: Subroutine does not return */
  FUN_102586e0(local_58,&DAT_1036074c);
}

