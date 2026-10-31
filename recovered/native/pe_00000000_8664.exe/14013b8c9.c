/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14013b8c9 */

int FUN_14013b8c9(longlong param_1,char *param_2,uint *param_3,char param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  uint uVar11;
  undefined *puVar12;
  longlong lVar13;
  undefined1 auStack_88 [40];
  uint *local_60;
  longlong local_58 [3];
  uint local_3c;
  ulonglong local_38;
  
  local_38 = DAT_140f17b40 ^ (ulonglong)auStack_88;
  iVar8 = strcmp(param_2,"fallback-script");
  if (iVar8 == 0) {
    iVar8 = 6;
    if (param_4 == '\0') {
      puVar12 = &DAT_140e97888;
      lVar13 = 0;
      do {
        if ((*(uint *)(puVar12 + 8) == *param_3) && (*(int *)(puVar12 + 0x10) == 10)) {
          *(int *)(param_1 + 0x18) = (int)lVar13;
          goto LAB_14013bb46;
        }
        puVar12 = (&PTR_DAT_140e98188)[lVar13];
        lVar13 = lVar13 + 1;
      } while (lVar13 != 0x57);
    }
    goto LAB_14013bb48;
  }
  iVar8 = strcmp(param_2,"default-script");
  if (iVar8 == 0) {
    iVar8 = 6;
    if (param_4 != '\0') goto LAB_14013bb48;
    *(uint *)(param_1 + 0x1c) = *param_3;
  }
  else {
    iVar8 = strcmp(param_2,"increase-x-height");
    if (iVar8 == 0) {
      iVar8 = 6;
      if ((param_4 != '\0') ||
         (iVar8 = FUN_14013bce7(*(undefined8 *)param_3,local_58,param_1), iVar8 != 0))
      goto LAB_14013bb48;
      *(uint *)(local_58[0] + 0x40) = param_3[2];
    }
    else {
      iVar8 = strcmp(param_2,"darkening-parameters");
      if (iVar8 == 0) {
        if (param_4 == '\0') {
          uVar11 = param_3[7];
        }
        else {
          lVar13 = 0;
          do {
            uVar10 = FUN_1401a9174(param_3,&local_60,10);
            *(undefined4 *)((longlong)local_58 + lVar13 * 4) = uVar10;
            if (((byte)*local_60 != 0x2c) || (param_3 == local_60)) goto LAB_14013baa2;
            param_3 = (uint *)((longlong)local_60 + 1);
            lVar13 = lVar13 + 1;
          } while (lVar13 != 7);
          uVar11 = FUN_1401a9174(param_3,&local_60,10);
          local_3c = uVar11;
          if (((*local_60 & 0xdf) != 0) || (param_3 == local_60)) {
LAB_14013baa2:
            iVar8 = 6;
            goto LAB_14013bb48;
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
        iVar8 = 6;
        if ((((((int)uVar5 < (int)uVar3 || (int)uVar3 < (int)uVar1) ||
               (int)(uVar2 | uVar4 | uVar6 | uVar5 | uVar7 | uVar1 | uVar3 | uVar11) < 0) ||
             ((int)uVar7 < (int)uVar5)) || (500 < (int)uVar2)) ||
           (((500 < uVar4 || (500 < uVar6)) || (500 < uVar11)))) goto LAB_14013bb48;
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
        iVar9 = strcmp(param_2,"no-stem-darkening");
        iVar8 = 0xc;
        if (iVar9 != 0) goto LAB_14013bb48;
        if (param_4 != '\0') {
          iVar8 = 0;
          iVar9 = FUN_1401a9174(param_3,0,10);
          if (iVar9 == 0) {
            *(undefined1 *)(param_1 + 0x20) = 0;
          }
          else {
            *(undefined1 *)(param_1 + 0x20) = 1;
          }
          goto LAB_14013bb48;
        }
        *(byte *)(param_1 + 0x20) = (byte)*param_3;
      }
    }
  }
LAB_14013bb46:
  iVar8 = 0;
LAB_14013bb48:
  if (DAT_140f17b40 != (local_38 ^ (ulonglong)auStack_88)) {
                    /* WARNING: Subroutine does not return */
    FUN_140188a00(local_38 ^ (ulonglong)auStack_88);
  }
  return iVar8;
}

