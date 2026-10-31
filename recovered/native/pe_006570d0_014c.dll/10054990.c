/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10054990 */

undefined4 __thiscall FUN_10054990(int param_1,uint param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined1 local_70 [28];
  undefined1 local_54 [24];
  undefined4 local_3c [6];
  byte *local_24;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = local_70;
  local_14 = 0xffffffff;
  local_18 = &LAB_1005aba0;
  local_1c = ExceptionList;
  local_54[0] = 2;
  ExceptionList = &local_1c;
  local_3c[0] = FUN_10054b04(local_54);
  puVar1 = *(undefined4 **)(param_1 + 8);
  if (puVar1 == *(undefined4 **)(param_1 + 0xc)) {
    FUN_10051662(puVar1,local_3c);
  }
  else {
    *puVar1 = local_3c[0];
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 4;
  }
  if (param_2 != 0xffffffff) {
    local_24 = *(byte **)(*(int *)(param_1 + 8) + -4);
    if (*local_24 < 3) {
      uVar2 = *(uint *)(&DAT_1028f50c + (uint)*local_24 * 4);
    }
    else {
      uVar2 = 1;
    }
    if (uVar2 < param_2) {
      FUN_10051841(local_54,param_2);
      local_14 = 0;
      FUN_10051427(local_3c,"excessive array size: ",local_54);
      local_14 = 1;
      FUN_10050e0e(local_70,0x198,local_3c,local_24);
                    /* WARNING: Subroutine does not return */
      FUN_102586e0(local_70,&DAT_103607ec);
    }
  }
  ExceptionList = local_1c;
  return 1;
}

