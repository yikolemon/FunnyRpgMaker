/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00466321 */

int __fastcall FUN_00466321(uint *param_1,uint *param_2,int *param_3,int param_4)

{
  uint *puVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  uint uVar5;
  int iVar6;
  uint *puVar7;
  uint *local_20;
  uint *local_1c;
  int local_18;
  uint local_14;
  
  local_14 = DAT_0050e8c0 ^ (uint)&local_20;
  uVar5 = *param_2;
  local_1c = param_2;
  uVar2 = FUN_0041efcd(param_4,4,0,uVar5 * 2,0,&local_18);
  param_1[3] = uVar2;
  local_20 = param_1;
  if (local_18 == 0) {
    uVar2 = FUN_0041efcd(param_4,0x1c,0,uVar5,0,&local_18);
    local_20[2] = uVar2;
    if (local_18 == 0) {
      uVar2 = FUN_0041efcd(param_4,0x10,0,uVar5 * 2 | 1,0,&local_18);
      puVar1 = local_20;
      local_20[6] = uVar2;
      if (local_18 == 0) {
        *local_20 = uVar5;
        uVar2 = local_20[3] + uVar5 * 4;
        if (local_20[3] == 0) {
          uVar2 = 0;
        }
        local_20[4] = uVar2;
        local_20[1] = 0;
        local_20[5] = 0;
        local_20[7] = 0;
        if (uVar5 != 0) {
          puVar3 = (undefined4 *)local_1c[2];
          puVar4 = (undefined4 *)local_20[2];
          do {
            *puVar4 = *puVar3;
            puVar4[1] = puVar3[1];
            puVar4[4] = puVar3[2];
            puVar4 = puVar4 + 7;
            puVar3 = puVar3 + 3;
            uVar5 = uVar5 - 1;
          } while (uVar5 != 0);
        }
        if (param_3 != (int *)0x0) {
          iVar6 = *param_3;
          puVar7 = (uint *)param_3[2];
          local_20[8] = (uint)param_3;
          for (; iVar6 != 0; iVar6 = iVar6 + -1) {
            FUN_00466468(puVar1,puVar7);
            puVar7 = puVar7 + 4;
          }
        }
        uVar5 = *puVar1;
        if (uVar5 != 0 && puVar1[1] != uVar5) {
          uVar2 = 0;
          do {
            FUN_004664b2(puVar1,uVar2);
            uVar2 = uVar2 + 1;
          } while (uVar5 != uVar2);
        }
      }
    }
  }
  if (DAT_0050e8c0 != (local_14 ^ (uint)&local_20)) {
                    /* WARNING: Subroutine does not return */
    FUN_0047f2c0(local_14 ^ (uint)&local_20);
  }
  return local_18;
}

