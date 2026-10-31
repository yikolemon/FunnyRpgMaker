/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10055d48 */

int __fastcall FUN_10055d48(char *param_1)

{
  undefined1 *puVar1;
  char cVar2;
  undefined4 uVar3;
  undefined1 local_5c [28];
  int local_40 [6];
  undefined4 local_28;
  char *local_24;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = local_5c;
  local_18 = &LAB_1005ac90;
  local_1c = ExceptionList;
  local_14 = 0;
  cVar2 = *param_1;
  ExceptionList = &local_1c;
  puVar1 = local_5c;
  if (cVar2 == '\0') {
    *param_1 = '\x01';
    local_24 = param_1;
    uVar3 = FUN_10055e5c();
    *(undefined4 *)(local_24 + 8) = uVar3;
    cVar2 = *local_24;
    param_1 = local_24;
    puVar1 = local_20;
  }
  local_20 = puVar1;
  if (cVar2 == '\x01') {
    local_28 = 0;
    FUN_10055f76(local_40,&stack0x00000004,&local_28);
    local_14 = 0xffffffff;
    FUN_10001fee();
    ExceptionList = local_1c;
    return local_40[0] + 0x28;
  }
  local_24 = param_1;
  local_28 = FUN_1001776c();
  FUN_10017682(local_40,"cannot use operator[] with a string argument with ",&local_28);
  local_14 = 1;
  FUN_10017546(local_5c,0x131,local_40,local_24);
                    /* WARNING: Subroutine does not return */
  FUN_102586e0(local_5c,&DAT_1036074c);
}

