/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10251ee0 */

void FUN_10251ee0(int *param_1,int param_2,int param_3,int param_4,char param_5,undefined4 param_6,
                 undefined4 param_7,uint *param_8,undefined4 *param_9)

{
  uint *puVar1;
  undefined4 *puVar2;
  char ****ppppcVar3;
  undefined4 *puVar4;
  uint uVar5;
  undefined1 *puStack_50;
  uint uStack_4c;
  char ***local_38 [4];
  uint local_28;
  uint local_24;
  undefined1 local_20 [10];
  undefined1 local_16;
  uint local_14;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puVar2 = param_9;
  puVar1 = param_8;
  local_8 = 0xffffffff;
  puStack_c = &DAT_1028a3dd;
  local_10 = ExceptionList;
  uStack_4c = DAT_10388d00 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  puStack_50 = local_20;
  local_14 = uStack_4c;
  FUN_10252020(local_38,&param_2,&param_4,param_6,param_7);
  local_8 = 0;
  if ((char)param_3 == '\0') {
    FUN_100e1fa2();
  }
  if (param_5 == '\0') {
    FUN_100e1fa2();
  }
  if (param_2 == 0) {
    if (param_4 != 0) goto LAB_10251f70;
  }
  else if (param_4 == 0) goto LAB_10251f70;
  *puVar1 = *puVar1 | 1;
LAB_10251f70:
  if (local_28 == 0) {
    *puVar1 = *puVar1 | 2;
  }
  else {
    uVar5 = 0;
    if ((uint)puVar2[4] < local_28) {
      FUN_10003b26(local_28 - puVar2[4],0);
    }
    else {
      FUN_1022dcf0(local_28);
    }
    ppppcVar3 = local_38;
    if (0xf < local_24) {
      ppppcVar3 = (char ****)local_38[0];
    }
    if (*(char *)ppppcVar3 == '-') {
      puVar4 = puVar2;
      if (0xf < (uint)puVar2[5]) {
        puVar4 = (undefined4 *)*puVar2;
      }
      *(undefined1 *)puVar4 = local_16;
      uVar5 = 1;
    }
    for (; uVar5 < local_28; uVar5 = uVar5 + 1) {
      ppppcVar3 = local_38;
      if (0xf < local_24) {
        ppppcVar3 = (char ****)local_38[0];
      }
      puVar4 = puVar2;
      if (0xf < (uint)puVar2[5]) {
        puVar4 = (undefined4 *)*puVar2;
      }
      *(undefined1 *)((int)puVar4 + uVar5) =
           *(undefined1 *)((int)&puStack_50 + (int)*(char *)((int)ppppcVar3 + uVar5));
    }
  }
  *param_1 = param_2;
  param_1[1] = param_3;
  FUN_10004e60();
  ExceptionList = local_10;
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

