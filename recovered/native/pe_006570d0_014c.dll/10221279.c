/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10221279 */

int __fastcall
FUN_10221279(int *param_1,int param_2,int param_3,uint param_4,int param_5,uint *param_6)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined1 uVar3;
  int *piVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  int *piVar12;
  int *local_88;
  int local_84;
  char local_7d;
  undefined4 *local_7c;
  uint local_78;
  uint local_74;
  uint local_70;
  int *local_6c;
  int local_68;
  uint local_64;
  uint local_60;
  int local_5c;
  uint local_58;
  int *local_54;
  int local_50;
  int local_4c;
  int local_48;
  int *local_44;
  int local_40;
  int local_3c;
  int local_38;
  undefined8 local_34;
  int local_2c;
  int local_28;
  int iStack_24;
  int local_20;
  int local_1c;
  int local_18;
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)&local_88;
  local_18 = 0;
  if (((param_1 == (int *)0x0 || param_6 == (uint *)0x0) || (param_2 - 0x21U < 0xffffffe1)) ||
     (iVar8 = *param_1, iVar8 == 0)) {
    local_18 = 6;
    piVar4 = (int *)0x0;
    iVar8 = 0;
  }
  else {
    local_84 = iVar8;
    local_68 = param_2;
    if ((uint)(0x7fffffff / (ulonglong)param_6[1]) < *param_6) {
      local_18 = 10;
      piVar4 = (int *)0x0;
    }
    else {
      piVar4 = (int *)FUN_101c00c3(iVar8,0xc,0,param_6[1] * *param_6,0,&local_18);
      iVar8 = local_84;
      if (local_18 == 0) {
        uVar5 = param_6[1];
        if ((uVar5 == 0) || (local_74 = *param_6, local_74 == 0)) {
          local_18 = 0x13;
        }
        else {
          local_5c = local_68 << 0x10;
          local_58 = param_6[3];
          iVar8 = param_1[1];
          local_70 = uVar5;
          local_6c = piVar4;
          if (iVar8 != 0) {
            local_38 = param_3;
            local_7d = param_4._1_1_;
            local_50 = local_68 * -0x40 + 0x20;
            local_54 = piVar4 + local_68 * -3;
            local_48 = uVar5 * 0xc;
            iVar11 = local_68;
            do {
              puVar2 = *(undefined4 **)(iVar8 + 8);
              local_4c = iVar8;
              puVar1 = local_7c;
              while (local_7c = puVar2, local_7c != (undefined4 *)0x0) {
                FUN_10221ad8(*local_7c,local_7c[1],local_7c[2],local_7c[3],local_7c[4],local_7c[5],
                             local_7c[6],local_7c[7],(int)*(undefined8 *)(local_7c + 8),
                             (int)((ulonglong)*(undefined8 *)(local_7c + 8) >> 0x20));
                iVar8 = local_28 + -0x3f;
                if (local_28 + -0x3f < 0) {
                  iVar8 = local_28;
                }
                iVar6 = local_20 + 0x7e;
                if (-1 < local_20 + 0x3f) {
                  iVar6 = local_20 + 0x3f;
                }
                iVar7 = iStack_24 + -0x3f;
                if (iStack_24 + -0x3f < 0) {
                  iVar7 = iStack_24;
                }
                local_88 = (int *)((iVar7 >> 6) - iVar11);
                iVar7 = local_1c + 0x7e;
                if (-1 < local_1c + 0x3f) {
                  iVar7 = local_1c + 0x3f;
                }
                local_3c = (iVar7 >> 6) + iVar11;
                if ((int)local_88 < local_3c) {
                  iVar8 = iVar8 >> 6;
                  local_60 = iVar8 - local_68;
                  uVar5 = (iVar6 >> 6) + local_68;
                  local_40 = iVar8 * 0x40 + local_50;
                  local_44 = local_54 + iVar8 * 3;
                  uVar9 = local_70;
                  local_78 = uVar5;
                  do {
                    if ((int)local_60 < (int)uVar5) {
                      local_64 = (int)local_88 << 6 | 0x20;
                      piVar4 = (int *)(~(uint)local_88 + local_74);
                      if (local_7d != '\0') {
                        piVar4 = local_88;
                      }
                      piVar12 = (int *)((int)piVar4 * local_48 + (int)local_44);
                      uVar10 = local_60;
                      do {
                        local_20 = 0;
                        iStack_24 = 0;
                        local_28 = 0x7fffffff;
                        if (((int)uVar10 < (int)uVar9 && (int)local_88 < (int)local_74) &&
                            -1 < (int)((uint)local_88 | uVar10)) {
                          local_18 = FUN_10221b78(local_64,&local_28);
                          piVar4 = local_6c;
                          iVar8 = local_84;
                          if (local_18 != 0) goto LAB_102212f0;
                          if (local_38 == 1) {
                            local_20 = CONCAT31(local_20._1_3_,-(char)local_20);
                          }
                          if (local_28 <= local_5c) {
                            if ((char)piVar12[2] == '\0') {
LAB_10221590:
                              piVar12[2] = local_20;
                              iVar8 = local_28;
                              iVar11 = iStack_24;
                            }
                            else {
                              iVar8 = *piVar12;
                              uVar5 = local_28 - iVar8;
                              if (local_28 < iVar8) {
                                uVar5 = iVar8 - local_28;
                              }
                              if (0x20 < uVar5) {
                                if (iVar8 <= local_28) goto LAB_102215a1;
                                goto LAB_10221590;
                              }
                              FUN_10221bbc(*(undefined8 *)piVar12,piVar12[2],local_28,iStack_24,
                                           local_20);
                              piVar12[2] = local_2c;
                              iVar8 = (int)local_34;
                              iVar11 = (int)((ulonglong)local_34 >> 0x20);
                            }
                            *(ulonglong *)piVar12 = CONCAT44(iVar11,iVar8);
                          }
                        }
LAB_102215a1:
                        uVar10 = uVar10 + 1;
                        piVar12 = piVar12 + 3;
                        uVar5 = local_78;
                        uVar9 = local_70;
                      } while ((int)uVar10 < (int)local_78);
                    }
                    local_88 = (int *)((int)local_88 + 1);
                  } while ((int)local_88 < local_3c);
                }
                iVar11 = local_68;
                puVar1 = local_7c;
                puVar2 = (undefined4 *)local_7c[9];
              }
              iVar8 = *(int *)(local_4c + 0xc);
              local_7c = puVar1;
            } while (iVar8 != 0);
          }
          iVar11 = local_5c;
          piVar4 = local_6c;
          iVar8 = local_84;
          if (0 < (int)local_74) {
            uVar9 = 0;
            local_64 = CONCAT31((int3)(-(uint)(param_5 == 0) >> 8),
                                (byte)-(uint)(param_5 == 0) | (byte)(param_5 >> 0x1f)) | 1;
            param_4 = param_4 & 0xff;
            local_7c = (undefined4 *)(local_70 * 0xc);
            uVar5 = local_70;
            local_88 = local_6c;
            do {
              local_78 = uVar9;
              if (0 < (int)uVar5) {
                uVar9 = 0;
                param_4 = (uint)CONCAT11((char)local_64,(char)param_4);
                piVar4 = local_88;
                do {
                  iVar8 = iVar11;
                  if ((char)piVar4[2] != '\0') {
                    iVar8 = *piVar4;
                    if (iVar11 <= *piVar4) {
                      iVar8 = iVar11;
                    }
                    param_4 = (uint)CONCAT11((char)piVar4[2],(char)param_4);
                  }
                  iVar7 = (int)(char)(param_4 >> 8);
                  iVar6 = -iVar7;
                  if ((char)param_4 == '\0') {
                    iVar6 = iVar7;
                  }
                  *piVar4 = iVar6 * iVar8;
                  uVar3 = FUN_10220776();
                  *(undefined1 *)(local_58 + uVar9) = uVar3;
                  uVar9 = uVar9 + 1;
                  piVar4 = piVar4 + 3;
                  uVar5 = local_70;
                } while (local_70 != uVar9);
              }
              uVar9 = local_78 + 1;
              local_88 = (int *)((int)local_88 + (int)local_7c);
              local_58 = local_58 + uVar5;
              piVar4 = local_6c;
              iVar8 = local_84;
            } while (uVar9 != local_74);
          }
        }
      }
    }
  }
LAB_102212f0:
  FUN_101c0017(iVar8,piVar4);
  if (DAT_10388d00 == (local_14 ^ (uint)&local_88)) {
    return local_18;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

