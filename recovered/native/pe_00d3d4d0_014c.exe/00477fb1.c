/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00477fb1 */

int __fastcall
FUN_00477fb1(int *param_1,uint param_2,uint param_3,uint param_4,undefined4 param_5,uint *param_6)

{
  int iVar1;
  uint uVar2;
  char cVar3;
  byte bVar4;
  uint uVar5;
  undefined3 extraout_var;
  undefined4 uVar7;
  uint *puVar8;
  int *piVar9;
  uint *puVar10;
  uint local_5c;
  uint local_58;
  char local_51;
  int local_50;
  int local_4c;
  int *local_48;
  uint local_44;
  int local_40;
  uint *local_3c;
  uint local_38;
  uint *local_34;
  int local_30;
  uint *local_2c;
  uint *local_28;
  uint local_24;
  int local_20;
  int local_1c;
  int local_18;
  uint local_14;
  int iVar6;
  
  local_14 = DAT_0050e8c0 ^ (uint)&local_5c;
  local_18 = 0;
  iVar6 = 6;
  if ((param_6 != (uint *)0x0 && param_1 != (int *)0x0) && (iVar1 = *param_1, iVar1 != 0)) {
    local_51 = (char)param_4;
    param_4 = param_4 & 0xffffff00;
    iVar6 = param_1[1];
    local_5c = 0;
    if (iVar6 != 0) {
      local_5c = 0;
      do {
        local_5c = local_5c + 1;
        iVar6 = *(int *)(iVar6 + 0xc);
      } while (iVar6 != 0);
    }
    local_24 = *param_6;
    local_2c = (uint *)param_6[1];
    local_48 = param_1;
    local_44 = param_2;
    local_40 = iVar1;
    local_20 = iVar1;
    local_3c = (uint *)FUN_0041c6b3(iVar1,0x18,0,local_5c,0,&local_18);
    if (local_18 == 0) {
      local_4c = FUN_0041c6b3(local_40,4,0,local_5c,0,&local_18);
      if (local_18 == 0) {
        piVar9 = local_48 + 1;
        iVar6 = 0;
        local_48 = piVar9;
        if (local_5c != 0) {
          local_34 = (uint *)(param_3 ^ 1);
          local_58 = 0;
          iVar6 = 0;
          puVar10 = local_3c;
          do {
            iVar1 = *piVar9;
            local_50 = iVar6;
            FUN_0047a5a8(puVar10);
            puVar10[1] = param_6[1];
            *puVar10 = *param_6;
            puVar10[2] = param_6[2];
            *(short *)(puVar10 + 4) = (short)param_6[4];
            *(undefined1 *)((int)puVar10 + 0x12) = *(undefined1 *)((int)param_6 + 0x12);
            uVar5 = FUN_0041c6b3(local_40,param_6[2],0,*param_6,0,&local_18);
            puVar10[3] = uVar5;
            if (local_18 != 0) goto LAB_00478082;
            local_28 = puVar10;
            cVar3 = FUN_00478729(iVar1);
            iVar6 = CONCAT31(extraout_var,cVar3);
            *(int *)(local_4c + local_58 * 4) = iVar6;
            local_30 = *(int *)(iVar1 + 0xc);
            *(undefined4 *)(iVar1 + 0xc) = 0;
            local_1c = iVar1;
            local_18 = FUN_00478381(&local_20,local_44,param_3,param_4,
                                    (uint)(iVar6 == 1 && local_34 == (uint *)0x0 ||
                                          iVar6 == 2 && param_3 == 0),local_28);
            if (local_18 != 0) goto LAB_00478089;
            piVar9 = (int *)(iVar1 + 0xc);
            *piVar9 = local_30;
            *(int *)(local_1c + 0xc) = local_50;
            if (param_3 == 1) {
              iVar6 = *(int *)(local_4c + local_58 * 4);
              if (iVar6 == 1) {
                uVar7 = 2;
              }
              else {
                if (iVar6 != 2) goto LAB_00478257;
                uVar7 = 1;
              }
              local_50 = local_1c;
              *(undefined4 *)(local_4c + local_58 * 4) = uVar7;
            }
LAB_00478257:
            local_58 = local_58 + 1;
            puVar10 = puVar10 + 6;
            iVar6 = local_1c;
          } while (local_5c != local_58);
        }
        *local_48 = iVar6;
        if (0 < (int)local_24) {
          local_48 = (int *)param_6[3];
          local_34 = local_3c + 3;
          local_38 = 0;
          do {
            if (0 < (int)local_2c) {
              local_30 = local_38 * (int)local_2c;
              puVar10 = (uint *)0x0;
              do {
                iVar6 = (int)puVar10 + local_30;
                uVar5 = 0;
                if (local_5c != 0) {
                  local_58 = CONCAT31(local_58._1_3_,0xff);
                  local_44 = 0;
                  puVar8 = local_34;
                  do {
                    bVar4 = *(byte *)(*puVar8 + iVar6);
                    if (*(int *)(local_4c + uVar5 * 4) == 1) {
                      uVar2 = (uint)bVar4;
                      if (bVar4 < (byte)local_44) {
                        uVar2 = local_44;
                      }
                    }
                    else {
                      if ((byte)local_58 < bVar4) {
                        bVar4 = (byte)local_58;
                      }
                      local_58 = CONCAT31(local_58._1_3_,bVar4);
                      uVar2 = local_44;
                    }
                    local_44 = uVar2;
                    uVar5 = uVar5 + 1;
                    puVar8 = puVar8 + 6;
                  } while (local_5c != uVar5);
                  uVar5 = local_58 & 0xff;
                  local_50 = iVar6;
                  local_28 = puVar10;
                  if ((byte)local_44 < (byte)local_58) {
                    uVar5 = local_44;
                  }
                }
                bVar4 = (byte)uVar5;
                if (local_51 != '\0') {
                  bVar4 = FUN_00478822(bVar4);
                }
                *(byte *)((int)local_48 + iVar6) = bVar4;
                puVar10 = (uint *)((int)puVar10 + 1);
              } while (puVar10 != local_2c);
            }
            local_38 = local_38 + 1;
          } while (local_38 != local_24);
        }
      }
LAB_00478082:
      if (local_4c != 0) {
LAB_00478089:
        FUN_0041c607(local_40,local_4c);
      }
    }
    puVar10 = local_3c;
    iVar1 = local_40;
    iVar6 = local_18;
    if (local_3c != (uint *)0x0) {
      if (local_5c == 0) {
        local_18 = 0x61;
        iVar6 = local_18;
      }
      else {
        puVar8 = local_3c + 3;
        do {
          FUN_0041c607(iVar1,*puVar8);
          *puVar8 = 0;
          puVar8 = puVar8 + 6;
          local_5c = local_5c - 1;
        } while (local_5c != 0);
        FUN_0041c607(iVar1,(int)puVar10);
        iVar6 = local_18;
      }
    }
  }
  if (DAT_0050e8c0 != (local_14 ^ (uint)&local_5c)) {
                    /* WARNING: Subroutine does not return */
    FUN_0047f2c0(local_14 ^ (uint)&local_5c);
  }
  return iVar6;
}

