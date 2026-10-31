/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100d8b63 */

void FUN_100d8b63(char *param_1,longlong *param_2)

{
  longlong lVar1;
  char cVar2;
  undefined1 auStack_70 [16];
  undefined4 local_60;
  undefined1 local_5c [24];
  undefined1 local_44 [28];
  undefined1 *local_28;
  undefined1 *local_24;
  void *local_20;
  undefined1 *local_1c;
  undefined4 local_18;
  
  local_28 = &stack0xfffffffc;
  local_24 = auStack_70;
  local_18 = 0xffffffff;
  local_1c = &LAB_100ddfa0;
  local_20 = ExceptionList;
  cVar2 = *param_1;
  if (cVar2 == '\x05') {
    lVar1 = *(longlong *)(param_1 + 8);
  }
  else if (cVar2 == '\a') {
    lVar1 = (longlong)ROUND(*(double *)(param_1 + 8));
  }
  else {
    if (cVar2 != '\x06') {
      ExceptionList = &local_20;
      local_60 = FUN_1001776c();
      FUN_10017682(local_5c,"type must be number, but is ",&local_60);
      local_18 = 0;
      FUN_10017546(local_44,0x12e,local_5c,param_1);
                    /* WARNING: Subroutine does not return */
      FUN_102586e0(local_44,&DAT_1036074c);
    }
    lVar1 = *(longlong *)(param_1 + 8);
  }
  *param_2 = lVar1;
  return;
}

