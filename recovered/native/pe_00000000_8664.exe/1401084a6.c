/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1401084a6 */

void FUN_1401084a6(longlong param_1,char *param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  size_t sVar4;
  undefined8 uVar5;
  longlong lVar6;
  int iVar7;
  ulonglong uVar8;
  int iVar9;
  
  FUN_140108340(param_1,"# %s\n",param_2);
  *(undefined4 *)(param_1 + 0x130) = 0xffffffff;
  uVar8 = (ulonglong)*(uint *)(param_1 + 0x120);
  do {
    if ((int)uVar8 < 1) goto LAB_140108536;
    lVar6 = uVar8 * 8;
    uVar8 = uVar8 - 1;
    iVar2 = FUN_140108b4a(*(undefined8 *)(*(longlong *)(param_1 + 0x128) + -8 + lVar6),param_2);
  } while (iVar2 != 0);
  FUN_140077b90(*(undefined8 *)(*(longlong *)(param_1 + 0x128) + uVar8 * 8));
  uVar8 = uVar8 & 0xffffffff;
  FUN_1401c5180(*(longlong *)(param_1 + 0x128) + uVar8 * 8,
                *(longlong *)(param_1 + 0x128) + uVar8 * 8 + 8,
                (~uVar8 + (longlong)*(int *)(param_1 + 0x120)) * 8);
  *(int *)(param_1 + 0x120) = *(int *)(param_1 + 0x120) + -1;
LAB_140108536:
  sVar4 = strlen(param_2);
  uVar5 = FUN_140077ab4(sVar4 + 1);
  FUN_1401c5180(uVar5,param_2,sVar4 + 1);
  iVar2 = *(int *)(param_1 + 0x120);
  if (iVar2 == *(int *)(param_1 + 0x124)) {
    if (iVar2 == 0) {
      iVar7 = 8;
    }
    else {
      iVar7 = iVar2 / 2 + iVar2;
    }
    iVar9 = iVar2 + 1;
    if (iVar2 + 1 < iVar7) {
      iVar9 = iVar7;
    }
    lVar6 = FUN_140077ab4((longlong)iVar9 << 3);
    if (*(longlong *)(param_1 + 0x128) != 0) {
      FUN_1401c5180(lVar6,*(longlong *)(param_1 + 0x128),(longlong)*(int *)(param_1 + 0x120) << 3);
      FUN_140077b90(*(undefined8 *)(param_1 + 0x128));
    }
    *(longlong *)(param_1 + 0x128) = lVar6;
    *(int *)(param_1 + 0x124) = iVar9;
    iVar2 = *(int *)(param_1 + 0x120);
  }
  else {
    lVar6 = *(longlong *)(param_1 + 0x128);
  }
  *(undefined8 *)(lVar6 + (longlong)iVar2 * 8) = uVar5;
  *(int *)(param_1 + 0x120) = *(int *)(param_1 + 0x120) + 1;
  iVar2 = FUN_140108b4a(param_2,"CLEAR");
  if (iVar2 == 0) {
    FUN_1401082e4(param_1);
  }
  else {
    iVar2 = FUN_140108b4a(param_2,&DAT_140ecccb0);
    if (iVar2 == 0) {
      FUN_140108340(param_1,"Commands:");
      if (0 < *(int *)(param_1 + 0x110)) {
        lVar6 = 0;
        do {
          FUN_140108340(param_1,"- %s",*(undefined8 *)(*(longlong *)(param_1 + 0x118) + lVar6 * 8));
          lVar6 = lVar6 + 1;
        } while (lVar6 < *(int *)(param_1 + 0x110));
      }
    }
    else {
      iVar2 = FUN_140108b4a(param_2,"HISTORY");
      if (iVar2 == 0) {
        uVar1 = *(uint *)(param_1 + 0x120);
        uVar3 = 10;
        if (10 < (int)uVar1) {
          uVar3 = uVar1;
        }
        if ((int)(uVar3 - 10) < (int)uVar1) {
          uVar8 = (ulonglong)uVar3 - 10;
          do {
            FUN_140108340(param_1,"%3d: %s\n",uVar8 & 0xffffffff,
                          *(undefined8 *)(*(longlong *)(param_1 + 0x128) + uVar8 * 8));
            uVar8 = uVar8 + 1;
          } while ((longlong)uVar8 < (longlong)*(int *)(param_1 + 0x120));
        }
      }
      else {
        FUN_140108340(param_1,"Unknown command: \'%s\'\n",param_2);
      }
    }
  }
  *(undefined1 *)(param_1 + 0x251) = 1;
  return;
}

