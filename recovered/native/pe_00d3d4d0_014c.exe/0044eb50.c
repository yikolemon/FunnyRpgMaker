/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0044eb50 */

int __fastcall FUN_0044eb50(int *param_1,undefined4 *param_2,int *param_3,size_t *param_4)

{
  int iVar1;
  undefined4 *puVar2;
  void *pvVar3;
  uint uVar4;
  int iVar5;
  void *pvVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  size_t sVar10;
  uint uVar11;
  size_t local_30;
  int *local_2c;
  void *local_28;
  void *local_24;
  int local_20;
  int *local_1c;
  int local_18;
  uint local_14;
  
  local_14 = DAT_0050e8c0 ^ (uint)&local_30;
  local_18 = 0;
  iVar7 = *(int *)(*param_1 + 0x1c);
  *param_2 = 0;
  if ((param_1[7] != 0) || (iVar5 = FUN_0044fc2b(param_1), local_18 = iVar5, iVar5 == 0)) {
    iVar1 = param_1[3];
    iVar5 = 0;
    if (iVar1 != 0) {
      sVar10 = param_1[6] + iVar1;
      local_1c = param_2;
      puVar2 = (undefined4 *)FUN_0041efcd(iVar7,4,0,iVar1 + 1,0,&local_18);
      if (local_18 == 0) {
        pvVar6 = (void *)0x0;
        local_30 = sVar10;
        if ((param_3 == (int *)0x0) ||
           (pvVar6 = FUN_0041c507(iVar7,sVar10,&local_18), local_18 == 0)) {
          local_24 = (void *)param_1[8];
          pvVar3 = pvVar6;
          if (param_3 == (int *)0x0) {
            pvVar3 = local_24;
          }
          *puVar2 = pvVar3;
          local_28 = pvVar6;
          local_20 = iVar7;
          if (param_1[3] != 0) {
            uVar11 = 1;
            iVar7 = 0;
            uVar8 = 0;
            local_2c = param_1;
            do {
              uVar4 = *(int *)(param_1[7] + uVar11 * 4) - 1;
              uVar9 = uVar8;
              if ((uVar8 <= uVar4) && (uVar9 = param_1[6], uVar4 < (uint)param_1[6])) {
                uVar9 = uVar4;
              }
              if (param_3 == (int *)0x0) {
                puVar2[uVar11] = (int)local_24 + uVar9;
              }
              else {
                iVar5 = (int)local_28 + iVar7 + uVar9;
                puVar2[uVar11] = iVar5;
                param_1 = local_2c;
                if (uVar9 != uVar8) {
                  FUN_004878c0((uint *)puVar2[uVar11 - 1],(uint *)(uVar8 + (int)local_24),
                               iVar5 - (int)puVar2[uVar11 - 1]);
                  *(undefined1 *)puVar2[uVar11] = 0;
                  puVar2[uVar11] = puVar2[uVar11] + 1;
                  iVar7 = iVar7 + 1;
                  param_1 = local_2c;
                }
              }
              uVar11 = uVar11 + 1;
              uVar8 = uVar9;
            } while (uVar11 <= (uint)param_1[3]);
          }
          *local_1c = (int)puVar2;
          if (param_3 != (int *)0x0) {
            *param_3 = (int)local_28;
          }
          pvVar6 = local_28;
          iVar7 = local_20;
          if (param_4 != (size_t *)0x0) {
            *param_4 = local_30;
          }
        }
        if ((local_18 != 0) && (pvVar6 != (void *)0x0)) {
          FUN_0041c607(iVar7,(int)pvVar6);
        }
      }
      iVar5 = local_18;
      if (puVar2 != (undefined4 *)0x0 && local_18 != 0) {
        FUN_0041c607(iVar7,(int)puVar2);
        iVar5 = local_18;
      }
    }
  }
  if (DAT_0050e8c0 != (local_14 ^ (uint)&local_30)) {
                    /* WARNING: Subroutine does not return */
    FUN_0047f2c0(local_14 ^ (uint)&local_30);
  }
  return iVar5;
}

