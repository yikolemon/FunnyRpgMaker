/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100d90c8 */

int __thiscall FUN_100d90c8(char *param_1,uint param_2)

{
  undefined1 *puVar1;
  char cVar2;
  undefined4 uVar3;
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
  local_18 = &LAB_100ddfc0;
  local_1c = ExceptionList;
  cVar2 = *param_1;
  ExceptionList = &local_1c;
  puVar1 = local_58;
  if (cVar2 == '\0') {
    *param_1 = '\x02';
    uVar3 = FUN_10058350();
    *(undefined4 *)(param_1 + 8) = uVar3;
    cVar2 = *param_1;
    puVar1 = local_20;
  }
  local_20 = puVar1;
  if (cVar2 == '\x02') {
    iVar4 = **(int **)(param_1 + 8);
    if ((uint)((*(int **)(param_1 + 8))[1] - iVar4 >> 4) <= param_2) {
      FUN_100d99de(param_2 + 1,local_3c);
      iVar4 = **(int **)(param_1 + 8);
    }
    ExceptionList = local_1c;
    return param_2 * 0x10 + iVar4;
  }
  local_24 = FUN_1001776c();
  FUN_10017682(local_3c,"cannot use operator[] with a numeric argument with ",&local_24);
  local_14 = 0;
  FUN_10017546(local_58,0x131,local_3c,param_1);
                    /* WARNING: Subroutine does not return */
  FUN_102586e0(local_58,&DAT_1036074c);
}

