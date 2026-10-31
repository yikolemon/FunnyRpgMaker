/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100dc366 */

char * __fastcall FUN_100dc366(undefined4 *param_1)

{
  char cVar1;
  char *pcVar2;
  undefined1 local_70 [28];
  undefined1 local_54 [28];
  undefined1 local_38 [24];
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = local_70;
  local_14 = 0xffffffff;
  local_18 = &LAB_100de0e0;
  local_1c = ExceptionList;
  pcVar2 = (char *)*param_1;
  cVar1 = *pcVar2;
  if (cVar1 == '\x01') {
    pcVar2 = (char *)(param_1[1] + 0x28);
  }
  else if (cVar1 == '\x02') {
    pcVar2 = (char *)param_1[2];
  }
  else {
    if (cVar1 == '\0') {
      ExceptionList = &local_1c;
      FUN_10001f66("cannot get value");
      local_14 = 0;
      FUN_10051cd6(local_70,0xd6,local_38,pcVar2);
                    /* WARNING: Subroutine does not return */
      FUN_102586e0(local_70,&DAT_1036082c);
    }
    if (param_1[3] != 0) {
      ExceptionList = &local_1c;
      local_20 = local_70;
      FUN_10001f66("cannot get value");
      local_14 = 1;
      FUN_10051cd6(local_54,0xd6,local_38,pcVar2);
                    /* WARNING: Subroutine does not return */
      FUN_102586e0(local_54,&DAT_1036082c);
    }
  }
  return pcVar2;
}

