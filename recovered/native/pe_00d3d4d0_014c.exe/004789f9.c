/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 004789f9 */

int __fastcall
FUN_004789f9(int *param_1,int param_2,int param_3,uint param_4,int param_5,uint *param_6)

{
  int *piVar1;
  int *piVar2;
  uint *puVar3;
  uint uVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  uint *puVar12;
  uint *local_88;
  int local_84;
  char local_7d;
  int *local_7c;
  uint local_78;
  uint local_74;
  uint local_70;
  uint *local_6c;
  int local_68;
  uint local_64;
  uint local_60;
  uint local_5c;
  uint local_58;
  uint *local_54;
  int local_50;
  int local_4c;
  int local_48;
  uint *local_44;
  int local_40;
  int local_3c;
  int local_38;
  undefined8 local_34;
  uint local_2c;
  uint local_28;
  uint uStack_24;
  uint local_20;
  int local_1c;
  int local_18;
  uint local_14;
  
  local_14 = DAT_0050e8c0 ^ (uint)&local_88;
  local_18 = 0;
  if (((param_1 == (int *)0x0 || param_6 == (uint *)0x0) || (param_2 - 0x21U < 0xffffffe1)) ||
     (iVar7 = *param_1, iVar7 == 0)) {
    local_18 = 6;
    puVar3 = (uint *)0x0;
    iVar7 = 0;
  }
  else {
    local_84 = iVar7;
    local_68 = param_2;
    if ((uint)(0x7fffffff / (ulonglong)param_6[1]) < *param_6) {
      local_18 = 10;
      puVar3 = (uint *)0x0;
    }
    else {
      puVar3 = (uint *)FUN_0041c6b3(iVar7,0xc,0,param_6[1] * *param_6,0,&local_18);
      iVar7 = local_84;
      if (local_18 == 0) {
        uVar6 = param_6[1];
        if ((uVar6 == 0) || (local_74 = *param_6, local_74 == 0)) {
          local_18 = 0x13;
        }
        else {
          local_5c = local_68 << 0x10;
          local_58 = param_6[3];
          iVar7 = param_1[1];
          local_70 = uVar6;
          local_6c = puVar3;
          if (iVar7 != 0) {
            local_38 = param_3;
            local_7d = param_4._1_1_;
            local_50 = local_68 * -0x40 + 0x20;
            local_54 = puVar3 + local_68 * -3;
            local_48 = uVar6 * 0xc;
            iVar9 = local_68;
            do {
              piVar2 = *(int **)(iVar7 + 8);
              local_4c = iVar7;
              piVar1 = local_7c;
              while (local_7c = piVar2, local_7c != (int *)0x0) {
                FUN_00479258(&local_28,*local_7c,local_7c[1],local_7c[2],local_7c[3],local_7c[4],
                             local_7c[5],local_7c[6],local_7c[7],(int)*(undefined8 *)(local_7c + 8))
                ;
                uVar6 = local_28 - 0x3f;
                if ((int)(local_28 - 0x3f) < 0) {
                  uVar6 = local_28;
                }
                iVar7 = local_20 + 0x7e;
                if (-1 < (int)(local_20 + 0x3f)) {
                  iVar7 = local_20 + 0x3f;
                }
                uVar4 = uStack_24 - 0x3f;
                if ((int)(uStack_24 - 0x3f) < 0) {
                  uVar4 = uStack_24;
                }
                local_88 = (uint *)(((int)uVar4 >> 6) - iVar9);
                iVar8 = local_1c + 0x7e;
                if (-1 < local_1c + 0x3f) {
                  iVar8 = local_1c + 0x3f;
                }
                local_3c = (iVar8 >> 6) + iVar9;
                if ((int)local_88 < local_3c) {
                  iVar9 = (int)uVar6 >> 6;
                  local_60 = iVar9 - local_68;
                  uVar6 = (iVar7 >> 6) + local_68;
                  local_40 = iVar9 * 0x40 + local_50;
                  local_44 = local_54 + iVar9 * 3;
                  uVar4 = local_70;
                  local_78 = uVar6;
                  do {
                    if ((int)local_60 < (int)uVar6) {
                      local_64 = (int)local_88 << 6 | 0x20;
                      puVar3 = (uint *)(~(uint)local_88 + local_74);
                      if (local_7d != '\0') {
                        puVar3 = local_88;
                      }
                      puVar12 = (uint *)((int)puVar3 * local_48 + (int)local_44);
                      iVar9 = local_40;
                      uVar11 = local_60;
                      do {
                        local_20 = 0;
                        uStack_24 = 0;
                        local_28 = 0x7fffffff;
                        if (((int)uVar11 < (int)uVar4 && (int)local_88 < (int)local_74) &&
                            -1 < (int)((uint)local_88 | uVar11)) {
                          local_18 = FUN_004792f8(local_7c,iVar9,local_64,&local_28);
                          puVar3 = local_6c;
                          iVar7 = local_84;
                          if (local_18 != 0) goto LAB_00478a70;
                          if (local_38 == 1) {
                            local_20 = CONCAT31(local_20._1_3_,-(char)local_20);
                          }
                          if ((int)local_28 <= (int)local_5c) {
                            if ((char)puVar12[2] == '\0') {
LAB_00478d10:
                              puVar12[2] = local_20;
                              uVar6 = local_28;
                              uVar4 = uStack_24;
                            }
                            else {
                              uVar6 = *puVar12;
                              uVar4 = local_28 - uVar6;
                              if ((int)local_28 < (int)uVar6) {
                                uVar4 = uVar6 - local_28;
                              }
                              if (0x20 < uVar4) {
                                if ((int)uVar6 <= (int)local_28) goto LAB_00478d21;
                                goto LAB_00478d10;
                              }
                              FUN_0047933c(&local_34,(int)*(undefined8 *)puVar12,
                                           (uint)((ulonglong)*(undefined8 *)puVar12 >> 0x20),
                                           puVar12[2],local_28,uStack_24);
                              puVar12[2] = local_2c;
                              uVar6 = (uint)local_34;
                              uVar4 = (uint)((ulonglong)local_34 >> 0x20);
                            }
                            *(ulonglong *)puVar12 = CONCAT44(uVar4,uVar6);
                          }
                        }
LAB_00478d21:
                        uVar11 = uVar11 + 1;
                        iVar9 = iVar9 + 0x40;
                        puVar12 = puVar12 + 3;
                        uVar6 = local_78;
                        uVar4 = local_70;
                      } while ((int)uVar11 < (int)local_78);
                    }
                    local_88 = (uint *)((int)local_88 + 1);
                  } while ((int)local_88 < local_3c);
                }
                iVar9 = local_68;
                piVar1 = local_7c;
                piVar2 = (int *)local_7c[9];
              }
              iVar7 = *(int *)(local_4c + 0xc);
              local_7c = piVar1;
            } while (iVar7 != 0);
          }
          uVar6 = local_5c;
          puVar3 = local_6c;
          iVar7 = local_84;
          if (0 < (int)local_74) {
            uVar10 = 0;
            local_64 = CONCAT31((int3)(-(uint)(param_5 == 0) >> 8),
                                (byte)-(uint)(param_5 == 0) | (byte)(param_5 >> 0x1f)) | 1;
            uVar11 = param_4 & 0xff;
            local_7c = (int *)(local_70 * 0xc);
            uVar4 = local_70;
            local_88 = local_6c;
            do {
              local_78 = uVar10;
              if (0 < (int)uVar4) {
                uVar10 = 0;
                uVar11 = (uint)CONCAT11((char)local_64,(char)uVar11);
                puVar3 = local_88;
                do {
                  uVar4 = uVar6;
                  if ((char)puVar3[2] != '\0') {
                    uVar4 = *puVar3;
                    if ((int)uVar6 <= (int)*puVar3) {
                      uVar4 = uVar6;
                    }
                    uVar11 = (uint)CONCAT11((char)puVar3[2],(char)uVar11);
                  }
                  iVar9 = (int)(char)(uVar11 >> 8);
                  iVar7 = -iVar9;
                  if ((char)uVar11 == '\0') {
                    iVar7 = iVar9;
                  }
                  *puVar3 = iVar7 * uVar4;
                  uVar5 = FUN_00477ef6(iVar7 * uVar4,uVar6);
                  *(char *)(local_58 + uVar10) = (char)uVar5;
                  uVar10 = uVar10 + 1;
                  puVar3 = puVar3 + 3;
                  uVar4 = local_70;
                } while (local_70 != uVar10);
              }
              uVar10 = local_78 + 1;
              local_88 = (uint *)((int)local_88 + (int)local_7c);
              local_58 = local_58 + uVar4;
              puVar3 = local_6c;
              iVar7 = local_84;
            } while (uVar10 != local_74);
          }
        }
      }
    }
  }
LAB_00478a70:
  FUN_0041c607(iVar7,(int)puVar3);
  if (DAT_0050e8c0 == (local_14 ^ (uint)&local_88)) {
    return local_18;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0047f2c0(local_14 ^ (uint)&local_88);
}

