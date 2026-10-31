/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140039811 */

int FUN_140039811(longlong param_1,char *param_2,uint *param_3,undefined8 param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  char cVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  undefined *puVar12;
  undefined4 uVar13;
  longlong lVar14;
  undefined1 auStack_88 [40];
  uint *local_60;
  longlong local_58 [3];
  uint local_3c;
  ulonglong local_38;
  
  cVar8 = (char)param_4;
  local_38 = DAT_14012ea80 ^ (ulonglong)auStack_88;
  iVar9 = strcmp(param_2,"fallback-script");
  if (iVar9 == 0) {
    iVar9 = 6;
    if (cVar8 == '\0') {
      puVar12 = &DAT_1400f0648;
      lVar14 = 0;
      do {
        if ((*(uint *)(puVar12 + 8) == *param_3) && (*(int *)(puVar12 + 0x10) == 10)) {
          *(int *)(param_1 + 0x18) = (int)lVar14;
          goto LAB_140039a8e;
        }
        puVar12 = (&PTR_DAT_1400f0f48)[lVar14];
        lVar14 = lVar14 + 1;
      } while (lVar14 != 0x57);
    }
    goto LAB_140039a90;
  }
  iVar9 = strcmp(param_2,"default-script");
  if (iVar9 == 0) {
    iVar9 = 6;
    if (cVar8 != '\0') goto LAB_140039a90;
    *(uint *)(param_1 + 0x1c) = *param_3;
  }
  else {
    iVar9 = strcmp(param_2,"increase-x-height");
    if (iVar9 == 0) {
      iVar9 = 6;
      if ((cVar8 != '\0') ||
         (iVar9 = FUN_140039c2f(*(longlong *)param_3,local_58,param_1), iVar9 != 0))
      goto LAB_140039a90;
      *(uint *)(local_58[0] + 0x40) = param_3[2];
    }
    else {
      iVar9 = strcmp(param_2,"darkening-parameters");
      uVar13 = (undefined4)param_4;
      if (iVar9 == 0) {
        if (cVar8 == '\0') {
          uVar11 = param_3[7];
        }
        else {
          lVar14 = 0;
          do {
            uVar11 = FUN_14009bf40((longlong)param_3,(longlong *)&local_60,10,(int)param_4);
            *(uint *)((longlong)local_58 + lVar14 * 4) = uVar11;
            if (((byte)*local_60 != 0x2c) || (param_3 == local_60)) goto LAB_1400399ea;
            param_3 = (uint *)((longlong)local_60 + 1);
            lVar14 = lVar14 + 1;
          } while (lVar14 != 7);
          uVar11 = FUN_14009bf40((longlong)param_3,(longlong *)&local_60,10,(int)param_4);
          local_3c = uVar11;
          if (((*local_60 & 0xdf) != 0) || (param_3 == local_60)) {
LAB_1400399ea:
            iVar9 = 6;
            goto LAB_140039a90;
          }
          param_3 = (uint *)local_58;
        }
        uVar1 = *param_3;
        uVar2 = param_3[1];
        uVar3 = param_3[2];
        uVar4 = param_3[3];
        uVar5 = param_3[4];
        uVar6 = param_3[5];
        uVar7 = param_3[6];
        iVar9 = 6;
        if ((((((int)uVar5 < (int)uVar3 || (int)uVar3 < (int)uVar1) ||
               (int)(uVar2 | uVar4 | uVar6 | uVar5 | uVar7 | uVar1 | uVar3 | uVar11) < 0) ||
             ((int)uVar7 < (int)uVar5)) || (500 < (int)uVar2)) ||
           (((500 < uVar4 || (500 < uVar6)) || (500 < uVar11)))) goto LAB_140039a90;
        *(uint *)(param_1 + 0x24) = uVar1;
        *(uint *)(param_1 + 0x28) = uVar2;
        *(uint *)(param_1 + 0x2c) = uVar3;
        *(uint *)(param_1 + 0x30) = uVar4;
        *(uint *)(param_1 + 0x34) = uVar5;
        *(uint *)(param_1 + 0x38) = uVar6;
        *(uint *)(param_1 + 0x3c) = uVar7;
        *(uint *)(param_1 + 0x40) = uVar11;
      }
      else {
        iVar10 = strcmp(param_2,"no-stem-darkening");
        iVar9 = 0xc;
        if (iVar10 != 0) goto LAB_140039a90;
        if (cVar8 != '\0') {
          iVar9 = 0;
          uVar11 = FUN_14009bf40((longlong)param_3,(longlong *)0x0,10,uVar13);
          if (uVar11 == 0) {
            *(undefined1 *)(param_1 + 0x20) = 0;
          }
          else {
            *(undefined1 *)(param_1 + 0x20) = 1;
            iVar9 = 0;
          }
          goto LAB_140039a90;
        }
        *(char *)(param_1 + 0x20) = (char)*param_3;
      }
    }
  }
LAB_140039a8e:
  iVar9 = 0;
LAB_140039a90:
  if (DAT_14012ea80 != (local_38 ^ (ulonglong)auStack_88)) {
                    /* WARNING: Subroutine does not return */
    FUN_140086440(local_38 ^ (ulonglong)auStack_88);
  }
  return iVar9;
}

