/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14032e32d */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong FUN_14032e32d(char *param_1,uint param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  int iVar3;
  longlong lVar4;
  byte bVar5;
  int iVar6;
  longlong lVar7;
  undefined8 uVar8;
  float fVar9;
  undefined1 auStack_88 [32];
  float local_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_40;
  
  lVar4 = DAT_14062a630;
  local_40 = ram0x000140613b10 ^ (ulonglong)auStack_88;
  if ((param_1 == (char *)0x0) ||
     ((*(int *)(DAT_14062a630 + 0x244c) != -1 &&
      (iVar6 = strcmp(param_1,(char *)(DAT_14062a630 + 0x2450)), iVar6 == 0)))) {
    iVar6 = *(int *)(lVar4 + 0x2498);
    iVar3 = *(int *)(lVar4 + 0x24b0);
    local_58 = *(undefined8 *)(lVar4 + 0x2478);
    uStack_50 = *(undefined8 *)(lVar4 + 0x2480);
    fVar9 = ((float)((ulonglong)uStack_50 >> 0x20) - (float)((ulonglong)local_58 >> 0x20)) *
            ((float)uStack_50 - (float)local_58);
    if (fVar9 < *(float *)(lVar4 + 0x24a8) || fVar9 == *(float *)(lVar4 + 0x24a8)) {
      *(uint *)(lVar4 + 0x24a0) = param_2;
      *(int *)(lVar4 + 0x24ac) = iVar6;
      *(float *)(lVar4 + 0x24a8) = fVar9;
      *(bool *)(lVar4 + 0x2471) = iVar3 == iVar6;
      if ((iVar3 == iVar6) && (((*(uint *)(lVar4 + 0x242c) | param_2) & 0x800) == 0)) {
        if (*(int *)(lVar4 + 0x249c) == 0) {
          FUN_14032e5ae();
        }
        else {
          uVar8 = FUN_140320d89();
          local_68 = (float)*(undefined8 *)(lVar4 + 0x2478);
          fStack_64 = (float)((ulonglong)*(undefined8 *)(lVar4 + 0x2478) >> 0x20);
          fStack_60 = (float)*(undefined8 *)(lVar4 + 0x2480);
          fStack_5c = (float)((ulonglong)*(undefined8 *)(lVar4 + 0x2480) >> 0x20);
          _local_68 = CONCAT44(fStack_64 + _UNK_1404efd84,local_68 + _DAT_1404efd80);
          _fStack_60 = CONCAT44(fStack_5c + _UNK_1404efd8c,fStack_60 + _UNK_1404efd88);
          uVar2 = *(undefined4 *)(lVar4 + 0xe84);
          uVar8 = FUN_1403146f8(uVar8);
          FUN_14032e4fb(uVar8,&local_68,uVar2);
        }
      }
      lVar1 = lVar4 + 0x2438;
      *(int *)(lVar4 + 0x24b4) = *(int *)(lVar4 + 4);
      if (((*(byte *)(lVar4 + 0x242c) & 0x10) == 0) || (*(int *)(lVar4 + 0x2434) != -1)) {
        if (iVar3 != iVar6) goto LAB_14032e4a8;
        bVar5 = FUN_14032121d(*(undefined4 *)(lVar4 + 0x2434));
        bVar5 = bVar5 ^ 1;
      }
      else if (iVar3 == iVar6) {
        bVar5 = *(int *)(lVar4 + 0x2430) < *(int *)(lVar4 + 4);
      }
      else {
LAB_14032e4a8:
        bVar5 = 0;
      }
      lVar7 = 0;
      if (bVar5 != 0) {
        lVar7 = lVar1;
      }
      if ((param_2 & 0x400) != 0) {
        lVar7 = lVar1;
      }
      *(byte *)(lVar4 + 0x2472) = bVar5;
      if ((bVar5 != 0) && (lVar7 = lVar1, (*(byte *)(lVar4 + 0x2acc) & 2) != 0)) {
        FUN_14030f4ba("|_DockHierarchy) = %d\nIsWindowFocused(_AnyWindow) = %d\n",
                      *(undefined4 *)(lVar4 + 0x2498));
      }
      goto LAB_14032e3b0;
    }
  }
  lVar7 = 0;
LAB_14032e3b0:
  if (ram0x000140613b10 != (local_40 ^ (ulonglong)auStack_88)) {
                    /* WARNING: Subroutine does not return */
    FUN_14044aba0(local_40 ^ (ulonglong)auStack_88);
  }
  return lVar7;
}

