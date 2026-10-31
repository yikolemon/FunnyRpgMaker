/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00446f2b */

int __cdecl FUN_00446f2b(int param_1,uint param_2,int param_3)

{
  byte *pbVar1;
  int iVar2;
  byte bVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint local_68;
  uint local_64;
  int local_60;
  int local_5c;
  uint local_58;
  int local_54 [16];
  uint local_14;
  
  local_14 = DAT_0050e8c0 ^ (uint)&local_68;
  iVar6 = *(int *)(param_1 + 0x214);
  if (iVar6 == 0) {
    iVar6 = 6;
  }
  else {
    local_68 = *(uint *)(iVar6 + 4);
    local_58 = param_2;
    if (local_68 <= param_2) {
      local_58 = local_68;
    }
    if (local_68 == 0) {
      local_68 = 0;
    }
    else {
      local_60 = iVar6 + 0x58;
      uVar8 = 0;
      local_5c = iVar6;
      do {
        pbVar1 = (byte *)(local_60 + uVar8 * 0xc);
        piVar4 = *(int **)(pbVar1 + 4);
        if (uVar8 < local_58) {
          iVar6 = *(int *)(param_3 + uVar8 * 4);
          bVar3 = *pbVar1;
          local_64 = (uint)bVar3;
        }
        else {
          bVar3 = *pbVar1;
          local_64 = (uint)bVar3;
          iVar6 = (piVar4[local_64 - 1] - *piVar4) / 2;
        }
        piVar5 = *(int **)(local_60 + 8 + uVar8 * 0xc);
        if (bVar3 == 0) {
LAB_0044701e:
          iVar6 = *piVar5;
        }
        else {
          iVar7 = -1;
          do {
            if (iVar6 == piVar4[iVar7 + 1]) {
              iVar6 = piVar5[iVar7 + 1];
              goto LAB_00447020;
            }
            if (iVar6 < piVar4[iVar7 + 1]) {
              if (iVar7 < 0) goto LAB_0044701e;
              iVar6 = FUN_0041dcda(iVar6 - piVar4[iVar7],piVar5[iVar7 + 1] - piVar5[iVar7],
                                   piVar4[iVar7 + 1] - piVar4[iVar7]);
              local_68 = *(uint *)(local_5c + 4);
              goto LAB_00447020;
            }
            iVar2 = iVar7 - local_64;
            iVar7 = iVar7 + 1;
          } while (iVar2 != -2);
          iVar6 = piVar5[local_64 - 1];
        }
LAB_00447020:
        local_54[uVar8] = iVar6;
        uVar8 = uVar8 + 1;
      } while (uVar8 < local_68);
    }
    iVar6 = FUN_00447670(param_1,local_68,(int)local_54);
  }
  if (DAT_0050e8c0 != (local_14 ^ (uint)&local_68)) {
                    /* WARNING: Subroutine does not return */
    FUN_0047f2c0(local_14 ^ (uint)&local_68);
  }
  return iVar6;
}

