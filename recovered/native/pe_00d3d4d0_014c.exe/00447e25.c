/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00447e25 */

int __fastcall FUN_00447e25(int *param_1)

{
  int iVar1;
  byte *pbVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int local_194;
  int local_190;
  int local_18c;
  int local_188;
  byte *local_184;
  int local_180;
  int local_17c [19];
  int local_130;
  int local_12c;
  int local_128;
  int local_124;
  int local_11c;
  int local_108;
  int local_104;
  int local_e8;
  int local_e4;
  int local_d0;
  int local_b4;
  int local_a8;
  undefined8 local_a0;
  int local_54;
  int local_50;
  int local_44;
  undefined8 local_3c;
  int local_20;
  uint local_14;
  
  local_14 = DAT_0050e8c0 ^ (uint)&local_194;
  iVar5 = param_1[0x7b];
  FUN_0044838b(local_17c);
  param_1[0x86] = -1;
  param_1[0x87] = -1;
  param_1[0x88] = 0;
  param_1[0x46] = 7;
  param_1[0x47] = 1;
  param_1[0x2b] = 4;
  param_1[0x57] = 0xf5c;
  param_1[0x45] = 0x27a000;
  local_180 = FUN_0044839c(local_17c,(int *)param_1[0x1a],param_1[0x19],iVar5);
  if ((((local_180 != 0) ||
       (local_180 = FUN_0044853a(param_1,local_17c,local_130,local_12c), local_180 != 0)) ||
      (local_180 = FUN_00448942(local_17c,iVar5), local_180 != 0)) ||
     (local_180 = FUN_0044853a(param_1,local_17c,local_128,local_124), local_180 != 0))
  goto LAB_00448242;
  *(byte *)(param_1 + 0x2c) = *(byte *)(param_1 + 0x2c) & 0xfe;
  piVar3 = (int *)param_1[0x85];
  if (piVar3 == (int *)0x0) {
LAB_00448028:
    param_1[0x88] = 0;
  }
  else {
    if (*piVar3 != 1 << (*(byte *)(piVar3 + 1) & 0x1f)) {
      FUN_00447531((int)param_1);
      piVar3 = (int *)param_1[0x85];
      if (piVar3 == (int *)0x0) goto LAB_00448028;
    }
    if ((piVar3[0x68] != 0) && (piVar3[0x68] != piVar3[1])) {
      piVar3[0x68] = 0;
      piVar3 = (int *)param_1[0x85];
      if (piVar3 == (int *)0x0) goto LAB_00448028;
    }
    if ((*piVar3 == 0) || (piVar3[1] == 0)) {
      FUN_00447531((int)param_1);
      piVar3 = (int *)param_1[0x85];
      if (piVar3 == (int *)0x0) goto LAB_00448028;
    }
    if (piVar3[0x22] == 0) {
      FUN_00447531((int)param_1);
      piVar3 = (int *)param_1[0x85];
      if (piVar3 == (int *)0x0) goto LAB_00448028;
    }
    if (piVar3[6] == 0) {
      FUN_00447531((int)param_1);
      piVar3 = (int *)param_1[0x85];
      if (piVar3 == (int *)0x0) goto LAB_00448028;
    }
    iVar5 = piVar3[1];
    if (iVar5 != 0) {
      piVar3 = piVar3 + 0x16;
      do {
        if ((char)*piVar3 == '\0') {
          FUN_00447531((int)param_1);
          if (param_1[0x85] == 0) goto LAB_00448028;
          break;
        }
        piVar3 = piVar3 + 3;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
    if (param_1[0x88] != 0) {
      iVar5 = FUN_0041c6b3(param_1[0x19],4,0,param_1[0x88],0,&local_180);
      param_1[0x89] = iVar5;
      if (local_180 != 0) {
        param_1[0x88] = 0;
        goto LAB_00448242;
      }
    }
  }
  param_1[0x69] = local_e8;
  if (local_44 != 0) {
    param_1[0x65] = local_54;
    param_1[0x62] = local_50;
    *(undefined8 *)(param_1 + 0x66) = local_3c;
    param_1[0x68] = local_20;
    local_44 = 0;
    local_20 = 0;
  }
  if ((*(int *)(param_1[0x20] + 0x34) == 0) && (local_a8 == 0)) {
    local_180 = 3;
  }
  local_a8 = 0;
  param_1[99] = local_b4;
  *(undefined8 *)(param_1 + 0x6b) = local_a0;
  param_1[100] = local_e4;
  param_1[0x6a] = local_d0;
  local_e4 = 0;
  local_190 = 0;
  local_d0 = 0;
  if (param_1[0x5c] == 1) {
    local_194 = 0;
    if (0 < local_108) {
      local_194 = 0;
      local_190 = 0;
      iVar5 = 0;
      do {
        local_184 = *(byte **)(local_104 + iVar5 * 4);
        *(undefined2 *)(param_1[0x60] + iVar5 * 2) = 0;
        *(char **)(param_1[0x61] + iVar5 * 4) = ".notdef";
        if ((local_184 != (byte *)0x0) && (iVar1 = param_1[0x69], 0 < iVar1)) {
          local_188 = param_1[0x6a];
          iVar6 = 0;
          local_18c = iVar5;
          do {
            pbVar2 = *(byte **)(local_188 + iVar6 * 4);
            uVar4 = FUN_00493010(local_184,pbVar2);
            iVar5 = local_18c;
            if (uVar4 == 0) {
              *(short *)(param_1[0x60] + local_18c * 2) = (short)iVar6;
              *(byte **)(param_1[0x61] + local_18c * 4) = pbVar2;
              uVar4 = FUN_00493010((byte *)".notdef",pbVar2);
              if (uVar4 != 0) {
                if (iVar5 < local_190) {
                  local_190 = iVar5;
                }
                if (local_194 <= iVar5 + 1) {
                  local_194 = iVar5 + 1;
                }
              }
              break;
            }
            iVar6 = iVar6 + 1;
          } while (iVar1 != iVar6);
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 < local_108);
    }
    param_1[0x5e] = local_190;
    param_1[0x5f] = local_194;
    param_1[0x5d] = local_11c;
  }
  if (1000 < (uint)param_1[0x46]) {
    param_1[0x46] = 7;
  }
  if (1000 < (uint)param_1[0x47]) {
    param_1[0x47] = 1;
  }
LAB_00448242:
  FUN_00448ce2((int)local_17c);
  if (DAT_0050e8c0 != (local_14 ^ (uint)&local_194)) {
                    /* WARNING: Subroutine does not return */
    FUN_0047f2c0(local_14 ^ (uint)&local_194);
  }
  return local_180;
}

