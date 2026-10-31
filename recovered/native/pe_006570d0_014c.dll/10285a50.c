/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10285a50 */

int FUN_10285a50(byte *param_1,byte *param_2,uint param_3,undefined4 *param_4)

{
  byte bVar1;
  undefined4 *puVar2;
  uint uVar3;
  int iVar4;
  int local_18;
  undefined *local_14;
  undefined4 local_10;
  char local_c;
  
  if (param_1 == (byte *)0x0) {
    puVar2 = (undefined4 *)FUN_10268ffd();
    *puVar2 = 0x16;
    FUN_10273ea8();
    return 0x7fffffff;
  }
  if (param_2 == (byte *)0x0) {
    puVar2 = (undefined4 *)FUN_10268ffd();
    *puVar2 = 0x16;
    FUN_10273ea8();
    return 0x7fffffff;
  }
  if (0x7fffffff < param_3) {
    puVar2 = (undefined4 *)FUN_10268ffd();
    *puVar2 = 0x16;
    FUN_10273ea8();
    return 0x7fffffff;
  }
  if (param_3 == 0) {
    return 0;
  }
  local_c = '\0';
  if (param_4 == (undefined4 *)0x0) {
    if (DAT_103a5004 == 0) {
      local_14 = PTR_PTR_1039b4c0;
    }
    else {
      local_18 = FUN_102743cd();
      local_14 = *(undefined **)(local_18 + 0x4c);
      local_10 = *(undefined4 *)(local_18 + 0x48);
      ___acrt_update_locale_info(local_18,&local_14);
      FUN_1027494a(local_18,&local_10);
      if ((*(uint *)(local_18 + 0x350) & 2) == 0) {
        *(uint *)(local_18 + 0x350) = *(uint *)(local_18 + 0x350) | 2;
        local_c = '\x01';
      }
    }
  }
  else {
    local_14 = (undefined *)*param_4;
  }
  do {
    bVar1 = *param_1;
    param_1 = param_1 + 1;
    uVar3 = (uint)*(byte *)((uint)bVar1 + *(int *)(local_14 + 0x94));
    iVar4 = uVar3 - *(byte *)((uint)*param_2 + *(int *)(local_14 + 0x94));
    if ((iVar4 != 0) || (uVar3 == 0)) break;
    param_3 = param_3 - 1;
    param_2 = param_2 + 1;
  } while (param_3 != 0);
  if (local_c != '\0') {
    *(uint *)(local_18 + 0x350) = *(uint *)(local_18 + 0x350) & 0xfffffffd;
  }
  return iVar4;
}

