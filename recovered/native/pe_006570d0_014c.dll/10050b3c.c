/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10050b3c */

undefined4 __thiscall FUN_10050b3c(int param_1,uint param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  undefined1 local_7c [28];
  undefined1 local_60 [24];
  undefined1 local_48 [24];
  undefined1 local_30 [4];
  undefined4 local_2c;
  byte *local_28;
  undefined1 local_21;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = local_7c;
  local_14 = 0xffffffff;
  local_18 = &LAB_1005a910;
  local_1c = ExceptionList;
  ExceptionList = &local_1c;
  local_21 = FUN_100510b2(*(int *)(param_1 + 8) - *(int *)(param_1 + 4) >> 2,2,param_1 + 0x68);
  uVar1 = *(uint *)(param_1 + 0x1c);
  uVar4 = 1;
  FUN_1001f6b2(local_48,((int)uVar1 >> 0x1f & 0xe0000000U) +
                        (uVar1 >> 5) * 4 + *(int *)(param_1 + 0x10),uVar1 & 0x1f,1,&local_21);
  local_48[0] = 2;
  FUN_100510fe(local_30,local_48,1);
  puVar2 = *(undefined4 **)(param_1 + 8);
  if (puVar2 == *(undefined4 **)(param_1 + 0xc)) {
    FUN_10051662(puVar2,&local_2c);
    iVar3 = *(int *)(param_1 + 8);
  }
  else {
    *puVar2 = local_2c;
    iVar3 = *(int *)(param_1 + 8) + 4;
    *(int *)(param_1 + 8) = iVar3;
  }
  if ((param_2 != 0xffffffff) && (local_28 = *(byte **)(iVar3 + -4), local_28 != (byte *)0x0)) {
    if (*local_28 < 3) {
      uVar4 = *(uint *)(&DAT_1028f50c + (uint)*local_28 * 4);
    }
    if (uVar4 < param_2) {
      FUN_10051841(local_60,param_2);
      local_14 = 0;
      FUN_10051427(local_48,"excessive array size: ",local_60);
      local_14 = 1;
      FUN_10050e0e(local_7c,0x198,local_48,local_28);
                    /* WARNING: Subroutine does not return */
      FUN_102586e0(local_7c,&DAT_103607ec);
    }
  }
  ExceptionList = local_1c;
  return 1;
}

