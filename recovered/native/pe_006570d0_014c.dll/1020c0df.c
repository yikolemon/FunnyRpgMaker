/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1020c0df */

void __fastcall
FUN_1020c0df(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4,
            undefined4 param_5,char param_6)

{
  char cVar1;
  byte *pbVar2;
  undefined1 *puVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int *piVar7;
  bool bVar8;
  undefined1 auStack_7c [3];
  char local_79;
  int *local_78;
  int local_74;
  undefined4 local_70;
  undefined4 local_6c;
  byte *local_68;
  uint local_64;
  undefined4 *local_60;
  int local_5c;
  undefined1 local_58 [20];
  undefined4 local_44 [4];
  int local_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  uint local_14;
  
  local_6c = param_5;
  local_14 = DAT_10388d00 ^ (uint)auStack_7c;
  iVar4 = *param_1;
  local_79 = param_6;
  local_74 = iVar4;
  local_70 = param_2;
  if ((param_6 == '\0') && (cVar1 = FUN_1000e094(), cVar1 == '\0')) {
    FUN_1020b0dc();
    iVar4 = local_74;
    FUN_1020c0df(param_3,&local_30,local_6c,1);
  }
  cVar1 = FUN_1020b443();
  local_78 = param_1;
  if (cVar1 == '\0') {
    FUN_10151d91();
    FUN_10151d91();
    iVar4 = local_74;
    FUN_1020cfdd();
    cVar1 = FUN_1020b443();
    if (cVar1 != '\0') goto LAB_1020c199;
    if (*(char *)(iVar4 + 8) != '\0') {
      *(undefined4 *)*param_4 = 0;
      *(undefined1 *)((int)local_78 + 0xd) = 0;
    }
  }
  else {
LAB_1020c199:
    param_1[5] = 0;
    param_1[6] = 0;
    local_30 = *param_4;
    uStack_2c = param_4[1];
    uStack_28 = param_4[2];
    uStack_24 = param_4[3];
    uStack_20 = param_4[4];
    uStack_1c = param_4[5];
    uStack_18 = param_4[6];
    pbVar2 = (byte *)FUN_1020d01a();
    local_64 = FUN_10151d91();
    if (local_64 <= (uint)param_4[2]) {
      if (*(char *)(iVar4 + 0xf9) != '\0') {
        FUN_1020d01e();
        FUN_1020d02c(local_44);
        iVar4 = local_74;
        FUN_1020d02c(local_74 + 0x10c);
      }
      local_60 = param_4;
      if (local_64 == 0) {
        if (local_79 == '\0') goto LAB_1020c409;
LAB_1020c3b8:
        piVar7 = local_78;
        if (((local_78[5] == 0) || (0 < local_78[9])) || (local_78[local_78[5] * 5 + 4] < 0)) {
          FUN_1020d01e();
          local_44[0] = 0x31;
          local_34 = piVar7[4];
          FUN_1020d01e();
          FUN_1020d02c(local_58);
        }
        FUN_1020d47d();
      }
      else {
        local_5c = iVar4 + 0xf0;
        uVar6 = 0;
        uVar5 = 0x80;
        local_68 = pbVar2;
        do {
          piVar7 = local_78;
          if ((uVar5 & *pbVar2) != 0) {
            FUN_1020d22b(uVar6,local_74,local_6c,local_78[4],1);
            FUN_1020d22b(uVar6,local_74,local_6c,piVar7[4],0);
            cVar1 = FUN_1020d348();
            if (((cVar1 != '\0') || (cVar1 = FUN_1020d348(), cVar1 != '\0')) ||
               (cVar1 = FUN_1020d350(local_58), cVar1 != '\0')) {
              FUN_1020d02c(local_58);
              *pbVar2 = *pbVar2 & ~(byte)uVar5;
            }
          }
          uVar5 = uVar5 >> 1;
          bVar8 = (~uVar6 & 7) == 0;
          if (bVar8) {
            uVar5 = 0x80;
          }
          pbVar2 = pbVar2 + bVar8;
          uVar6 = uVar6 + 1;
        } while (local_64 != uVar6);
        if (local_79 != '\0') goto LAB_1020c3b8;
        uVar5 = 0;
        uVar6 = 0x80;
        pbVar2 = local_68;
        do {
          piVar7 = local_78;
          if ((uVar6 & *pbVar2) != 0) {
            local_68 = pbVar2;
            FUN_1020d22b(uVar5,local_74,local_6c,local_78[4],1);
            FUN_1020d22b(uVar5,local_74,local_6c,piVar7[4],0);
            pbVar2 = local_68;
            FUN_1020d02c(local_58);
          }
          uVar6 = uVar6 >> 1;
          bVar8 = (~uVar5 & 7) == 0;
          if (bVar8) {
            uVar6 = 0x80;
          }
          pbVar2 = pbVar2 + bVar8;
          uVar5 = uVar5 + 1;
        } while (local_64 != uVar5);
LAB_1020c409:
        piVar7 = local_78;
        FUN_1020d47d();
        uVar5 = piVar7[5];
        if (uVar5 != 0) {
          piVar7 = local_78 + 7;
          uVar6 = 0;
          do {
            cVar1 = FUN_1020d6df();
            if (cVar1 == '\0') {
              puVar3 = (undefined1 *)FUN_1020ba37();
              uVar5 = FUN_1020d6e7();
              *(int *)(puVar3 + (uVar5 & 0xff) * 4 + 0xc) = piVar7[3];
              *puVar3 = 1;
              uVar5 = local_78[5];
            }
            uVar6 = uVar6 + 1;
            piVar7 = piVar7 + 5;
          } while (uVar6 < uVar5);
        }
      }
      *(undefined1 *)(local_78 + 3) = 1;
      if (DAT_10388d00 == (local_14 ^ (uint)auStack_7c)) {
        FUN_1020d6ee();
        return;
      }
      goto LAB_1020c4bd;
    }
  }
  if (DAT_10388d00 == (local_14 ^ (uint)auStack_7c)) {
    return;
  }
LAB_1020c4bd:
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

