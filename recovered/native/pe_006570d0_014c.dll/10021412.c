/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10021412 */

void FUN_10021412(undefined4 *param_1,int param_2,undefined4 param_3,byte *param_4,byte *param_5)

{
  byte bVar1;
  undefined4 *puVar2;
  char *pcVar3;
  bool bVar4;
  uint uVar5;
  char *pcVar6;
  byte *pbVar7;
  int iVar8;
  
joined_r0x10021424:
  while( true ) {
    if (param_4 == param_5) {
      *param_1 = param_3;
      return;
    }
    pbVar7 = param_4 + 1;
    if (*param_4 != 0x24) break;
    if (pbVar7 == param_5) {
      iVar8 = 0x24;
      goto LAB_100214f3;
    }
    bVar1 = *pbVar7;
    if (bVar1 < 0x27) {
      if (bVar1 == 0x24) {
        FUN_10003d9a(0x24);
LAB_100215ad:
        param_4 = param_4 + 2;
      }
      else {
        if (bVar1 == 0x26) {
          puVar2 = *(undefined4 **)(param_2 + 8);
          if (*(undefined4 **)(param_2 + 0xc) != puVar2) {
            pcVar3 = (char *)puVar2[1];
            for (pcVar6 = (char *)*puVar2; pcVar6 != pcVar3; pcVar6 = pcVar6 + 1) {
              FUN_10003d9a((int)*pcVar6);
            }
            goto LAB_1002158d;
          }
          goto LAB_100215ad;
        }
LAB_10021524:
        if (9 < (byte)(bVar1 - 0x30)) {
          FUN_10003d9a(0x24);
          FUN_10003d9a((int)(char)param_4[1]);
          goto LAB_100215ad;
        }
        pbVar7 = param_4 + 2;
        uVar5 = (uint)(byte)(bVar1 - 0x30);
        if ((pbVar7 == param_5) || (bVar1 = *pbVar7, 9 < (byte)(bVar1 - 0x30))) {
          bVar4 = false;
        }
        else {
          pbVar7 = param_4 + 3;
          uVar5 = ((uint)bVar1 + uVar5 * 10) - 0x30;
          bVar4 = true;
        }
        param_4 = pbVar7;
        if (uVar5 == 0) goto LAB_1002146f;
        iVar8 = *(int *)(param_2 + 8);
        if (uVar5 < (uint)((*(int *)(param_2 + 0xc) - iVar8 >> 2) * -0x55555555)) {
          pcVar3 = *(char **)(iVar8 + 4 + uVar5 * 0xc);
          for (pcVar6 = *(char **)(iVar8 + uVar5 * 0xc); pcVar6 != pcVar3; pcVar6 = pcVar6 + 1) {
            FUN_10003d9a((int)*pcVar6);
          }
        }
      }
    }
    else {
      if (bVar1 == 0x27) {
        pcVar3 = *(char **)(param_2 + 0x24);
        for (pcVar6 = *(char **)(param_2 + 0x20); pcVar6 != pcVar3; pcVar6 = pcVar6 + 1) {
          FUN_10003d9a((int)*pcVar6);
        }
      }
      else {
        if (bVar1 != 0x60) goto LAB_10021524;
        pcVar3 = *(char **)(param_2 + 0x18);
        for (pcVar6 = *(char **)(param_2 + 0x14); pcVar6 != pcVar3; pcVar6 = pcVar6 + 1) {
          FUN_10003d9a((int)*pcVar6);
        }
      }
LAB_1002158d:
      param_4 = param_4 + 2;
    }
  }
  iVar8 = (int)(char)*param_4;
  goto LAB_100214f3;
LAB_1002146f:
  FUN_10003d9a(0x24);
  FUN_10003d9a(0x30);
  if (bVar4) {
    iVar8 = 0x30;
LAB_100214f3:
    FUN_10003d9a(iVar8);
    param_4 = pbVar7;
  }
  goto joined_r0x10021424;
}

