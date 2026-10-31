/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0044f577 */

int __fastcall
FUN_0044f577(uint *param_1,uint param_2,int *param_3,int param_4,uint param_5,char param_6)

{
  uint uVar1;
  byte bVar2;
  ushort uVar3;
  ushort uVar4;
  undefined2 *puVar5;
  uint *puVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  bool bVar10;
  uint *puVar11;
  uint local_24;
  int local_20;
  int local_1c;
  int local_18;
  uint local_14;
  
  local_14 = DAT_0050e8c0 ^ (uint)&local_24;
  iVar7 = param_3[7];
  local_18 = 0;
  if (param_5 < 3) {
    param_1[1] = param_5;
    if (param_5 == 2) {
      if (param_2 < 0x58) {
        puVar6 = (uint *)FUN_0041efcd(iVar7,2,0,param_2,0,&local_18);
        param_1[2] = (uint)puVar6;
        if (local_18 == 0) {
          puVar11 = (uint *)&DAT_004e4aee;
          goto LAB_0044f7c0;
        }
        goto LAB_0044f84a;
      }
    }
    else if (param_5 == 1) {
      if (param_2 < 0xa7) {
        puVar6 = (uint *)FUN_0041efcd(iVar7,2,0,param_2,0,&local_18);
        param_1[2] = (uint)puVar6;
        if (local_18 != 0) goto LAB_0044f84a;
        puVar11 = (uint *)&DAT_004e49a2;
LAB_0044f7c0:
        FUN_004878c0(puVar6,puVar11,param_2 * 2);
        if (param_6 == '\0') goto LAB_0044f846;
LAB_0044f7d0:
        local_18 = FUN_0044fe50((int)param_1,param_2,iVar7);
        goto LAB_0044f846;
      }
    }
    else if (param_2 < 0xe6) {
      puVar6 = (uint *)FUN_0041efcd(iVar7,2,0,param_2,0,&local_18);
      param_1[2] = (uint)puVar6;
      if (local_18 == 0) {
        puVar11 = (uint *)&DAT_004e47d8;
        goto LAB_0044f7c0;
      }
      goto LAB_0044f84a;
    }
    local_18 = 3;
  }
  else {
    param_1[1] = param_5 + param_4;
    local_18 = FUN_00420696((int)param_3,param_5 + param_4);
    if (local_18 == 0) {
      bVar2 = FUN_00420d96(param_3,&local_18);
      *param_1 = (uint)bVar2;
      if (local_18 == 0) {
        puVar5 = (undefined2 *)FUN_0041efcd(iVar7,2,0,param_2,0,&local_18);
        param_1[2] = (uint)puVar5;
        if (local_18 == 0) {
          *puVar5 = 0;
          if (*param_1 - 1 < 2) {
            if (1 < param_2) {
              local_24 = 1;
              local_20 = iVar7;
              do {
                iVar7 = local_20;
                uVar3 = FUN_0042070a(param_3,&local_18);
                if (local_18 != 0) goto LAB_0044f846;
                if (*param_1 == 2) {
                  uVar4 = FUN_0042070a(param_3,&local_18);
                  if (local_18 != 0) goto LAB_0044f846;
                  uVar9 = (uint)uVar4;
                }
                else {
                  bVar2 = FUN_00420d96(param_3,&local_18);
                  if (local_18 != 0) goto LAB_0044f846;
                  uVar9 = (uint)bVar2;
                }
                uVar8 = uVar3 ^ 0xffff;
                if ((uint)uVar3 <= (uVar9 ^ 0xffff)) {
                  uVar8 = uVar9;
                }
                if (local_24 < param_2) {
                  local_1c = local_24 * 2;
                  uVar9 = 0;
                  do {
                    *(ushort *)(param_1[2] + local_1c + uVar9 * 2) = uVar3 + (short)uVar9;
                    uVar1 = uVar9 + 1;
                    if (param_2 <= local_24 + uVar9 + 1) break;
                    bVar10 = uVar9 < uVar8;
                    uVar9 = uVar1;
                  } while (bVar10);
                  local_24 = local_24 + uVar1;
                }
                iVar7 = local_20;
              } while (local_24 < param_2);
            }
LAB_0044f834:
            if (param_6 != '\0') goto LAB_0044f7d0;
          }
          else if (*param_1 == 0) {
            local_18 = FUN_00420be1(param_3,param_2 * 2 - 2);
            if (local_18 == 0) {
              if (1 < param_2) {
                uVar9 = 1;
                do {
                  uVar3 = FUN_00420d1e((int)param_3);
                  *(ushort *)(param_1[2] + uVar9 * 2) = uVar3;
                  uVar9 = uVar9 + 1;
                } while (param_2 != uVar9);
              }
              FUN_00420cde(param_3);
              goto LAB_0044f834;
            }
          }
          else {
            local_18 = 3;
          }
        }
      }
    }
LAB_0044f846:
    if (local_18 == 0) {
      iVar7 = 0;
      goto LAB_0044f879;
    }
  }
LAB_0044f84a:
  FUN_0041c607(iVar7,param_1[2]);
  param_1[2] = 0;
  FUN_0041c607(iVar7,param_1[3]);
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  iVar7 = local_18;
LAB_0044f879:
  if (DAT_0050e8c0 != (local_14 ^ (uint)&local_24)) {
                    /* WARNING: Subroutine does not return */
    FUN_0047f2c0(local_14 ^ (uint)&local_24);
  }
  return iVar7;
}

