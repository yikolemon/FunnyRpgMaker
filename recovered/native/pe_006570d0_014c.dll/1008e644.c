/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1008e644 */

void __thiscall FUN_1008e644(char *param_1,undefined4 param_2)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  undefined1 local_58 [28];
  undefined1 local_3c [24];
  undefined4 local_24;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = local_58;
  local_14 = 0xffffffff;
  local_18 = &LAB_100c37f0;
  local_1c = ExceptionList;
  ExceptionList = &local_1c;
  if (*param_1 == '\0') {
    *param_1 = '\x02';
    local_20 = local_58;
    uVar2 = FUN_10058350();
    *(undefined4 *)(param_1 + 8) = uVar2;
    puVar1 = local_20;
  }
  else {
    puVar1 = local_58;
    if (*param_1 != '\x02') {
      local_24 = FUN_10087286();
      FUN_10017682(local_3c,"cannot use push_back() with ",&local_24);
      local_14 = 0;
      FUN_10017546(local_58,0x134,local_3c,param_1);
                    /* WARNING: Subroutine does not return */
      FUN_102586e0(local_58,&DAT_1036074c);
    }
  }
  local_20 = puVar1;
  FUN_1008e70c(param_2);
  ExceptionList = local_1c;
  return;
}

