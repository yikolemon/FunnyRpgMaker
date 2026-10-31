/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100869ec */

char * __fastcall FUN_100869ec(undefined4 *param_1)

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
  local_18 = &LAB_100c3280;
  local_1c = ExceptionList;
  pcVar1 = (char *)*param_1;
  if (*pcVar1 == '\x02') {
    pcVar1 = (char *)param_1[2];
  }
  else if (*pcVar1 == '\x01') {
    pcVar1 = (char *)(param_1[1] + 0x18);
  }
  else if (param_1[3] != 0) {
    ExceptionList = &local_1c;
    FUN_10001f66("cannot get value");
    local_14 = 0;
    FUN_10051cd6(local_54,0xd6,local_38,pcVar1);
                    /* WARNING: Subroutine does not return */
    FUN_102586e0(local_54,&DAT_1036082c);
  }
  return pcVar1;
}

