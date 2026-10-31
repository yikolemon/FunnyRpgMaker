/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10217071 */

int __fastcall FUN_10217071(int param_1,int param_2)

{
  uint uVar1;
  int *piVar2;
  undefined4 *puVar3;
  int *piVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 uVar7;
  undefined1 *puVar8;
  int iVar9;
  int local_78;
  int *local_74;
  undefined4 local_70;
  undefined4 *local_6c;
  int local_68;
  undefined1 *local_64;
  int *local_60;
  undefined1 uStack_59;
  int *piStack_58;
  int *piStack_54;
  uint uStack_50;
  uint uStack_4c;
  int iStack_48;
  undefined1 local_44 [4];
  undefined4 local_40;
  int *local_3c;
  undefined2 local_38;
  int *local_34;
  int *local_2c;
  int local_28;
  int local_24;
  uint local_20;
  int local_1c;
  int local_18;
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)&local_78;
  uVar5 = *(undefined4 *)(param_1 + 0x1c);
  local_18 = FUN_101c4f57(param_1,&DAT_10321f40,local_44);
  iVar9 = local_18;
  if (((((local_18 == 0) && (iVar9 = 8, local_40 != 0x74746366)) && (local_40 != 0x774f4646)) &&
      ((local_70 = uVar5, 0xf000 < (ushort)(local_38 - 0x1000) && local_3c == *(int **)(param_1 + 4)
       && ((int *)((uint)local_38 * 0x14 + 0x2c) < local_3c)))) &&
     (((uint)local_34 & 3) == 0 && (int *)((uint)local_38 << 4 | 0xc) < local_34)) {
    if (local_2c == (int *)0x0) {
      if (local_28 != 0 || local_24 != 0) goto LAB_102170a7;
    }
    else if ((local_28 != 0) && (local_24 == 0)) goto LAB_102170a7;
    if ((local_20 != 0) || (local_1c == 0)) {
      local_64 = (undefined1 *)FUN_101c21f6(uVar5,0xc,&local_18);
      if (local_18 == 0) {
        local_68 = FUN_101bff17(uVar5,0x28,&local_18);
        uVar7 = local_70;
        if (local_18 == 0) {
          local_78 = 0x1f;
          if (local_38 != 0) {
            for (; local_38 >> local_78 == 0; local_78 = local_78 + -1) {
            }
          }
          iVar9 = 0x10 << ((byte)local_78 & 0x1f);
          iVar6 = (uint)local_38 * 0x10 - iVar9;
          *local_64 = local_40._3_1_;
          local_64[1] = local_40._2_1_;
          local_64[2] = local_40._1_1_;
          local_64[3] = (undefined1)local_40;
          local_64[4] = local_38._1_1_;
          local_64[5] = (undefined1)local_38;
          local_64[6] = (char)((uint)iVar9 >> 8);
          local_64[7] = (char)iVar9;
          local_64[8] = 0;
          local_64[9] = (byte)local_78;
          local_64[10] = (char)((uint)iVar6 >> 8);
          local_64[0xb] = (char)iVar6;
          puVar3 = (undefined4 *)FUN_101c2a50(local_70,0x18,0,local_38,0,&local_18);
          if (local_18 == 0) {
            local_6c = puVar3;
            local_78 = FUN_101c2a50(uVar7,4,0,local_38,0,&local_18);
            puVar3 = local_6c;
            iVar9 = local_78;
            iVar6 = local_68;
            if ((local_18 == 0) &&
               (local_18 = FUN_101c4b69(param_1,(uint)local_38 * 0x14), puVar3 = local_6c,
               iVar9 = local_78, iVar6 = local_68, local_18 == 0)) {
              if (local_38 != 0) {
                piVar4 = (int *)0x0;
                local_60 = (int *)0x0;
                do {
                  local_74 = piVar4;
                  uVar5 = FUN_101c4ce4(param_1);
                  *puVar3 = uVar5;
                  uVar5 = FUN_101c4ce4(param_1);
                  puVar3[1] = uVar5;
                  uVar5 = FUN_101c4ce4(param_1);
                  puVar3[2] = uVar5;
                  uVar5 = FUN_101c4ce4(param_1);
                  puVar3[3] = uVar5;
                  uVar5 = FUN_101c4ce4(param_1);
                  puVar3[4] = uVar5;
                  piVar4 = (int *)*puVar3;
                  if (piVar4 <= local_74) {
                    FUN_101c4c66(param_1);
                    goto LAB_1021743a;
                  }
                  *(undefined4 **)(local_78 + (int)local_60 * 4) = puVar3;
                  local_60 = (int *)((int)local_60 + 1);
                  puVar3 = puVar3 + 6;
                } while (local_60 < (int *)(uint)local_38);
              }
              FUN_101c4c66(param_1);
              FUN_1026fb00(local_78,local_38,4,&LAB_102176b4);
              uStack_50 = (uint)local_38;
              local_74 = (int *)(uStack_50 << 4 | 0xc);
              piVar4 = (int *)(uStack_50 * 0x14 + 0x2c);
              if (uStack_50 != 0) {
                piStack_54 = local_3c;
                piStack_58 = local_34;
                uVar1 = 0;
                do {
                  uStack_4c = uVar1;
                  local_60 = piVar4;
                  iVar9 = *(int *)(local_78 + uStack_4c * 4);
                  if (*(int **)(iVar9 + 4) != local_60) goto LAB_1021743a;
                  piVar4 = *(int **)(iVar9 + 8);
                  if ((local_3c < piVar4) || ((int *)((int)local_3c - (int)piVar4) < local_60))
                  goto LAB_1021743a;
                  piVar2 = *(int **)(iVar9 + 0xc);
                  uStack_59 = local_34 < piVar2;
                  if ((piVar2 < piVar4) ||
                     (((bool)uStack_59 || ((int *)((int)local_34 - (int)piVar2) < local_74))))
                  goto LAB_1021743a;
                  *(int **)(iVar9 + 0x14) = local_74;
                  piVar4 = (int *)((int)local_60 + ((uint)((int)piVar4 + 3) & 0xfffffffc));
                  local_74 = (int *)((int)local_74 + ((uint)((int)piVar2 + 3) & 0xfffffffc));
                  uVar1 = uStack_4c + 1;
                } while (uStack_50 != uStack_4c + 1);
              }
              if ((((local_2c == (int *)0x0) ||
                   ((local_2c == piVar4 &&
                    (piVar4 = (int *)((int)piVar4 + local_28), piVar4 <= local_3c)))) &&
                  ((local_20 == 0 ||
                   ((local_20 == ((uint)((int)piVar4 + 3) & 0xfffffffc) &&
                    (piVar4 = (int *)(local_20 + local_1c), piVar4 <= local_3c)))))) &&
                 ((local_74 == local_34 && (piVar4 == local_3c)))) {
                local_64 = (undefined1 *)FUN_101c2a50(local_70,1,0xc,local_74,local_64,&local_18);
                puVar3 = local_6c;
                uVar7 = local_70;
                iVar9 = local_78;
                iVar6 = local_68;
                if (local_18 == 0) {
                  if (local_38 != 0) {
                    puVar8 = local_64 + 0xc;
                    local_74 = local_6c + 5;
                    local_60 = (int *)0x0;
                    do {
                      *puVar8 = *(undefined1 *)((int)local_74 + -0x11);
                      puVar8[1] = *(undefined1 *)((int)local_74 + -0x12);
                      puVar8[2] = *(undefined1 *)((int)local_74 + -0x13);
                      puVar8[3] = (char)local_74[-5];
                      puVar8[4] = *(undefined1 *)((int)local_74 + -1);
                      puVar8[5] = *(undefined1 *)((int)local_74 + -2);
                      puVar8[6] = *(undefined1 *)((int)local_74 + -3);
                      puVar8[7] = (char)local_74[-1];
                      puVar8[8] = *(undefined1 *)((int)local_74 + 3);
                      puVar8[9] = *(undefined1 *)((int)local_74 + 2);
                      puVar8[10] = *(undefined1 *)((int)local_74 + 1);
                      puVar8[0xb] = (char)*local_74;
                      puVar8[0xc] = *(undefined1 *)((int)local_74 + -5);
                      puVar8[0xd] = *(undefined1 *)((int)local_74 + -6);
                      puVar8[0xe] = *(undefined1 *)((int)local_74 + -7);
                      puVar8[0xf] = (char)local_74[-2];
                      local_18 = FUN_101c461e(param_1,local_74[-4]);
                      puVar3 = local_6c;
                      uVar7 = local_70;
                      iVar9 = local_78;
                      iVar6 = local_68;
                      if ((local_18 != 0) ||
                         (local_18 = FUN_101c4b69(param_1,local_74[-3]), puVar3 = local_6c,
                         uVar7 = local_70, iVar9 = local_78, iVar6 = local_68, local_18 != 0))
                      goto LAB_10217451;
                      iVar9 = local_74[-3];
                      if (iVar9 != local_74[-2]) {
                        iStack_48 = local_74[-2];
                        local_18 = FUN_102245b8(local_70,local_64 + *local_74,&iStack_48,
                                                *(undefined4 *)(param_1 + 0x20),iVar9);
                        if (local_18 == 0) {
                          if (iStack_48 == local_74[-2]) goto LAB_102175fb;
                          local_18 = 8;
                        }
                        FUN_101c4c66(param_1);
                        puVar3 = local_6c;
                        uVar7 = local_70;
                        iVar9 = local_78;
                        iVar6 = local_68;
                        goto LAB_10217451;
                      }
                      FUN_1025b2d0(local_64 + *local_74,*(undefined4 *)(param_1 + 0x20),iVar9);
LAB_102175fb:
                      FUN_101c4c66(param_1);
                      uVar1 = local_74[-2] + *local_74;
                      if ((uVar1 & 3) != 0) {
                        _memset(local_64 + uVar1,0,(~local_74[-2] - *local_74 & 3U) + 1);
                      }
                      local_60 = (int *)((int)local_60 + 1);
                      local_74 = local_74 + 6;
                      puVar8 = puVar8 + 0x10;
                    } while (local_60 < (int *)(uint)local_38);
                  }
                  iVar6 = local_68;
                  FUN_101c0a33(local_68,local_64,local_34);
                  *(undefined4 *)(iVar6 + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
                  *(undefined1 **)(iVar6 + 0x18) = &LAB_102176cf;
                  FUN_101c0a65(*(undefined4 *)(param_2 + 0x68),*(uint *)(param_2 + 8) >> 10 & 1);
                  *(int *)(param_2 + 0x68) = iVar6;
                  *(byte *)(param_2 + 9) = *(byte *)(param_2 + 9) & 0xfb;
                  puVar3 = local_6c;
                  uVar7 = local_70;
                  iVar9 = local_78;
                }
              }
              else {
LAB_1021743a:
                local_18 = 8;
                puVar3 = local_6c;
                uVar7 = local_70;
                iVar9 = local_78;
                iVar6 = local_68;
              }
            }
          }
          else {
            iVar9 = 0;
            iVar6 = local_68;
          }
        }
        else {
          puVar3 = (undefined4 *)0x0;
          uVar7 = uVar5;
          iVar9 = 0;
          iVar6 = local_68;
        }
      }
      else {
        puVar3 = (undefined4 *)0x0;
        uVar7 = uVar5;
        iVar9 = 0;
        iVar6 = 0;
      }
LAB_10217451:
      FUN_101c0017(uVar7,puVar3);
      FUN_101c0017(uVar7,iVar9);
      iVar9 = 0;
      if (local_18 != 0) {
        FUN_101c0017(uVar7,local_64);
        FUN_101c0a53(iVar6);
        FUN_101c0017(uVar7,iVar6);
        iVar9 = local_18;
      }
    }
  }
LAB_102170a7:
  if (DAT_10388d00 != (local_14 ^ (uint)&local_78)) {
                    /* WARNING: Subroutine does not return */
    FUN_102283e0();
  }
  return iVar9;
}

