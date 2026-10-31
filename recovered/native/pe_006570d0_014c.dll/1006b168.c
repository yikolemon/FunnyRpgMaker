/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1006b168 */

void __thiscall FUN_1006b168(int param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int *unaff_FS_OFFSET;
  undefined4 *local_38;
  undefined4 *local_34;
  int local_30;
  int local_2c;
  undefined4 *local_28;
  undefined4 *local_24;
  undefined1 *local_20;
  int local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_38;
  local_14 = 0xffffffff;
  local_18 = &LAB_100c2470;
  local_1c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_1c;
  local_2c = param_1 + 0x5c;
  local_30 = param_1;
  FUN_100446d6();
  local_14 = 0;
  local_28 = (undefined4 *)FUN_100ab5d2(param_2);
  if (local_28 != param_2) {
    puVar1 = param_2;
    if (0xf < (uint)param_2[5]) {
      puVar1 = (undefined4 *)*param_2;
    }
    FUN_100180a6(puVar1,param_2[4]);
  }
  local_38 = (undefined4 *)param_2[7];
  local_28 = local_28 + 6;
  puVar1 = (undefined4 *)param_2[6];
  while (puVar1 != local_38) {
    local_24 = puVar1;
    puVar1 = (undefined4 *)FUN_100a9370(puVar1);
    if (puVar1 != local_24) {
      puVar2 = local_24;
      if (0xf < (uint)local_24[5]) {
        puVar2 = (undefined4 *)*local_24;
      }
      local_34 = puVar1;
      FUN_100180a6(puVar2,local_24[4]);
      FUN_100ab26e(local_24[6],((int)(local_24[7] - local_24[6]) >> 3) * -0x55555555);
      FUN_100ab26e(local_24[9],((int)(local_24[10] - local_24[9]) >> 3) * -0x55555555);
    }
    puVar1 = local_24 + 0xc;
  }
  *(undefined1 *)(local_30 + 0x58) = 1;
  local_14 = 0xffffffff;
  FUN_1022c200(local_2c);
  *unaff_FS_OFFSET = local_1c;
  return;
}

