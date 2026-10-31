/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180280790 */

int FUN_180280790(byte *param_1,byte *param_2,undefined8 *param_3)

{
  byte bVar1;
  int iVar2;
  undefined4 *puVar3;
  longlong local_28;
  undefined *local_20;
  undefined8 uStack_18;
  char local_10;
  
  if ((param_1 == (byte *)0x0) || (param_2 == (byte *)0x0)) {
    puVar3 = (undefined4 *)FUN_18027e66c();
    *puVar3 = 0x16;
    FUN_180290a50();
    return 0x7fffffff;
  }
  local_10 = '\0';
  if (param_3 == (undefined8 *)0x0) {
    if (DAT_18042116c == 0) {
      local_20 = PTR_PTR_180415ff8;
      local_10 = '\0';
    }
    else {
      local_28 = FUN_1802910d8();
      local_20 = *(undefined **)(local_28 + 0x90);
      uStack_18 = *(undefined8 *)(local_28 + 0x88);
      __acrt_update_locale_info(local_28,&local_20);
      FUN_1802916d8(local_28,&uStack_18);
      if ((*(uint *)(local_28 + 0x3a8) & 2) == 0) {
        local_10 = '\x01';
        *(uint *)(local_28 + 0x3a8) = *(uint *)(local_28 + 0x3a8) | 2;
      }
    }
  }
  else {
    local_20 = (undefined *)*param_3;
    local_10 = '\0';
  }
  do {
    bVar1 = *param_1;
    param_1 = param_1 + 1;
    bVar1 = *(byte *)((ulonglong)bVar1 + *(longlong *)(local_20 + 0x110));
    iVar2 = (uint)bVar1 - (uint)*(byte *)((ulonglong)*param_2 + *(longlong *)(local_20 + 0x110));
    if (iVar2 != 0) break;
    param_2 = param_2 + 1;
  } while (bVar1 != 0);
  if (local_10 != '\0') {
    *(uint *)(local_28 + 0x3a8) = *(uint *)(local_28 + 0x3a8) & 0xfffffffd;
  }
  return iVar2;
}

