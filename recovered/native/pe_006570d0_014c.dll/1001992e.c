/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1001992e */

void __thiscall FUN_1001992e(int *param_1,uint param_2)

{
  size_t sVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  void *pvVar6;
  uint uVar7;
  int iVar8;
  int *unaff_FS_OFFSET;
  int *local_40;
  int local_3c;
  uint local_38;
  void *local_34;
  void *local_30;
  int *local_2c;
  uint local_28;
  int local_24;
  undefined1 *local_20;
  int local_1c;
  
  iVar8 = *param_1;
  pvVar6 = (void *)param_1[1];
  iVar2 = (int)pvVar6 - iVar8 >> 2;
  iVar3 = param_2 + iVar2 * 0x55555555;
  if (param_2 < (uint)(iVar2 * -0x55555555)) {
    param_1[1] = iVar8 + param_2 * 0xc;
  }
  else if (iVar3 != 0) {
    if ((uint)((param_1[2] - iVar8 >> 2) * -0x55555555) < param_2) {
      local_20 = (undefined1 *)&local_40;
      local_1c = *unaff_FS_OFFSET;
      *unaff_FS_OFFSET = (int)&local_1c;
      if (0x15555555 < param_2) {
                    /* WARNING: Subroutine does not return */
        FUN_10016590();
      }
      uVar4 = (param_1[2] - *param_1 >> 2) * -0x55555555;
      uVar5 = 0x15555555 - (uVar4 >> 1);
      uVar7 = (uVar4 >> 1) + uVar4;
      if (uVar7 <= param_2) {
        uVar7 = param_2;
      }
      if (uVar5 <= uVar4 && uVar4 - uVar5 != 0) {
        uVar7 = 0x15555555;
      }
      if (uVar7 < 0x15555556) {
        iVar8 = param_1[1] - *param_1;
        local_20 = (undefined1 *)&local_40;
        local_3c = FUN_10001426(uVar7 * 0xc);
        pvVar6 = (void *)(local_3c + iVar8);
        iVar8 = (iVar8 >> 2) * 0x55555555 + param_2;
        local_40 = param_1;
        local_38 = uVar7;
        local_34 = pvVar6;
        local_28 = uVar7;
        local_24 = local_3c;
        if (iVar8 != 0) {
          sVar1 = iVar8 * 0xc;
          local_30 = pvVar6;
          _memset(pvVar6,0,sVar1);
          pvVar6 = (void *)((int)pvVar6 + sVar1);
        }
        local_30 = pvVar6;
        local_2c = param_1;
        thunk_FUN_10019b82(*param_1,param_1[1],local_24);
        local_3c = 0;
        FUN_10019aee(local_24,param_2,local_28);
        FUN_10019b46();
        *unaff_FS_OFFSET = local_1c;
        return;
      }
      local_20 = (undefined1 *)&local_40;
                    /* WARNING: Subroutine does not return */
      FUN_1000146d();
    }
    sVar1 = iVar3 * 0xc;
    local_1c = 0x1001998a;
    _memset(pvVar6,0,sVar1);
    param_1[1] = (int)((int)pvVar6 + sVar1);
  }
  return;
}

