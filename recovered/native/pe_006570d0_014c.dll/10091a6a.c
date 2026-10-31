/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10091a6a */

void FUN_10091a6a(undefined4 *param_1,int param_2,undefined4 param_3,ushort *param_4,ushort *param_5
                 )

{
  int iVar1;
  undefined4 *puVar2;
  undefined2 *puVar3;
  bool bVar4;
  uint uVar5;
  undefined2 *puVar6;
  ushort *puVar7;
  ushort uVar8;
  
joined_r0x10091a7c:
  while( true ) {
    if (param_4 == param_5) {
      *param_1 = param_3;
      return;
    }
    uVar8 = *param_4;
    puVar7 = param_4 + 1;
    if (uVar8 != 0x24) break;
    if (puVar7 == param_5) {
      uVar8 = 0x24;
      break;
    }
    uVar5 = (uint)*puVar7;
    if (uVar5 < 0x27) {
      if (uVar5 == 0x24) {
        FUN_100045e8(0x24);
LAB_10091c0d:
        param_4 = param_4 + 2;
      }
      else {
        if (uVar5 == 0x26) {
          puVar2 = *(undefined4 **)(param_2 + 8);
          if (*(undefined4 **)(param_2 + 0xc) != puVar2) {
            puVar3 = (undefined2 *)puVar2[1];
            for (puVar6 = (undefined2 *)*puVar2; puVar6 != puVar3; puVar6 = puVar6 + 1) {
              FUN_100045e8(*puVar6);
            }
            goto LAB_10091bed;
          }
          goto LAB_10091c0d;
        }
LAB_10091b83:
        uVar5 = uVar5 - 0x30;
        if (9 < (ushort)uVar5) {
          FUN_100045e8(0x24);
          FUN_100045e8(param_4[1]);
          goto LAB_10091c0d;
        }
        puVar7 = param_4 + 2;
        if ((puVar7 == param_5) || (uVar8 = *puVar7, 9 < (ushort)(uVar8 - 0x30))) {
          bVar4 = false;
        }
        else {
          puVar7 = param_4 + 3;
          uVar5 = ((uint)uVar8 + uVar5 * 10) - 0x30;
          bVar4 = true;
        }
        param_4 = puVar7;
        if (uVar5 == 0) goto LAB_10091ac9;
        iVar1 = *(int *)(param_2 + 8);
        if (uVar5 < (uint)((*(int *)(param_2 + 0xc) - iVar1 >> 2) * -0x55555555)) {
          puVar3 = *(undefined2 **)(iVar1 + 4 + uVar5 * 0xc);
          for (puVar6 = *(undefined2 **)(iVar1 + uVar5 * 0xc); puVar6 != puVar3; puVar6 = puVar6 + 1
              ) {
            FUN_100045e8(*puVar6);
          }
        }
      }
    }
    else {
      if (uVar5 == 0x27) {
        puVar3 = *(undefined2 **)(param_2 + 0x24);
        for (puVar6 = *(undefined2 **)(param_2 + 0x20); puVar6 != puVar3; puVar6 = puVar6 + 1) {
          FUN_100045e8(*puVar6);
        }
      }
      else {
        if (uVar5 != 0x60) goto LAB_10091b83;
        puVar3 = *(undefined2 **)(param_2 + 0x18);
        for (puVar6 = *(undefined2 **)(param_2 + 0x14); puVar6 != puVar3; puVar6 = puVar6 + 1) {
          FUN_100045e8(*puVar6);
        }
      }
LAB_10091bed:
      param_4 = param_4 + 2;
    }
  }
  goto LAB_10091b50;
LAB_10091ac9:
  FUN_100045e8(0x24);
  FUN_100045e8(0x30);
  if (bVar4) {
    uVar8 = 0x30;
LAB_10091b50:
    FUN_100045e8(uVar8);
    param_4 = puVar7;
  }
  goto joined_r0x10091a7c;
}

