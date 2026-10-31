/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1023b620 */

void FUN_1023b620(int *param_1,int param_2,int param_3,int param_4,char param_5,undefined4 param_6,
                 undefined4 param_7,uint *param_8,undefined4 *param_9)

{
  uint uVar1;
  uint *puVar2;
  undefined4 *puVar3;
  char ****ppppcVar4;
  undefined4 *puVar5;
  uint uVar6;
  undefined2 auStack_8c [4];
  undefined4 uStack_84;
  undefined4 *puStack_80;
  uint uStack_7c;
  uint uStack_78;
  uint uStack_74;
  char ***pppcStack_70;
  undefined4 *puStack_6c;
  undefined4 *puStack_68;
  undefined *puStack_64;
  undefined4 uStack_60;
  undefined1 *puStack_5c;
  uint uStack_58;
  char ***local_44 [4];
  uint local_34;
  uint local_30;
  undefined1 local_2c [20];
  undefined2 local_18;
  uint local_14;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puVar3 = param_9;
  puVar2 = param_8;
  local_8 = 0xffffffff;
  puStack_c = &DAT_10289d6d;
  local_10 = ExceptionList;
  uStack_58 = DAT_10388d00 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  puStack_5c = local_2c;
  uStack_60 = param_7;
  puStack_64 = (undefined *)param_6;
  puStack_68 = &param_4;
  puStack_6c = &param_2;
  pppcStack_70 = (char ***)local_44;
  uStack_74 = 0x1023b673;
  local_14 = uStack_58;
  FUN_1023b790();
  local_8 = 0;
  if ((char)param_3 == '\0') {
    uStack_74 = 0x1023b68b;
    FUN_1023b0c0();
  }
  if (param_5 == '\0') {
    uStack_74 = 0x1023b699;
    FUN_1023b0c0();
  }
  if (param_2 == 0) {
    if (param_4 != 0) goto LAB_1023b6b0;
  }
  else if (param_4 == 0) goto LAB_1023b6b0;
  *puVar2 = *puVar2 | 1;
LAB_1023b6b0:
  if (local_34 == 0) {
    *puVar2 = *puVar2 | 2;
  }
  else {
    uVar1 = puVar3[4];
    uVar6 = 0;
    if (uVar1 < local_34) {
      uStack_78 = local_34 - uVar1;
      uStack_74 = 0;
      uStack_7c = 0x1023b702;
      FUN_10004c70();
    }
    else {
      if (local_34 != uVar1) {
        uStack_7c = puVar3[5];
        puStack_80 = puVar3;
        if (7 < uStack_7c) {
          puStack_80 = (undefined4 *)*puVar3;
        }
        uStack_74 = local_34;
        uStack_84 = 0x1023b6dc;
        uStack_78 = uVar1;
        FUN_10236190();
      }
      puVar3[4] = local_34;
      puVar5 = puVar3;
      if (7 < (uint)puVar3[5]) {
        puVar5 = (undefined4 *)*puVar3;
      }
      *(undefined2 *)((int)puVar5 + local_34 * 2) = 0;
    }
    ppppcVar4 = local_44;
    if (0xf < local_30) {
      ppppcVar4 = (char ****)local_44[0];
    }
    if (*(char *)ppppcVar4 == '-') {
      puVar5 = puVar3;
      if (7 < (uint)puVar3[5]) {
        puVar5 = (undefined4 *)*puVar3;
      }
      *(undefined2 *)puVar5 = local_18;
      uVar6 = 1;
    }
    for (; uVar6 < local_34; uVar6 = uVar6 + 1) {
      ppppcVar4 = local_44;
      if (0xf < local_30) {
        ppppcVar4 = (char ****)local_44[0];
      }
      puVar5 = puVar3;
      if (7 < (uint)puVar3[5]) {
        puVar5 = (undefined4 *)*puVar3;
      }
      *(undefined2 *)((int)puVar5 + uVar6 * 2) = auStack_8c[*(char *)((int)ppppcVar4 + uVar6)];
    }
  }
  *param_1 = param_2;
  param_1[1] = param_3;
  uStack_74 = 0x1023b770;
  FUN_10001fee();
  ExceptionList = local_10;
                    /* WARNING: Subroutine does not return */
  puStack_64 = &UNK_1023b78a;
  FUN_102283e0();
}

