/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101f7dff */

int __fastcall
FUN_101f7dff(uint *param_1,uint param_2,int param_3,int param_4,uint param_5,char param_6)

{
  uint uVar1;
  ushort uVar2;
  undefined2 uVar3;
  uint uVar4;
  undefined2 *puVar5;
  int iVar6;
  uint uVar7;
  undefined4 uVar8;
  bool bVar9;
  undefined *puVar10;
  uint local_24;
  undefined4 local_20;
  int local_1c;
  int local_18;
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)&local_24;
  uVar8 = *(undefined4 *)(param_3 + 0x1c);
  local_18 = 0;
  if (param_5 < 3) {
    param_1[1] = param_5;
    if (param_5 == 2) {
      if (param_2 < 0x58) {
        uVar4 = FUN_101c2a50(uVar8,2,0,param_2,0,&local_18);
        param_1[2] = uVar4;
        if (local_18 == 0) {
          puVar10 = &DAT_1031054e;
          goto LAB_101f8048;
        }
        goto LAB_101f80d2;
      }
    }
    else if (param_5 == 1) {
      if (param_2 < 0xa7) {
        uVar4 = FUN_101c2a50(uVar8,2,0,param_2,0,&local_18);
        param_1[2] = uVar4;
        if (local_18 != 0) goto LAB_101f80d2;
        puVar10 = &DAT_10310402;
LAB_101f8048:
        FUN_1025b2d0(uVar4,puVar10,param_2 * 2);
        if (param_6 == '\0') goto LAB_101f80ce;
LAB_101f8058:
        local_18 = FUN_101f86d8(uVar8);
        goto LAB_101f80ce;
      }
    }
    else if (param_2 < 0xe6) {
      uVar4 = FUN_101c2a50(uVar8,2,0,param_2,0,&local_18);
      param_1[2] = uVar4;
      if (local_18 == 0) {
        puVar10 = &DAT_10310238;
        goto LAB_101f8048;
      }
      goto LAB_101f80d2;
    }
    local_18 = 3;
  }
  else {
    param_1[1] = param_5 + param_4;
    local_18 = FUN_101c461e(param_3,param_5 + param_4);
    if (local_18 == 0) {
      uVar4 = FUN_101c4d1e(param_3,&local_18);
      *param_1 = uVar4 & 0xff;
      if (local_18 == 0) {
        puVar5 = (undefined2 *)FUN_101c2a50(uVar8,2,0,param_2,0,&local_18);
        param_1[2] = (uint)puVar5;
        if (local_18 == 0) {
          *puVar5 = 0;
          if (*param_1 - 1 < 2) {
            if (1 < param_2) {
              local_24 = 1;
              local_20 = uVar8;
              do {
                uVar8 = local_20;
                uVar2 = FUN_101c4692(param_3,&local_18);
                if (local_18 != 0) goto LAB_101f80ce;
                if (*param_1 == 2) {
                  uVar4 = FUN_101c4692(param_3,&local_18);
                  if (local_18 != 0) goto LAB_101f80ce;
                  uVar4 = uVar4 & 0xffff;
                }
                else {
                  uVar4 = FUN_101c4d1e(param_3,&local_18);
                  if (local_18 != 0) goto LAB_101f80ce;
                  uVar4 = uVar4 & 0xff;
                }
                uVar7 = uVar2 ^ 0xffff;
                if ((uint)uVar2 <= (uVar4 ^ 0xffff)) {
                  uVar7 = uVar4;
                }
                if (local_24 < param_2) {
                  local_1c = local_24 * 2;
                  uVar4 = 0;
                  do {
                    *(ushort *)(param_1[2] + local_1c + uVar4 * 2) = uVar2 + (short)uVar4;
                    uVar1 = uVar4 + 1;
                    if (param_2 <= local_24 + uVar4 + 1) break;
                    bVar9 = uVar4 < uVar7;
                    uVar4 = uVar1;
                  } while (bVar9);
                  local_24 = local_24 + uVar1;
                }
                uVar8 = local_20;
              } while (local_24 < param_2);
            }
LAB_101f80bc:
            if (param_6 != '\0') goto LAB_101f8058;
          }
          else if (*param_1 == 0) {
            local_18 = FUN_101c4b69(param_3,param_2 * 2 + -2);
            if (local_18 == 0) {
              if (1 < param_2) {
                uVar4 = 1;
                do {
                  uVar3 = FUN_101c4ca6(param_3);
                  *(undefined2 *)(param_1[2] + uVar4 * 2) = uVar3;
                  uVar4 = uVar4 + 1;
                } while (param_2 != uVar4);
              }
              FUN_101c4c66(param_3);
              goto LAB_101f80bc;
            }
          }
          else {
            local_18 = 3;
          }
        }
      }
    }
LAB_101f80ce:
    if (local_18 == 0) {
      iVar6 = 0;
      goto LAB_101f8101;
    }
  }
LAB_101f80d2:
  FUN_101c0017(uVar8,param_1[2]);
  param_1[2] = 0;
  FUN_101c0017(uVar8,param_1[3]);
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  iVar6 = local_18;
LAB_101f8101:
  if (DAT_10388d00 != (local_14 ^ (uint)&local_24)) {
                    /* WARNING: Subroutine does not return */
    FUN_102283e0();
  }
  return iVar6;
}

