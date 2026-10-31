/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0046e7f1 */

int __fastcall FUN_0046e7f1(int *param_1,int param_2)

{
  uint *puVar1;
  int iVar2;
  uint *puVar3;
  undefined1 *puVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int unaff_EBX;
  uint unaff_EBP;
  undefined4 *puVar8;
  uint unaff_ESI;
  int iVar9;
  int unaff_EDI;
  undefined4 *puVar10;
  undefined4 *local_68;
  uint *local_64;
  uint local_60;
  uint *puStack_5c;
  undefined4 *puStack_58;
  int iStack_54;
  uint *puStack_50;
  undefined1 uStack_49;
  uint *puStack_48;
  uint *local_44;
  undefined4 local_40;
  uint local_3c;
  undefined4 local_38;
  uint local_34;
  uint *local_2c;
  uint local_28;
  uint *local_24;
  int local_20;
  uint *local_1c;
  int local_18;
  uint local_14;
  
  local_14 = DAT_0050e8c0 ^ (uint)&stack0xffffff88;
  uVar5 = param_1[7];
  local_18 = FUN_00420fcf(param_1,0x4f64e0,(int)&local_44);
  iVar9 = local_18;
  if (((((local_18 == 0) && (iVar9 = 8, local_40 != 0x74746366)) && (local_40 != 0x774f4646)) &&
      ((0xf000 < (ushort)((ushort)local_38 - 0x1000) && local_3c == param_1[1] &&
       ((local_38 & 0xffff) * 0x14 + 0x2c < local_3c)))) &&
     ((local_34 & 3) == 0 && ((local_38 & 0xffff) << 4 | 0xc) < local_34)) {
    if (local_2c == (uint *)0x0) {
      if (local_28 != 0 || local_24 != (uint *)0x0) goto LAB_0046e827;
    }
    else if ((local_28 != 0) && (local_24 == (uint *)0x0)) goto LAB_0046e827;
    if ((local_20 != 0) || (local_1c == (uint *)0x0)) {
      uVar6 = uVar5;
      local_64 = (uint *)FUN_0041e773(uVar5,0xc,&local_18);
      if (local_18 == 0) {
        local_68 = FUN_0041c507(uVar5,0x28,&local_18);
        if (local_18 == 0) {
          iVar9 = 0x1f;
          if ((local_38 & 0xffff) != 0) {
            for (; (ushort)local_38 >> iVar9 == 0; iVar9 = iVar9 + -1) {
            }
          }
          iVar2 = 0x10 << ((byte)iVar9 & 0x1f);
          iVar7 = (local_38 & 0xffff) * 0x10 - iVar2;
          *(undefined1 *)local_64 = local_40._3_1_;
          *(undefined1 *)((int)local_64 + 1) = local_40._2_1_;
          *(undefined1 *)((int)local_64 + 2) = local_40._1_1_;
          *(undefined1 *)((int)local_64 + 3) = (undefined1)local_40;
          *(undefined1 *)(local_64 + 1) = local_38._1_1_;
          *(undefined1 *)((int)local_64 + 5) = (undefined1)local_38;
          *(char *)((int)local_64 + 6) = (char)((uint)iVar2 >> 8);
          *(char *)((int)local_64 + 7) = (char)iVar2;
          *(undefined1 *)(local_64 + 2) = 0;
          *(byte *)((int)local_64 + 9) = (byte)iVar9;
          *(char *)((int)local_64 + 10) = (char)((uint)iVar7 >> 8);
          *(char *)((int)local_64 + 0xb) = (char)iVar7;
          puVar3 = (uint *)FUN_0041efcd(uVar6,0x18,0,local_38 & 0xffff,0,&local_18);
          if (local_18 == 0) {
            puVar4 = (undefined1 *)FUN_0041efcd(uVar6,4,0,local_38 & 0xffff,0,&local_18);
            puVar8 = local_68;
            puVar10 = puStack_58;
            if ((local_18 == 0) &&
               (local_18 = FUN_00420be1(param_1,(local_38 & 0xffff) * 0x14), puVar8 = local_68,
               puVar10 = puStack_58, local_18 == 0)) {
              if ((ushort)local_38 != 0) {
                uVar5 = 0;
                local_60 = 0;
                do {
                  uVar6 = FUN_00420d5c((int)param_1);
                  *puVar3 = uVar6;
                  uVar6 = FUN_00420d5c((int)param_1);
                  puVar3[1] = uVar6;
                  uVar6 = FUN_00420d5c((int)param_1);
                  puVar3[2] = uVar6;
                  uVar6 = FUN_00420d5c((int)param_1);
                  puVar3[3] = uVar6;
                  uVar6 = uVar5;
                  uVar5 = FUN_00420d5c((int)param_1);
                  puVar3[4] = uVar5;
                  uVar5 = *puVar3;
                  if (uVar5 <= uVar6) {
                    FUN_00420cde(param_1);
                    goto LAB_0046ebba;
                  }
                  *(uint **)(puVar4 + local_60 * 4) = puVar3;
                  local_60 = local_60 + 1;
                  puVar3 = puVar3 + 6;
                } while (local_60 < (local_38 & 0xffff));
              }
              FUN_00420cde(param_1);
              FUN_00492530(puVar4,local_38 & 0xffff,4,&LAB_0046ee34);
              local_40 = local_28 & 0xffff;
              local_64 = (uint *)(local_40 << 4 | 0xc);
              puVar3 = (uint *)(local_40 * 0x14 + 0x2c);
              if (local_40 != 0) {
                local_44 = local_2c;
                puStack_48 = local_24;
                uVar5 = 0;
                do {
                  local_3c = uVar5;
                  puStack_50 = puVar3;
                  iVar9 = local_68[local_3c];
                  if (*(uint **)(iVar9 + 4) != puStack_50) goto LAB_0046ebba;
                  puVar3 = *(uint **)(iVar9 + 8);
                  if ((local_2c < puVar3) || ((uint *)((int)local_2c - (int)puVar3) < puStack_50))
                  goto LAB_0046ebba;
                  puVar1 = *(uint **)(iVar9 + 0xc);
                  uStack_49 = local_24 < puVar1;
                  if ((puVar1 < puVar3) ||
                     (((bool)uStack_49 || ((uint *)((int)local_24 - (int)puVar1) < local_64))))
                  goto LAB_0046ebba;
                  *(uint **)(iVar9 + 0x14) = local_64;
                  puVar3 = (uint *)((int)puStack_50 + ((uint)((int)puVar3 + 3) & 0xfffffffc));
                  local_64 = (uint *)((int)local_64 + ((uint)((int)puVar1 + 3) & 0xfffffffc));
                  uVar5 = local_3c + 1;
                } while (local_40 != local_3c + 1);
              }
              if ((((local_1c == (uint *)0x0) ||
                   ((local_1c == puVar3 &&
                    (puVar3 = (uint *)((int)puVar3 + local_18), puVar3 <= local_2c)))) &&
                  ((unaff_ESI == 0 ||
                   ((unaff_ESI == ((uint)((int)puVar3 + 3) & 0xfffffffc) &&
                    (puVar3 = (uint *)(unaff_ESI + unaff_EDI), puVar3 <= local_2c)))))) &&
                 ((local_64 == local_24 && (puVar3 == local_2c)))) {
                iStack_54 = FUN_0041efcd(local_60,1,0xc,(uint)local_64,iStack_54,
                                         (int *)&stack0xfffffff8);
                uVar6 = local_60;
                puVar8 = local_68;
                puVar10 = puStack_58;
                if (unaff_EBX == 0) {
                  if ((short)local_28 != 0) {
                    puVar4 = (undefined1 *)(iStack_54 + 0xc);
                    local_64 = puStack_5c + 5;
                    puStack_50 = (uint *)0x0;
                    do {
                      *puVar4 = *(undefined1 *)((int)local_64 + -0x11);
                      puVar4[1] = *(undefined1 *)((int)local_64 + -0x12);
                      puVar4[2] = *(undefined1 *)((int)local_64 + -0x13);
                      puVar4[3] = (char)local_64[-5];
                      puVar4[4] = *(undefined1 *)((int)local_64 + -1);
                      puVar4[5] = *(undefined1 *)((int)local_64 + -2);
                      puVar4[6] = *(undefined1 *)((int)local_64 + -3);
                      puVar4[7] = (char)local_64[-1];
                      puVar4[8] = *(undefined1 *)((int)local_64 + 3);
                      puVar4[9] = *(undefined1 *)((int)local_64 + 2);
                      puVar4[10] = *(undefined1 *)((int)local_64 + 1);
                      puVar4[0xb] = (char)*local_64;
                      puVar4[0xc] = *(undefined1 *)((int)local_64 + -5);
                      puVar4[0xd] = *(undefined1 *)((int)local_64 + -6);
                      puVar4[0xe] = *(undefined1 *)((int)local_64 + -7);
                      puVar4[0xf] = (char)local_64[-2];
                      unaff_EBX = FUN_00420696((int)param_1,local_64[-4]);
                      uVar6 = local_60;
                      puVar8 = local_68;
                      puVar10 = puStack_58;
                      if ((unaff_EBX != 0) ||
                         (unaff_EBX = FUN_00420be1(param_1,local_64[-3]), uVar6 = local_60,
                         puVar8 = local_68, puVar10 = puStack_58, unaff_EBX != 0))
                      goto LAB_0046ebd1;
                      uVar5 = local_64[-3];
                      if (uVar5 != local_64[-2]) {
                        local_38 = local_64[-2];
                        unaff_EBX = FUN_0047b624(local_60,*local_64 + iStack_54,&local_38,param_1[8]
                                                 ,uVar5);
                        if (unaff_EBX == 0) {
                          if (local_38 == local_64[-2]) goto LAB_0046ed7b;
                          unaff_EBX = 8;
                        }
                        FUN_00420cde(param_1);
                        uVar6 = local_60;
                        puVar8 = local_68;
                        puVar10 = puStack_58;
                        goto LAB_0046ebd1;
                      }
                      FUN_004878c0((uint *)(*local_64 + iStack_54),(uint *)param_1[8],uVar5);
LAB_0046ed7b:
                      FUN_00420cde(param_1);
                      uVar5 = local_64[-2] + *local_64;
                      if ((uVar5 & 3) != 0) {
                        _memset((void *)(uVar5 + iStack_54),0,(~local_64[-2] - *local_64 & 3) + 1);
                      }
                      puStack_50 = (uint *)((int)puStack_50 + 1);
                      local_64 = local_64 + 6;
                      puVar4 = puVar4 + 0x10;
                    } while (puStack_50 < (uint *)(local_28 & 0xffff));
                  }
                  FUN_0041d023(puStack_58,iStack_54,local_24);
                  puStack_58[7] = param_1[7];
                  puStack_58[6] = &LAB_0046ee4f;
                  FUN_0041d055(*(int *)(param_2 + 0x68),*(uint *)(param_2 + 8) >> 10 & 1);
                  *(undefined4 **)(param_2 + 0x68) = puStack_58;
                  *(byte *)(param_2 + 9) = *(byte *)(param_2 + 9) & 0xfb;
                  uVar6 = local_60;
                  puVar8 = local_68;
                  puVar10 = puStack_58;
                }
              }
              else {
LAB_0046ebba:
                unaff_EBX = 8;
                uVar6 = local_60;
                puVar8 = local_68;
                puVar10 = puStack_58;
              }
            }
          }
          else {
            puStack_5c = puVar3;
            puVar8 = (undefined4 *)0x0;
            puVar10 = local_68;
          }
        }
        else {
          puStack_5c = (uint *)0x0;
          uVar6 = uVar5;
          puVar8 = (undefined4 *)0x0;
          puVar10 = local_68;
        }
      }
      else {
        puStack_5c = (uint *)0x0;
        uVar6 = uVar5;
        puVar8 = (undefined4 *)0x0;
        puVar10 = (undefined4 *)0x0;
      }
LAB_0046ebd1:
      FUN_0041c607(uVar6,(int)puStack_5c);
      FUN_0041c607(uVar6,(int)puVar8);
      iVar9 = 0;
      if (unaff_EBX != 0) {
        FUN_0041c607(uVar6,iStack_54);
        FUN_0041d043((int)puVar10);
        FUN_0041c607(uVar6,(int)puVar10);
        iVar9 = unaff_EBX;
      }
    }
  }
LAB_0046e827:
  if (DAT_0050e8c0 != (unaff_EBP ^ (uint)&local_68)) {
                    /* WARNING: Subroutine does not return */
    FUN_0047f2c0(unaff_EBP ^ (uint)&local_68);
  }
  return iVar9;
}

