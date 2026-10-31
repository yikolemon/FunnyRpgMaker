/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00451403 */

int __fastcall FUN_00451403(char *param_1,int param_2,uint param_3,int param_4,int *param_5)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint *puVar6;
  uint *puVar7;
  byte bVar8;
  uint uVar9;
  char *pcVar10;
  char *pcVar11;
  undefined1 auStack_124 [3];
  byte local_121;
  char *local_120;
  undefined4 local_11c;
  char *local_118;
  uint local_114 [64];
  uint local_14;
  
  local_14 = DAT_0050e8c0 ^ (uint)auStack_124;
  piVar1 = *(int **)(param_4 + 0x68);
  iVar3 = FUN_00420696((int)piVar1,param_3);
  pcVar11 = param_1;
  if (iVar3 == 0) {
    if (param_2 == 0) {
      iVar3 = 0;
    }
    else {
      local_118 = param_1 + param_2;
      local_121 = 1;
      puVar6 = local_114;
      puVar7 = local_114;
      local_120 = param_1;
LAB_0045146e:
      do {
        if (puVar6 <= puVar7) {
          iVar4 = FUN_00420b00((int)piVar1);
          uVar5 = piVar1[1] - iVar4;
          if (uVar5 == 0) {
            iVar3 = 0xa0;
            param_1 = local_120;
            goto LAB_00451562;
          }
          if (0xff < uVar5) {
            uVar5 = 0x100;
          }
          iVar3 = FUN_004206d1(piVar1,local_114,uVar5);
          param_1 = local_120;
          if (iVar3 != 0) goto LAB_00451562;
          iVar3 = FUN_00420b00((int)piVar1);
          puVar6 = (uint *)((int)local_114 + (iVar3 - iVar4));
          puVar7 = local_114;
        }
        bVar8 = (byte)*puVar7;
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
                  goto LAB_00451518;
                }
                goto LAB_00451562;
              }
              puVar7 = (uint *)((int)puVar7 + 1);
              goto LAB_0045146e;
            }
            bVar8 = bVar8 - 0x37;
          }
          uVar5 = (uint)bVar8;
          local_11c = 1;
        }
LAB_00451518:
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
        puVar7 = (uint *)((int)puVar7 + 1);
        pcVar11 = pcVar10;
      } while (((byte)local_11c & pcVar10 < local_118) != 0);
      iVar3 = 0;
    }
  }
LAB_00451562:
  *param_5 = (int)pcVar11 - (int)param_1;
  if (DAT_0050e8c0 != (local_14 ^ (uint)auStack_124)) {
                    /* WARNING: Subroutine does not return */
    FUN_0047f2c0(local_14 ^ (uint)auStack_124);
  }
  return iVar3;
}

