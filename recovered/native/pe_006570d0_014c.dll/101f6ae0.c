/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101f6ae0 */

int __fastcall
FUN_101f6ae0(undefined4 param_1,uint param_2,uint param_3,uint *param_4,undefined4 param_5,
            char param_6,byte param_7)

{
  int iVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  byte bVar5;
  uint uVar6;
  uint local_68;
  uint local_64;
  uint local_54;
  undefined4 local_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  uint uStack_30;
  undefined4 local_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 local_1c;
  int local_18;
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)&local_68;
  uVar4 = *(uint *)(param_2 + 0x1c);
  _memset(param_4,0,0xc3c);
  local_3c = 0;
  uStack_38 = 0;
  uStack_34 = 0;
  uStack_30 = 0;
  local_2c = 0;
  uStack_28 = 0;
  uStack_24 = 0;
  uStack_20 = 0;
  local_1c = 0;
  uVar3 = FUN_101c4a88(param_2);
  *param_4 = local_68;
  param_4[1] = param_2;
  param_4[2] = uVar4;
  *(byte *)(param_4 + 8) = param_7;
  param_4[3] = uVar3;
  local_68 = uVar4;
  local_18 = FUN_101c4f57(param_2,&DAT_10310224,param_4);
  if (local_18 != 0) goto LAB_101f6be5;
  if (param_7 == 0) {
    bVar2 = FUN_101c4d1e(param_2,&local_18);
    if (local_18 != 0) goto LAB_101f6be5;
    if ((((char)param_4[6] == '\x01') && (bVar5 = *(byte *)((int)param_4 + 0x1a), 3 < bVar5)) &&
       (bVar2 < 5)) goto LAB_101f6bbf;
  }
  else if (((char)param_4[6] == '\x02') && (4 < *(byte *)((int)param_4 + 0x1a))) {
    uVar4 = FUN_101c4692(param_2,&local_18);
    param_4[7] = uVar4 & 0xffff;
    if (local_18 != 0) goto LAB_101f6be5;
    bVar5 = *(byte *)((int)param_4 + 0x1a);
LAB_101f6bbf:
    local_18 = FUN_101c461e(param_2,bVar5 + uVar3);
    if (local_18 == 0) {
      if (param_7 == 0) {
        local_18 = FUN_101f7272(0,0);
        if (local_18 != 0) goto LAB_101f6bd6;
        if ((1 < param_4[0xc]) && (param_4[0xf] < param_4[0xc])) {
          local_18 = (param_6 == '\0') + 2;
          goto LAB_101f6be5;
        }
        local_18 = FUN_101f7272(0,0);
        if ((((local_18 != 0) || (local_18 = FUN_101f7272(1,0), local_18 != 0)) ||
            (local_18 = FUN_101f7272(1,0), local_18 != 0)) ||
           (local_18 = FUN_101f73d8(param_4 + 0x155,param_4 + 0x156), local_18 != 0))
        goto LAB_101f6be5;
        if (param_4[0xc] <= param_4[0x139]) goto LAB_101f6c7c;
      }
      else {
        param_4[0x13a] = 0;
        param_4[0x13b] = 0;
        param_4[0x13c] = 0;
        param_4[0x13d] = 0;
        param_4[0x136] = 0;
        param_4[0x137] = 0;
        param_4[0x138] = 0;
        param_4[0x139] = 0;
        param_4[0x13e] = 0;
        uVar4 = FUN_101c4a88(param_2);
        param_4[0x13b] = uVar4;
        param_4[0x13c] = param_4[7];
        local_18 = FUN_101c4672(param_2,param_4[7]);
        if ((local_18 != 0) || (local_18 = FUN_101f7272(1,1), local_18 != 0)) goto LAB_101f6be5;
LAB_101f6c7c:
        param_4[0x153] = uStack_30;
        if (param_6 == '\0') {
          uVar4 = 0;
          if (1 < param_4[0xc]) goto LAB_101f6d96;
        }
        else {
          uVar4 = param_3 & 0xffff;
          if (param_4[0xc] <= uVar4 && 0 < (int)param_3) {
            local_18 = 6;
            goto LAB_101f6be5;
          }
          param_4[4] = param_4[0xc];
        }
        if ((((int)param_3 < 0) ||
            (local_18 = FUN_101f758e(uVar4,param_2,uVar3,(uint)(param_7 != 0) << 0xd | 0x1000,
                                     param_4,param_5), local_18 != 0)) ||
           (local_18 = FUN_101c461e(param_2,param_4[0x172] + uVar3), local_18 != 0))
        goto LAB_101f6be5;
        local_64 = (uint)param_7;
        local_18 = FUN_101f7272(0,local_64);
        if (local_18 != 0) goto LAB_101f6be5;
        if ((param_7 == 0) && (param_4[0x177] == 0xffff)) {
          param_4[0x1f9] = 0;
          local_18 = 0;
        }
        else {
          local_18 = FUN_101f7885(uVar3,param_4[0x183]);
          if ((local_18 != 0) ||
             ((local_18 = FUN_101c461e(param_2,param_4[0x17f] + uVar3), local_18 != 0 ||
              (local_18 = FUN_101f7272(0,local_64), local_18 != 0)))) goto LAB_101f6be5;
          if (local_54 < 0x101) {
            param_4[0x1f9] = local_54;
            uVar4 = FUN_101c00c3(local_68,0x288,0,local_54,0,&local_18);
            if (local_18 == 0) {
              uVar6 = 0;
              if (local_54 != 0) {
                do {
                  param_4[uVar6 + 0x1fa] = uVar4;
                  uVar6 = uVar6 + 1;
                  uVar4 = uVar4 + 0x288;
                } while (local_54 != uVar6);
                local_64 = 0x1000;
                if (param_7 != 0) {
                  local_64 = 0x4000;
                }
                local_68 = 0;
                iVar1 = local_18;
                do {
                  local_18 = iVar1;
                  local_18 = FUN_101f758e(local_68,param_2,uVar3,local_64,param_4,param_5);
                  if (local_18 != 0) goto LAB_101f6f52;
                  local_68 = local_68 + 1;
                  iVar1 = 0;
                } while (local_68 < local_54);
                uVar6 = (uint)(1 < local_54);
              }
              if ((param_7 != 0 & ((byte)uVar6 ^ 1)) == 0) {
                local_18 = FUN_101f7d05(param_2,param_4[0x180] + uVar3);
              }
            }
          }
LAB_101f6f52:
          FUN_101f7dbf();
          if (local_18 != 0) goto LAB_101f6be5;
        }
        if (param_4[0x172] != 0) {
          param_4[5] = param_4[0x130];
          local_18 = FUN_101f73d8(0,0);
          if ((local_18 == 0) &&
             (((param_7 != 0 || (param_4[5] == 0)) ||
              ((local_18 = FUN_101f7dff(param_2,uVar3,param_4[0x170],
                                        param_6 != '\0' && param_4[0x177] != 0xffff), local_18 == 0
               && ((param_4[0x177] != 0xffff ||
                   (local_18 = FUN_101f8124(param_4[5],param_2,uVar3,param_4[0x171]), local_18 == 0)
                   ))))))) {
            uVar4 = FUN_101f70f0();
            param_4[0x151] = uVar4;
          }
          goto LAB_101f6be5;
        }
      }
LAB_101f6d96:
      local_18 = 3;
      goto LAB_101f6be5;
    }
LAB_101f6bd6:
    if (param_6 == '\0') goto LAB_101f6be5;
  }
  local_18 = 2;
LAB_101f6be5:
  FUN_101f7dbf();
  if (DAT_10388d00 != (local_14 ^ (uint)&local_68)) {
                    /* WARNING: Subroutine does not return */
    FUN_102283e0();
  }
  return local_18;
}

