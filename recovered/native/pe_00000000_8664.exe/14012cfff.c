/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14012cfff */

undefined8 FUN_14012cfff(longlong param_1,char *param_2,byte *param_3,char param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  undefined4 uVar7;
  uint uVar8;
  undefined8 uVar9;
  longlong lVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auStack_88 [40];
  byte *local_60;
  byte local_58 [28];
  uint local_3c;
  ulonglong local_38;
  
  local_38 = DAT_140f17b40 ^ (ulonglong)auStack_88;
  iVar6 = strcmp(param_2,"darkening-parameters");
  if (iVar6 == 0) {
    if (param_4 == '\0') {
      uVar8 = *(uint *)(param_3 + 0x1c);
    }
    else {
      lVar10 = 0;
      do {
        uVar7 = FUN_1401a9174(param_3,&local_60,10);
        *(undefined4 *)(local_58 + lVar10 * 4) = uVar7;
        if ((*local_60 != 0x2c) || (param_3 == local_60)) goto LAB_14012d141;
        param_3 = local_60 + 1;
        lVar10 = lVar10 + 1;
      } while (lVar10 != 7);
      uVar8 = FUN_1401a9174(param_3,&local_60,10);
      local_3c = uVar8;
      if (((*local_60 & 0xdf) != 0) || (param_3 == local_60)) {
LAB_14012d141:
        uVar9 = 6;
        goto LAB_14012d26d;
      }
      param_3 = local_58;
    }
    iVar6 = *(int *)(param_3 + 0x10);
    iVar1 = *(int *)(param_3 + 8);
    auVar11._4_4_ = iVar6;
    auVar11._0_4_ = *(undefined4 *)param_3;
    auVar11._8_4_ = *(undefined4 *)(param_3 + 4);
    auVar11._12_4_ = (int)*(undefined8 *)(param_3 + 0x14);
    auVar12._4_4_ = (int)((ulonglong)*(undefined8 *)(param_3 + 0x14) >> 0x20);
    auVar12._0_4_ = *(undefined4 *)(param_3 + 8);
    auVar12._8_4_ = *(undefined4 *)(param_3 + 0xc);
    auVar12._12_4_ = uVar8;
    auVar11 = packssdw(auVar11,auVar12);
    uVar9 = 6;
    if (((((iVar6 < iVar1 || iVar1 < *(int *)param_3) ||
           ((((((((SUB161(auVar11 >> 0xf,0) & 1) != 0 || (SUB161(auVar11 >> 0x1f,0) & 1) != 0) ||
                (SUB161(auVar11 >> 0x2f,0) & 1) != 0) || (SUB161(auVar11 >> 0x3f,0) & 1) != 0) ||
              (SUB161(auVar11 >> 0x4f,0) & 1) != 0) || (SUB161(auVar11 >> 0x5f,0) & 1) != 0) ||
            (SUB161(auVar11 >> 0x6f,0) & 1) != 0) || auVar11[0xf] < '\0')) ||
         (iVar2 = *(int *)(param_3 + 0x18), iVar2 < iVar6)) ||
        (iVar3 = *(int *)(param_3 + 4), 500 < iVar3)) ||
       (((uVar4 = *(uint *)(param_3 + 0xc), 500 < uVar4 ||
         (uVar5 = *(uint *)(param_3 + 0x14), 500 < uVar5)) || (500 < uVar8)))) goto LAB_14012d26d;
    *(int *)(param_1 + 0x40) = *(int *)param_3;
    *(int *)(param_1 + 0x44) = iVar3;
    *(int *)(param_1 + 0x48) = iVar1;
    *(uint *)(param_1 + 0x4c) = uVar4;
    *(int *)(param_1 + 0x50) = iVar6;
    *(uint *)(param_1 + 0x54) = uVar5;
    *(int *)(param_1 + 0x58) = iVar2;
    *(uint *)(param_1 + 0x5c) = uVar8;
  }
  else {
    iVar6 = strcmp(param_2,"hinting-engine");
    if (iVar6 == 0) {
      if (param_4 == '\0') {
        uVar9 = 7;
        if (*(int *)param_3 != 1) goto LAB_14012d26d;
      }
      else {
        iVar6 = strcmp((char *)param_3,"adobe");
        uVar9 = 6;
        if (iVar6 != 0) goto LAB_14012d26d;
      }
      *(undefined4 *)(param_1 + 0x38) = 1;
    }
    else {
      iVar6 = strcmp(param_2,"no-stem-darkening");
      if (iVar6 != 0) {
        iVar6 = strcmp(param_2,"random-seed");
        uVar9 = 0xc;
        if (iVar6 == 0) {
          if (param_4 == '\0') {
            iVar6 = *(int *)param_3;
          }
          else {
            iVar6 = FUN_1401a9174(param_3,0,10);
          }
          uVar9 = 0;
          if (iVar6 < 1) {
            iVar6 = 0;
          }
          *(int *)(param_1 + 0x60) = iVar6;
        }
        goto LAB_14012d26d;
      }
      if (param_4 != '\0') {
        uVar9 = 0;
        iVar6 = FUN_1401a9174(param_3,0,10);
        if (iVar6 == 0) {
          *(undefined1 *)(param_1 + 0x3c) = 0;
        }
        else {
          *(undefined1 *)(param_1 + 0x3c) = 1;
        }
        goto LAB_14012d26d;
      }
      *(byte *)(param_1 + 0x3c) = *param_3;
    }
  }
  uVar9 = 0;
LAB_14012d26d:
  if (DAT_140f17b40 != (local_38 ^ (ulonglong)auStack_88)) {
                    /* WARNING: Subroutine does not return */
    FUN_140188a00(local_38 ^ (ulonglong)auStack_88);
  }
  return uVar9;
}

