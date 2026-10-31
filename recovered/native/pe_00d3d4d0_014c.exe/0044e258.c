/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0044e258 */

int __fastcall
FUN_0044e258(uint param_1,int *param_2,uint param_3,uint *param_4,int param_5,char param_6,
            byte param_7)

{
  int iVar1;
  byte bVar2;
  ushort uVar3;
  uint uVar4;
  uint uVar5;
  uint *puVar6;
  uint uVar7;
  byte bVar8;
  uint uVar9;
  uint local_68;
  uint local_64;
  int local_60 [3];
  uint local_54;
  int local_3c [11];
  
  local_3c[10] = DAT_0050e8c0 ^ (uint)&local_68;
  uVar5 = param_2[7];
  local_68 = param_1;
  _memset(param_4,0,0xc3c);
  local_3c[0] = 0;
  local_3c[1] = 0;
  local_3c[2] = 0;
  local_3c[3] = 0;
  local_3c[4] = 0;
  local_3c[5] = 0;
  local_3c[6] = 0;
  local_3c[7] = 0;
  local_3c[8] = 0;
  uVar4 = FUN_00420b00((int)param_2);
  *param_4 = local_68;
  param_4[1] = (uint)param_2;
  param_4[2] = uVar5;
  *(byte *)(param_4 + 8) = param_7;
  param_4[3] = uVar4;
  local_68 = uVar5;
  local_3c[9] = FUN_00420fcf(param_2,0x4e47c4,(int)param_4);
  if (local_3c[9] != 0) goto LAB_0044e35d;
  if (param_7 == 0) {
    bVar2 = FUN_00420d96(param_2,local_3c + 9);
    if (local_3c[9] != 0) goto LAB_0044e35d;
    if ((((char)param_4[6] == '\x01') && (bVar8 = *(byte *)((int)param_4 + 0x1a), 3 < bVar8)) &&
       (bVar2 < 5)) goto LAB_0044e337;
  }
  else if (((char)param_4[6] == '\x02') && (4 < *(byte *)((int)param_4 + 0x1a))) {
    uVar3 = FUN_0042070a(param_2,local_3c + 9);
    param_4[7] = (uint)uVar3;
    if (local_3c[9] != 0) goto LAB_0044e35d;
    bVar8 = *(byte *)((int)param_4 + 0x1a);
LAB_0044e337:
    local_3c[9] = FUN_00420696((int)param_2,bVar8 + uVar4);
    if (local_3c[9] == 0) {
      if (param_7 == 0) {
        local_3c[9] = FUN_0044e9ea(param_4 + 9,param_2,'\0','\0');
        if (local_3c[9] != 0) goto LAB_0044e34e;
        if ((1 < param_4[0xc]) && (param_4[0xf] < param_4[0xc])) {
          local_3c[9] = (param_6 == '\0') + 2;
          goto LAB_0044e35d;
        }
        local_3c[9] = FUN_0044e9ea(param_4 + 0x136,param_2,'\0','\0');
        if ((((local_3c[9] != 0) ||
             (local_3c[9] = FUN_0044e9ea(local_3c,param_2,'\x01','\0'), local_3c[9] != 0)) ||
            (local_3c[9] = FUN_0044e9ea(param_4 + 0x1b,param_2,'\x01','\0'), local_3c[9] != 0)) ||
           (local_3c[9] = FUN_0044eb50(local_3c,param_4 + 0x154,(int *)(param_4 + 0x155),
                                       param_4 + 0x156), local_3c[9] != 0)) goto LAB_0044e35d;
        if (param_4[0xc] <= param_4[0x139]) goto LAB_0044e3f4;
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
        uVar5 = FUN_00420b00((int)param_2);
        param_4[0x13b] = uVar5;
        param_4[0x13c] = param_4[7];
        local_3c[9] = FUN_004206ea((int)param_2,param_4[7]);
        if ((local_3c[9] != 0) ||
           (local_3c[9] = FUN_0044e9ea(param_4 + 0x1b,param_2,'\x01','\x01'), local_3c[9] != 0))
        goto LAB_0044e35d;
LAB_0044e3f4:
        param_4[0x153] = local_3c[3];
        if (param_6 == '\0') {
          uVar5 = 0;
          if (1 < param_4[0xc]) goto LAB_0044e50e;
        }
        else {
          uVar5 = param_3 & 0xffff;
          if (param_4[0xc] <= uVar5 && 0 < (int)param_3) {
            local_3c[9] = 6;
            goto LAB_0044e35d;
          }
          param_4[4] = param_4[0xc];
        }
        if ((((int)param_3 < 0) ||
            (local_3c[9] = FUN_0044ed06(param_4 + 0x157,(int *)(param_4 + 0x136),uVar5,param_2,uVar4
                                        ,(uint)(param_7 != 0) << 0xd | 0x1000,param_4,param_5),
            local_3c[9] != 0)) ||
           (local_3c[9] = FUN_00420696((int)param_2,param_4[0x172] + uVar4), local_3c[9] != 0))
        goto LAB_0044e35d;
        local_64 = (uint)param_7;
        local_3c[9] = FUN_0044e9ea(param_4 + 0x12d,param_2,'\0',param_7);
        if (local_3c[9] != 0) goto LAB_0044e35d;
        if ((param_7 == 0) && (param_4[0x177] == 0xffff)) {
          param_4[0x1f9] = 0;
          local_3c[9] = 0;
        }
        else {
          local_3c[9] = FUN_0044effd(param_4 + 0x309,param_2,uVar4,param_4[0x183]);
          if ((local_3c[9] != 0) ||
             ((local_3c[9] = FUN_00420696((int)param_2,param_4[0x17f] + uVar4), local_3c[9] != 0 ||
              (local_3c[9] = FUN_0044e9ea(local_60,param_2,'\0',(char)local_64), local_3c[9] != 0)))
             ) goto LAB_0044e35d;
          if (local_54 < 0x101) {
            param_4[0x1f9] = local_54;
            uVar7 = FUN_0041c6b3(local_68,0x288,0,local_54,0,local_3c + 9);
            if (local_3c[9] == 0) {
              uVar9 = 0;
              if (local_54 != 0) {
                do {
                  param_4[uVar9 + 0x1fa] = uVar7;
                  uVar9 = uVar9 + 1;
                  uVar7 = uVar7 + 0x288;
                } while (local_54 != uVar9);
                local_64 = 0x1000;
                if (param_7 != 0) {
                  local_64 = 0x4000;
                }
                local_68 = 0;
                iVar1 = local_3c[9];
                do {
                  local_3c[9] = iVar1;
                  local_3c[9] = FUN_0044ed06((undefined4 *)param_4[local_68 + 0x1fa],local_60,
                                             local_68,param_2,uVar4,local_64,param_4,param_5);
                  if (local_3c[9] != 0) goto LAB_0044e6ca;
                  local_68 = local_68 + 1;
                  iVar1 = 0;
                } while (local_68 < local_54);
                uVar9 = (uint)(1 < local_54);
              }
              if ((param_7 != 0 & ((byte)uVar9 ^ 1)) == 0) {
                local_3c[9] = FUN_0044f47d((char *)(param_4 + 0x2fa),param_4[0x130],param_2,
                                           param_4[0x180] + uVar4);
              }
            }
          }
LAB_0044e6ca:
          FUN_0044f537(local_60);
          if (local_3c[9] != 0) goto LAB_0044e35d;
        }
        if (param_4[0x172] != 0) {
          param_4[5] = param_4[0x130];
          local_3c[9] = FUN_0044eb50((int *)(param_4 + 0x1b),param_4 + 0x152,(int *)0x0,
                                     (size_t *)0x0);
          if ((local_3c[9] == 0) &&
             (((param_7 != 0 || (param_4[5] == 0)) ||
              ((local_3c[9] = FUN_0044f577(param_4 + 0x127,param_4[5],param_2,uVar4,param_4[0x170],
                                           param_6 != '\0' && param_4[0x177] != 0xffff),
               local_3c[9] == 0 &&
               ((param_4[0x177] != 0xffff ||
                (local_3c[9] = FUN_0044f89c(param_4 + 0x24,(int)(param_4 + 0x127),param_4[5],param_2
                                            ,uVar4,param_4[0x171]), local_3c[9] == 0)))))))) {
            puVar6 = FUN_0044e868((int)param_4,uVar5);
            param_4[0x151] = (uint)puVar6;
          }
          goto LAB_0044e35d;
        }
      }
LAB_0044e50e:
      local_3c[9] = 3;
      goto LAB_0044e35d;
    }
LAB_0044e34e:
    if (param_6 == '\0') goto LAB_0044e35d;
  }
  local_3c[9] = 2;
LAB_0044e35d:
  FUN_0044f537(local_3c);
  if (DAT_0050e8c0 != (local_3c[10] ^ (uint)&local_68)) {
                    /* WARNING: Subroutine does not return */
    FUN_0047f2c0(local_3c[10] ^ (uint)&local_68);
  }
  return local_3c[9];
}

