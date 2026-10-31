/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1008ca38 */

int __thiscall FUN_1008ca38(char *param_1,undefined4 param_2)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined1 local_58 [28];
  undefined1 local_3c [24];
  undefined4 local_24;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = local_58;
  local_14 = 0xffffffff;
  local_18 = &LAB_100c3720;
  local_1c = ExceptionList;
  ExceptionList = &local_1c;
  if (*param_1 != '\x01') {
    local_24 = FUN_10087286();
    FUN_10017682(local_3c,"cannot use operator[] with a string argument with ",&local_24);
    local_14 = 0;
    FUN_10017546(local_58,0x131,local_3c,param_1);
                    /* WARNING: Subroutine does not return */
    FUN_102586e0(local_58,&DAT_1036074c);
  }
  piVar1 = *(int **)(param_1 + 8);
  iVar3 = piVar1[1];
  iVar4 = *piVar1;
  local_20 = local_58;
  if (*piVar1 != iVar3) {
    do {
      iVar3 = iVar4;
      cVar2 = FUN_1001bb3a(param_2);
      if (cVar2 != '\0') break;
      iVar4 = iVar3 + 0x28;
      iVar3 = piVar1[1];
    } while (iVar4 != iVar3);
  }
  ExceptionList = local_1c;
  return iVar3 + 0x18;
}

