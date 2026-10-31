/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101f9c8b */

int __fastcall FUN_101f9c8b(char *param_1,int param_2,undefined4 param_3,int param_4,int *param_5)

{
  int iVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  byte *pbVar6;
  byte *pbVar7;
  byte bVar8;
  uint uVar9;
  char *pcVar10;
  char *pcVar11;
  undefined1 auStack_124 [3];
  byte local_121;
  char *local_120;
  undefined4 local_11c;
  char *local_118;
  byte local_114 [256];
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)auStack_124;
  iVar1 = *(int *)(param_4 + 0x68);
  iVar3 = FUN_101c461e(iVar1,param_3);
  pcVar11 = param_1;
  if (iVar3 == 0) {
    if (param_2 == 0) {
      iVar3 = 0;
    }
    else {
      local_118 = param_1 + param_2;
      local_121 = 1;
      pbVar6 = local_114;
      pbVar7 = local_114;
      local_120 = param_1;
LAB_101f9cf6:
      do {
        if (pbVar6 <= pbVar7) {
          iVar4 = FUN_101c4a88(iVar1);
          uVar5 = *(int *)(iVar1 + 4) - iVar4;
          if (uVar5 == 0) {
            iVar3 = 0xa0;
            param_1 = local_120;
            goto LAB_101f9dea;
          }
          if (0xff < uVar5) {
            uVar5 = 0x100;
          }
          iVar3 = FUN_101c4659(iVar1,local_114,uVar5);
          param_1 = local_120;
          if (iVar3 != 0) goto LAB_101f9dea;
          iVar3 = FUN_101c4a88(iVar1);
          pbVar6 = local_114 + (iVar3 - iVar4);
          pbVar7 = local_114;
        }
        bVar8 = *pbVar7;
        uVar9 = (uint)bVar8;
        uVar5 = uVar9 - 0x30;
        param_1 = local_120;
        if (uVar5 < 10) {
          local_11c = 1;
        }
        else {
          if ((byte)(bVar8 + 0x9f) < 6) {
            bVar8 = bVar8 + 0xa9;
          }
          else {
            if (5 < (byte)(bVar8 + 0xbf)) {
              if (((0xd < uVar9) || ((0x3601U >> (uVar9 & 0x1f) & 1) == 0)) && (uVar9 != 0x20)) {
                iVar3 = 0xa0;
                if (uVar9 == 0x3e) {
                  uVar5 = 0;
                  local_11c = 0;
                  goto LAB_101f9da0;
                }
                goto LAB_101f9dea;
              }
              pbVar7 = pbVar7 + 1;
              goto LAB_101f9cf6;
            }
            bVar8 = bVar8 - 0x37;
          }
          uVar5 = (uint)bVar8;
          local_11c = 1;
        }
LAB_101f9da0:
        if (local_121 == 0) {
          cVar2 = (char)uVar5 + *pcVar11;
          pcVar10 = pcVar11 + 1;
        }
        else {
          cVar2 = (char)uVar5 << 4;
          pcVar10 = pcVar11;
        }
        *pcVar11 = cVar2;
        local_121 = local_121 ^ 1;
        pbVar7 = pbVar7 + 1;
        pcVar11 = pcVar10;
      } while (((byte)local_11c & pcVar10 < local_118) != 0);
      iVar3 = 0;
    }
  }
LAB_101f9dea:
  *param_5 = (int)pcVar11 - (int)param_1;
  if (DAT_10388d00 != (local_14 ^ (uint)auStack_124)) {
                    /* WARNING: Subroutine does not return */
    FUN_102283e0();
  }
  return iVar3;
}

