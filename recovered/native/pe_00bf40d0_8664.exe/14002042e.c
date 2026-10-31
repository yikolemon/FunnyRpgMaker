/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14002042e */

undefined8 FUN_14002042e(longlong param_1,char *param_2,uint *param_3,undefined8 param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  char cVar7;
  int iVar8;
  uint uVar9;
  undefined8 uVar10;
  undefined4 uVar11;
  longlong lVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auStack_88 [40];
  uint *local_60;
  uint local_58 [7];
  uint local_3c;
  ulonglong local_38;
  
  cVar7 = (char)param_4;
  local_38 = DAT_14012ea80 ^ (ulonglong)auStack_88;
  iVar8 = strcmp(param_2,"darkening-parameters");
  uVar11 = (undefined4)param_4;
  if (iVar8 == 0) {
    if (cVar7 == '\0') {
      uVar9 = param_3[7];
    }
    else {
      lVar12 = 0;
      do {
        uVar9 = FUN_14009bf40((longlong)param_3,(longlong *)&local_60,10,(int)param_4);
        local_58[lVar12] = uVar9;
        if (((byte)*local_60 != 0x2c) || (param_3 == local_60)) goto LAB_140020570;
        param_3 = (uint *)((longlong)local_60 + 1);
        lVar12 = lVar12 + 1;
      } while (lVar12 != 7);
      uVar9 = FUN_14009bf40((longlong)param_3,(longlong *)&local_60,10,(int)param_4);
      local_3c = uVar9;
      if (((*local_60 & 0xdf) != 0) || (param_3 == local_60)) {
LAB_140020570:
        uVar10 = 6;
        goto LAB_14002069c;
      }
      param_3 = local_58;
    }
    uVar1 = param_3[4];
    uVar2 = param_3[2];
    auVar13._4_4_ = uVar1;
    auVar13._0_4_ = *param_3;
    auVar13._8_4_ = param_3[1];
    auVar13._12_4_ = (int)*(undefined8 *)(param_3 + 5);
    auVar14._4_4_ = (int)((ulonglong)*(undefined8 *)(param_3 + 5) >> 0x20);
    auVar14._0_4_ = param_3[2];
    auVar14._8_4_ = param_3[3];
    auVar14._12_4_ = uVar9;
    auVar13 = packssdw(auVar13,auVar14);
    uVar10 = 6;
    if ((((((int)uVar1 < (int)uVar2 || (int)uVar2 < (int)*param_3) ||
           ((((((((SUB161(auVar13 >> 0xf,0) & 1) != 0 || (SUB161(auVar13 >> 0x1f,0) & 1) != 0) ||
                (SUB161(auVar13 >> 0x2f,0) & 1) != 0) || (SUB161(auVar13 >> 0x3f,0) & 1) != 0) ||
              (SUB161(auVar13 >> 0x4f,0) & 1) != 0) || (SUB161(auVar13 >> 0x5f,0) & 1) != 0) ||
            (SUB161(auVar13 >> 0x6f,0) & 1) != 0) || auVar13[0xf] < '\0')) ||
         (uVar3 = param_3[6], (int)uVar3 < (int)uVar1)) || (uVar4 = param_3[1], 500 < (int)uVar4))
       || (((uVar5 = param_3[3], 500 < uVar5 || (uVar6 = param_3[5], 500 < uVar6)) || (500 < uVar9))
          )) goto LAB_14002069c;
    *(uint *)(param_1 + 0x40) = *param_3;
    *(uint *)(param_1 + 0x44) = uVar4;
    *(uint *)(param_1 + 0x48) = uVar2;
    *(uint *)(param_1 + 0x4c) = uVar5;
    *(uint *)(param_1 + 0x50) = uVar1;
    *(uint *)(param_1 + 0x54) = uVar6;
    *(uint *)(param_1 + 0x58) = uVar3;
    *(uint *)(param_1 + 0x5c) = uVar9;
  }
  else {
    iVar8 = strcmp(param_2,"hinting-engine");
    if (iVar8 == 0) {
      if (cVar7 == '\0') {
        uVar10 = 7;
        if (*param_3 != 1) goto LAB_14002069c;
      }
      else {
        iVar8 = strcmp((char *)param_3,"adobe");
        uVar10 = 6;
        if (iVar8 != 0) goto LAB_14002069c;
      }
      *(undefined4 *)(param_1 + 0x38) = 1;
    }
    else {
      iVar8 = strcmp(param_2,"no-stem-darkening");
      if (iVar8 != 0) {
        iVar8 = strcmp(param_2,"random-seed");
        uVar10 = 0xc;
        if (iVar8 == 0) {
          if (cVar7 == '\0') {
            uVar9 = *param_3;
          }
          else {
            uVar9 = FUN_14009bf40((longlong)param_3,(longlong *)0x0,10,uVar11);
          }
          uVar10 = 0;
          if ((int)uVar9 < 1) {
            uVar9 = 0;
          }
          *(uint *)(param_1 + 0x60) = uVar9;
        }
        goto LAB_14002069c;
      }
      if (cVar7 != '\0') {
        uVar10 = 0;
        uVar9 = FUN_14009bf40((longlong)param_3,(longlong *)0x0,10,uVar11);
        if (uVar9 == 0) {
          *(undefined1 *)(param_1 + 0x3c) = 0;
        }
        else {
          *(undefined1 *)(param_1 + 0x3c) = 1;
        }
        goto LAB_14002069c;
      }
      *(char *)(param_1 + 0x3c) = (char)*param_3;
    }
  }
  uVar10 = 0;
LAB_14002069c:
  if (DAT_14012ea80 != (local_38 ^ (ulonglong)auStack_88)) {
                    /* WARNING: Subroutine does not return */
    FUN_140086440(local_38 ^ (ulonglong)auStack_88);
  }
  return uVar10;
}

