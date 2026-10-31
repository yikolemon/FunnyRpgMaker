/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100621b8 */

void __fastcall FUN_100621b8(int param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int local_24;
  uint local_20;
  undefined1 local_1c [4];
  char local_18;
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)&local_24;
  local_24 = param_1;
  local_20 = param_2;
  if (((param_1 == 0) ||
      (iVar1 = *(int *)(param_1 + 0x24) - *(int *)(param_1 + 0x20) >> 3,
      (*(int *)(param_1 + 0x18) - *(int *)(param_1 + 0x14) >> 2) * 0x3cf3cf3d + iVar1 * -0x4f72c235
      != 0)) || ((uint)(iVar1 * 0x4f72c235) <= param_2)) {
    if (DAT_10388d00 == (local_14 ^ (uint)&local_24)) {
      FUN_1006235a();
      return;
    }
    goto LAB_10062331;
  }
  FUN_1006766a(local_1c,&local_24,&local_20);
  if (local_18 == '\0') {
LAB_100622d7:
    FUN_1006235a();
  }
  else {
    iVar1 = *(int *)(*(int *)(local_24 + 0x14) + 0x1c + local_20 * 0x54);
    if (iVar1 != 2) {
      if ((iVar1 == 1) || (iVar1 == 0)) goto LAB_100622d7;
      FUN_1006233c();
    }
    FUN_100621b8(param_3,param_4);
  }
  if (DAT_10388d00 == (local_14 ^ (uint)&local_24)) {
    return;
  }
LAB_10062331:
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

