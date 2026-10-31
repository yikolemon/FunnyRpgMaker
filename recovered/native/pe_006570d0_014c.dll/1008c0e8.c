/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1008c0e8 */

int __fastcall FUN_1008c0e8(char *param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  char cVar3;
  undefined4 uVar4;
  undefined1 auStack_70 [4];
  char *local_6c;
  int local_68 [2];
  undefined1 local_60 [28];
  undefined1 local_44 [28];
  undefined1 *local_28;
  undefined1 *local_24;
  void *local_20;
  undefined1 *local_1c;
  undefined4 local_18;
  
  local_28 = &stack0xfffffffc;
  local_24 = auStack_70;
  local_1c = &LAB_100c3680;
  local_20 = ExceptionList;
  local_18 = 0;
  cVar3 = *param_1;
  ExceptionList = &local_20;
  puVar1 = &stack0xfffffffc;
  puVar2 = auStack_70;
  if (cVar3 == '\0') {
    *param_1 = '\x01';
    local_6c = param_1;
    uVar4 = FUN_10080f6c();
    *(undefined4 *)(local_6c + 8) = uVar4;
    cVar3 = *local_6c;
    param_1 = local_6c;
    puVar1 = local_28;
    puVar2 = local_24;
  }
  local_24 = puVar2;
  local_28 = puVar1;
  if (cVar3 == '\x01') {
    FUN_10080804(0);
    local_18 = 2;
    FUN_100879de(local_68,&stack0x00000004,local_60);
    local_18 = 0xffffffff;
    FUN_1007f222();
    FUN_10001fee();
    ExceptionList = local_20;
    return local_68[0] + 0x18;
  }
  local_6c = param_1;
  local_68[0] = FUN_10087286();
  FUN_10017682(local_60,"cannot use operator[] with a string argument with ",local_68);
  local_18 = 1;
  FUN_10017546(local_44,0x131,local_60,local_6c);
                    /* WARNING: Subroutine does not return */
  FUN_102586e0(local_44,&DAT_1036074c);
}

