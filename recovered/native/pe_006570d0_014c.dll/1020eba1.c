/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1020eba1 */

int __fastcall FUN_1020eba1(int *param_1,int *param_2,int *param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  int *local_20;
  int *local_1c;
  int local_18;
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)&local_20;
  iVar5 = *param_2;
  local_1c = param_2;
  iVar2 = FUN_101c2a50(param_4,4,0,iVar5 * 2,0,&local_18);
  param_1[3] = iVar2;
  local_20 = param_1;
  if (local_18 == 0) {
    iVar2 = FUN_101c2a50(param_4,0x1c,0,iVar5,0,&local_18);
    local_20[2] = iVar2;
    if (local_18 == 0) {
      iVar2 = FUN_101c2a50(param_4,0x10,0,iVar5 * 2 | 1,0,&local_18);
      piVar1 = local_20;
      local_20[6] = iVar2;
      if (local_18 == 0) {
        *local_20 = iVar5;
        iVar2 = local_20[3] + iVar5 * 4;
        if (local_20[3] == 0) {
          iVar2 = 0;
        }
        local_20[4] = iVar2;
        local_20[1] = 0;
        local_20[5] = 0;
        local_20[7] = 0;
        if (iVar5 != 0) {
          puVar3 = (undefined4 *)local_1c[2];
          puVar4 = (undefined4 *)local_20[2];
          do {
            *puVar4 = *puVar3;
            puVar4[1] = puVar3[1];
            puVar4[4] = puVar3[2];
            puVar4 = puVar4 + 7;
            puVar3 = puVar3 + 3;
            iVar5 = iVar5 + -1;
          } while (iVar5 != 0);
        }
        if (param_3 != (int *)0x0) {
          iVar5 = *param_3;
          local_20[8] = (int)param_3;
          for (; iVar5 != 0; iVar5 = iVar5 + -1) {
            FUN_1020ece8();
          }
        }
        iVar5 = *piVar1;
        if (iVar5 != 0 && piVar1[1] != iVar5) {
          iVar2 = 0;
          do {
            FUN_1020ed32();
            iVar2 = iVar2 + 1;
          } while (iVar5 != iVar2);
        }
      }
    }
  }
  if (DAT_10388d00 != (local_14 ^ (uint)&local_20)) {
                    /* WARNING: Subroutine does not return */
    FUN_102283e0();
  }
  return local_18;
}

