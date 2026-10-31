/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10005bdc */

undefined4 *
FUN_10005bdc(undefined4 *param_1,undefined4 param_2,int param_3,int param_4,int param_5)

{
  uint uVar1;
  undefined1 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined1 local_24 [4];
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = local_24;
  local_18 = &LAB_100129a0;
  local_1c = ExceptionList;
  iVar3 = 0;
  ExceptionList = &local_1c;
  param_1[4] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[5] = 0xf;
  if (param_4 != 0) {
    iVar3 = 0;
    iVar4 = 0;
    do {
      uVar1 = *(uint *)(param_5 + iVar4 * 4);
      uVar6 = uVar1 >> 0x1c;
      if (uVar6 == 0xb) {
        iVar5 = 0x20;
      }
      else if (uVar6 == 0xc) {
        iVar5 = *(int *)(param_5 + param_4 * 4 + 4 + (uVar1 & 0xfffffff));
      }
      else {
        iVar5 = 8;
      }
      iVar3 = iVar3 + iVar5;
      iVar4 = iVar4 + 1;
    } while (param_4 != iVar4);
  }
  local_14 = 0;
  puVar2 = local_24;
  if (0xf < (uint)(iVar3 + param_3)) {
    FUN_10003cd4(iVar3 + param_3,local_24[0]);
    param_1[4] = 0;
    puVar2 = local_20;
  }
  local_20 = puVar2;
  FUN_10005cfb(local_24,param_1,param_2,param_3,param_4,param_5);
  ExceptionList = local_1c;
  return param_1;
}

