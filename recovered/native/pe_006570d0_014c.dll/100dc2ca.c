/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100dc2ca */

int __fastcall FUN_100dc2ca(undefined4 *param_1)

{
  char *pcVar1;
  undefined1 local_54 [28];
  undefined1 local_38 [24];
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = local_54;
  local_14 = 0xffffffff;
  local_18 = &LAB_100de0d0;
  local_1c = ExceptionList;
  pcVar1 = (char *)*param_1;
  if (*pcVar1 == '\x01') {
    return param_1[1] + 0x10;
  }
  ExceptionList = &local_1c;
  FUN_10001f66("cannot use key() for non-object iterators");
  local_14 = 0;
  FUN_10051cd6(local_54,0xcf,local_38,pcVar1);
                    /* WARNING: Subroutine does not return */
  FUN_102586e0(local_54,&DAT_1036082c);
}

