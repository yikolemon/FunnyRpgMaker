/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100277c8 */

undefined4 * FUN_100277c8(undefined4 *param_1,int *param_2,undefined4 *param_3)

{
  undefined1 *puVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined1 *puVar5;
  int *local_18;
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)&local_18;
  uVar3 = param_3[2];
  if ((int)uVar3 < 0x22) {
    if (uVar3 == 9) {
      iVar2 = param_2[1];
      uVar3 = iVar2 + 1;
      if ((uint)param_2[2] < uVar3) {
        (*(code *)param_2[3])(param_2,uVar3);
        iVar2 = param_2[1];
        uVar3 = iVar2 + 1;
      }
      param_2[1] = uVar3;
      *(undefined1 *)(*param_2 + iVar2) = 0x5c;
      uVar3 = 0x74;
    }
    else if (uVar3 == 10) {
      iVar2 = param_2[1];
      uVar3 = iVar2 + 1;
      if ((uint)param_2[2] < uVar3) {
        (*(code *)param_2[3])(param_2,uVar3);
        iVar2 = param_2[1];
        uVar3 = iVar2 + 1;
      }
      param_2[1] = uVar3;
      *(undefined1 *)(*param_2 + iVar2) = 0x5c;
      uVar3 = 0x6e;
    }
    else {
      if (uVar3 != 0xd) goto LAB_10027888;
      iVar2 = param_2[1];
      uVar3 = iVar2 + 1;
      if ((uint)param_2[2] < uVar3) {
        (*(code *)param_2[3])(param_2,uVar3);
        iVar2 = param_2[1];
        uVar3 = iVar2 + 1;
      }
      param_2[1] = uVar3;
      *(undefined1 *)(*param_2 + iVar2) = 0x5c;
      uVar3 = 0x72;
    }
LAB_100278c3:
    iVar2 = param_2[1];
    uVar4 = iVar2 + 1;
    if ((uint)param_2[2] < uVar4) {
      (*(code *)param_2[3])(param_2,uVar4);
      iVar2 = param_2[1];
      uVar4 = iVar2 + 1;
    }
    param_2[1] = uVar4;
    *(char *)(*param_2 + iVar2) = (char)uVar3;
  }
  else {
    if (((uVar3 == 0x22) || (uVar3 == 0x27)) || (uVar3 == 0x5c)) {
      iVar2 = param_2[1];
      uVar4 = iVar2 + 1;
      if ((uint)param_2[2] < uVar4) {
        (*(code *)param_2[3])(param_2,uVar4);
        iVar2 = param_2[1];
        uVar4 = iVar2 + 1;
      }
      param_2[1] = uVar4;
      *(undefined1 *)(*param_2 + iVar2) = 0x5c;
      goto LAB_100278c3;
    }
LAB_10027888:
    if (uVar3 < 0x100) {
      FUN_10027af7(param_1,param_2,0x78,uVar3);
      goto LAB_100278e6;
    }
    if (uVar3 < 0x10000) {
      FUN_10027bb4(param_1,param_2,0x75,uVar3);
      goto LAB_100278e6;
    }
    if (uVar3 < 0x110000) {
      FUN_10027c70(param_1,param_2,0x55,uVar3);
      goto LAB_100278e6;
    }
    puVar1 = (undefined1 *)param_3[1];
    for (puVar5 = (undefined1 *)*param_3; puVar5 != puVar1; puVar5 = puVar5 + 1) {
      FUN_10027af7(&local_18,param_2,0x78,*puVar5);
      param_2 = local_18;
    }
  }
  *param_1 = param_2;
LAB_100278e6:
  if (DAT_10388d00 != (local_14 ^ (uint)&local_18)) {
                    /* WARNING: Subroutine does not return */
    FUN_102283e0();
  }
  return param_1;
}

