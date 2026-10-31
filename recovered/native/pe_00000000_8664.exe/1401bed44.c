/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1401bed44 */

void FUN_1401bed44(char *param_1,ushort *param_2,ulonglong param_3,char *param_4)

{
  char cVar1;
  ushort uVar2;
  longlong lVar3;
  int iVar4;
  DWORD DVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ushort *puVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  undefined1 auStack_b8 [32];
  char *local_98;
  undefined8 local_90;
  undefined8 local_88;
  int *local_80;
  int local_78 [2];
  ushort *local_70;
  undefined8 local_68;
  char local_60 [8];
  ulonglong local_58;
  
  local_58 = DAT_140f17b40 ^ (ulonglong)auStack_b8;
  uVar9 = 0;
  local_78[0] = 0;
  local_70 = param_2;
  if ((param_1 == (char *)0x0) || (param_3 != 0)) {
    if (param_2 == (ushort *)0x0) {
      param_4[0x30] = '\x01';
      param_4[0x2c] = '\x16';
      param_4[0x2d] = '\0';
      param_4[0x2e] = '\0';
      param_4[0x2f] = '\0';
      local_98 = (char *)0x0;
      local_90 = param_4;
      FUN_1401ae820(0,0,0,0);
    }
    else {
      if (param_4[0x28] == '\0') {
        FUN_140193950(param_4);
      }
      lVar3 = *(longlong *)(param_4 + 0x18);
      iVar4 = *(int *)(lVar3 + 0xc);
      if (iVar4 == 0xfde9) {
        local_68 = 0;
        local_98 = param_4;
        FUN_1401c3c94(param_1,&local_70,param_3,&local_68);
      }
      else {
        if (param_1 == (char *)0x0) {
          if (*(longlong *)(lVar3 + 0x138) == 0) {
            uVar2 = *local_70;
            puVar8 = local_70;
            while (uVar2 != 0) {
              if (0xff < uVar2) goto LAB_1401bee55;
              puVar8 = puVar8 + 1;
              uVar2 = *puVar8;
            }
            goto LAB_1401bf066;
          }
          local_80 = local_78;
          local_88 = 0;
          local_90 = (char *)((ulonglong)local_90._4_4_ << 0x20);
          local_98 = (char *)0x0;
          iVar4 = FUN_1401aeb80(iVar4,0,local_70,0xffffffff);
          if ((iVar4 != 0) && (local_78[0] == 0)) goto LAB_1401bf066;
        }
        else {
          if (*(longlong *)(lVar3 + 0x138) == 0) {
            if (param_3 != 0) {
              do {
                if (0xff < *local_70) goto LAB_1401bee55;
                param_1[uVar9] = (char)*local_70;
                uVar2 = *local_70;
                local_70 = local_70 + 1;
              } while ((uVar2 != 0) && (uVar9 = uVar9 + 1, uVar9 < param_3));
            }
            goto LAB_1401bf066;
          }
          uVar10 = param_3;
          puVar8 = local_70;
          local_98 = param_1;
          if (*(int *)(lVar3 + 8) == 1) {
            for (; uVar10 != 0; uVar10 = uVar10 - 1) {
              if (*puVar8 == 0) {
                param_3 = ((longlong)puVar8 - (longlong)local_70 >> 1) + 1;
                break;
              }
              puVar8 = puVar8 + 1;
            }
            local_80 = local_78;
            local_88 = 0;
            local_90 = (char *)CONCAT44(local_90._4_4_,(int)param_3);
            iVar4 = FUN_1401aeb80(iVar4,0,local_70,param_3 & 0xffffffff);
            if ((iVar4 == 0) || (local_78[0] != 0)) {
LAB_1401bee55:
              param_4[0x30] = '\x01';
              param_4[0x2c] = '*';
              param_4[0x2d] = '\0';
              param_4[0x2e] = '\0';
              param_4[0x2f] = '\0';
            }
            goto LAB_1401bf066;
          }
          local_80 = local_78;
          local_88 = 0;
          local_90 = (char *)CONCAT44(local_90._4_4_,(int)param_3);
          iVar4 = FUN_1401aeb80(iVar4,0,local_70,0xffffffff);
          if (local_78[0] == 0) {
            if (iVar4 != 0) goto LAB_1401bf066;
            DVar5 = GetLastError();
            if (DVar5 == 0x7a) {
              if (param_3 != 0) {
                uVar10 = 0;
                do {
                  local_80 = local_78;
                  local_88 = 0;
                  iVar4 = *(int *)(*(longlong *)(param_4 + 0x18) + 8);
                  if (5 < iVar4) {
                    iVar4 = 5;
                  }
                  local_90 = (char *)CONCAT44(local_90._4_4_,iVar4);
                  local_98 = local_60;
                  iVar4 = FUN_1401aeb80(*(undefined4 *)(*(longlong *)(param_4 + 0x18) + 0xc),0,
                                        local_70,1);
                  if ((((iVar4 == 0) || (local_78[0] != 0)) || (iVar4 < 0)) ||
                     (uVar7 = (ulonglong)iVar4, 5 < uVar7)) goto LAB_1401bf058;
                  if (param_3 < uVar7 + uVar10) break;
                  uVar6 = uVar9;
                  if (0 < (longlong)uVar7) {
                    do {
                      cVar1 = local_60[uVar6];
                      param_1[uVar10] = cVar1;
                      if (cVar1 == '\0') goto LAB_1401bf066;
                      uVar6 = uVar6 + 1;
                      uVar10 = uVar10 + 1;
                    } while ((longlong)uVar6 < (longlong)uVar7);
                  }
                  local_70 = local_70 + 1;
                } while (uVar10 < param_3);
              }
              goto LAB_1401bf066;
            }
          }
        }
LAB_1401bf058:
        param_4[0x2c] = '*';
        param_4[0x2d] = '\0';
        param_4[0x2e] = '\0';
        param_4[0x2f] = '\0';
        param_4[0x30] = '\x01';
      }
    }
  }
LAB_1401bf066:
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_58 ^ (ulonglong)auStack_b8);
}

