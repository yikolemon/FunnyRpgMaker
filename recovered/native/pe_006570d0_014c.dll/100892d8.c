/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100892d8 */

undefined4 __thiscall FUN_100892d8(int param_1,uint param_2)

{
  char cVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined1 local_70 [28];
  undefined1 local_54 [24];
  undefined4 local_3c [6];
  undefined4 local_24;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = local_70;
  local_14 = 0xffffffff;
  local_18 = &LAB_100c3460;
  local_1c = ExceptionList;
  local_54[0] = 1;
  ExceptionList = &local_1c;
  local_3c[0] = FUN_10089534(local_54);
  puVar2 = *(undefined4 **)(param_1 + 8);
  if (puVar2 == *(undefined4 **)(param_1 + 0xc)) {
    FUN_10051662(puVar2,local_3c);
  }
  else {
    *puVar2 = local_3c[0];
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 4;
  }
  if (param_2 != 0xffffffff) {
    cVar1 = **(char **)(*(int *)(param_1 + 8) + -4);
    if (cVar1 == '\x02') {
      uVar3 = 0xfffffff;
    }
    else if (cVar1 == '\x01') {
      uVar3 = 0x6666666;
    }
    else {
      uVar3 = FUN_10086870();
    }
    if (uVar3 < param_2) {
      local_24 = *(undefined4 *)(*(int *)(param_1 + 8) + -4);
      FUN_10051841(local_54,param_2);
      local_14 = 0;
      FUN_10051427(local_3c,"excessive object size: ",local_54);
      local_14 = 1;
      FUN_10050e0e(local_70,0x198,local_3c,local_24);
                    /* WARNING: Subroutine does not return */
      FUN_102586e0(local_70,&DAT_103607ec);
    }
  }
  ExceptionList = local_1c;
  return 1;
}

