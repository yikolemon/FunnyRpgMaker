/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10220831 */

int __fastcall
FUN_10220831(int *param_1,uint param_2,uint param_3,undefined4 param_4,undefined4 param_5,
            int *param_6)

{
  int iVar1;
  uint uVar2;
  undefined1 uVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  int *piVar7;
  byte bVar8;
  int *piVar9;
  uint local_5c;
  uint local_58;
  char local_51;
  int local_50;
  int local_4c;
  int *local_48;
  uint local_44;
  int local_40;
  int *local_3c;
  int local_38;
  int *local_34;
  int local_30;
  int *local_2c;
  int *local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)&local_5c;
  local_18 = 0;
  iVar4 = 6;
  if ((param_6 != (int *)0x0 && param_1 != (int *)0x0) && (iVar1 = *param_1, iVar1 != 0)) {
    local_51 = (char)param_4;
    iVar4 = param_1[1];
    local_5c = 0;
    if (iVar4 != 0) {
      local_5c = 0;
      do {
        local_5c = local_5c + 1;
        iVar4 = *(int *)(iVar4 + 0xc);
      } while (iVar4 != 0);
    }
    local_24 = *param_6;
    local_2c = (int *)param_6[1];
    local_48 = param_1;
    local_44 = param_2;
    local_40 = iVar1;
    local_20 = iVar1;
    local_3c = (int *)FUN_101c00c3(iVar1,0x18,0,local_5c,0,&local_18);
    if (local_18 == 0) {
      local_4c = FUN_101c00c3(local_40,4,0,local_5c,0,&local_18);
      if (local_18 == 0) {
        piVar9 = local_48 + 1;
        iVar4 = 0;
        local_48 = piVar9;
        if (local_5c != 0) {
          local_34 = (int *)(param_3 ^ 1);
          local_58 = 0;
          iVar4 = 0;
          piVar7 = local_3c;
          do {
            iVar1 = *piVar9;
            local_50 = iVar4;
            FUN_10222e28(piVar7);
            piVar7[1] = param_6[1];
            *piVar7 = *param_6;
            piVar7[2] = param_6[2];
            *(short *)(piVar7 + 4) = (short)param_6[4];
            *(undefined1 *)((int)piVar7 + 0x12) = *(undefined1 *)((int)param_6 + 0x12);
            iVar4 = FUN_101c00c3(local_40,param_6[2],0,*param_6,0,&local_18);
            piVar7[3] = iVar4;
            if (local_18 != 0) goto LAB_10220902;
            local_28 = piVar7;
            iVar4 = FUN_10220fa9();
            *(int *)(local_4c + local_58 * 4) = iVar4;
            local_30 = *(int *)(iVar1 + 0xc);
            *(undefined4 *)(iVar1 + 0xc) = 0;
            local_1c = iVar1;
            local_18 = FUN_10220c01(CONCAT44(param_4,param_3) & 0xffffff00ffffffff,
                                    iVar4 == 1 && local_34 == (int *)0x0 ||
                                    iVar4 == 2 && param_3 == 0,local_28);
            if (local_18 != 0) goto LAB_10220909;
            piVar9 = (int *)(iVar1 + 0xc);
            *piVar9 = local_30;
            *(int *)(local_1c + 0xc) = local_50;
            if (param_3 == 1) {
              iVar4 = *(int *)(local_4c + local_58 * 4);
              if (iVar4 == 1) {
                uVar5 = 2;
              }
              else {
                if (iVar4 != 2) goto LAB_10220ad7;
                uVar5 = 1;
              }
              local_50 = local_1c;
              *(undefined4 *)(local_4c + local_58 * 4) = uVar5;
            }
LAB_10220ad7:
            local_58 = local_58 + 1;
            piVar7 = piVar7 + 6;
            iVar4 = local_1c;
          } while (local_5c != local_58);
        }
        *local_48 = iVar4;
        if (0 < local_24) {
          local_48 = (int *)param_6[3];
          local_34 = local_3c + 3;
          local_38 = 0;
          do {
            if (0 < (int)local_2c) {
              local_30 = local_38 * (int)local_2c;
              piVar9 = (int *)0x0;
              do {
                iVar4 = (int)piVar9 + local_30;
                uVar6 = 0;
                if (local_5c != 0) {
                  local_58 = CONCAT31(local_58._1_3_,0xff);
                  local_44 = 0;
                  piVar7 = local_34;
                  do {
                    bVar8 = *(byte *)(*piVar7 + iVar4);
                    if (*(int *)(local_4c + uVar6 * 4) == 1) {
                      uVar2 = (uint)bVar8;
                      if (bVar8 < (byte)local_44) {
                        uVar2 = local_44;
                      }
                    }
                    else {
                      if ((byte)local_58 < bVar8) {
                        bVar8 = (byte)local_58;
                      }
                      local_58 = CONCAT31(local_58._1_3_,bVar8);
                      uVar2 = local_44;
                    }
                    local_44 = uVar2;
                    uVar6 = uVar6 + 1;
                    piVar7 = piVar7 + 6;
                  } while (local_5c != uVar6);
                  uVar6 = local_58 & 0xff;
                  local_50 = iVar4;
                  local_28 = piVar9;
                  if ((byte)local_44 < (byte)local_58) {
                    uVar6 = local_44;
                  }
                }
                uVar3 = (undefined1)uVar6;
                if (local_51 != '\0') {
                  uVar3 = FUN_102210a2();
                }
                *(undefined1 *)((int)local_48 + iVar4) = uVar3;
                piVar9 = (int *)((int)piVar9 + 1);
              } while (piVar9 != local_2c);
            }
            local_38 = local_38 + 1;
          } while (local_38 != local_24);
        }
      }
LAB_10220902:
      if (local_4c != 0) {
LAB_10220909:
        FUN_101c0017(local_40,local_4c);
      }
    }
    piVar9 = local_3c;
    iVar1 = local_40;
    iVar4 = local_18;
    if (local_3c != (int *)0x0) {
      if (local_5c == 0) {
        local_18 = 0x61;
        iVar4 = local_18;
      }
      else {
        piVar7 = local_3c + 3;
        do {
          FUN_101c0017(iVar1,*piVar7);
          *piVar7 = 0;
          piVar7 = piVar7 + 6;
          local_5c = local_5c - 1;
        } while (local_5c != 0);
        FUN_101c0017(iVar1,piVar9);
        iVar4 = local_18;
      }
    }
  }
  if (DAT_10388d00 != (local_14 ^ (uint)&local_5c)) {
                    /* WARNING: Subroutine does not return */
    FUN_102283e0();
  }
  return iVar4;
}

