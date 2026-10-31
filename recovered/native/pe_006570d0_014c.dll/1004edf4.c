/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1004edf4 */

undefined4 * __thiscall FUN_1004edf4(int param_1,undefined4 *param_2)

{
  byte bVar1;
  size_t sVar2;
  int *unaff_FS_OFFSET;
  char local_34 [12];
  byte *local_28;
  byte *local_24;
  undefined1 *local_20;
  int local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = local_34;
  local_18 = &LAB_1005a880;
  local_1c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_1c;
  param_2[4] = 0;
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[5] = 0xf;
  local_14 = 0;
  local_24 = *(byte **)(param_1 + 0x24);
  for (local_28 = *(byte **)(param_1 + 0x20); local_28 != local_24; local_28 = local_28 + 1) {
    bVar1 = *local_28;
    if (bVar1 < 0x20) {
      local_34[0] = '\0';
      local_34[1] = '\0';
      local_34[2] = '\0';
      local_34[3] = '\0';
      local_34[4] = '\0';
      local_34[5] = '\0';
      local_34[6] = '\0';
      local_34[7] = '\0';
      local_34[8] = 0;
      FUN_10054804(local_34,9,"<U+%.4X>",bVar1);
      sVar2 = _strlen(local_34);
      FUN_1000347e(local_34,sVar2);
    }
    else {
      FUN_10003d9a((int)(char)bVar1);
    }
  }
  *unaff_FS_OFFSET = local_1c;
  return param_2;
}

