/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101e30b0 */

void __fastcall FUN_101e30b0(int param_1,ushort *param_2)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  uint local_18;
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)&local_28;
  uVar3 = (uint)*param_2;
  if (*(short *)(param_1 + 0xf2) == 0) {
    uVar2 = 1;
  }
  else {
    uVar2 = (uint)*(ushort *)(param_1 + 0x62);
  }
  if (uVar3 < uVar2) {
    cVar1 = FUN_101eccf6(&local_20,*(undefined4 *)(param_1 + 0x68),&local_18);
    if (cVar1 == '\0') {
      if (uVar3 == 0) {
        uVar2 = 0;
      }
      else {
        uVar2 = ((uint)*(ushort *)(*(int *)(param_1 + 0x74) + -2 + uVar3 * 2) -
                (uint)*(ushort *)(param_1 + 0x78)) + 1;
      }
      if (*(short *)(param_1 + 0xf2) == 0) {
        uVar3 = (uint)*(ushort *)(param_1 + 0x60);
      }
      else {
        uVar3 = ((uint)*(ushort *)(*(int *)(param_1 + 0x74) + uVar3 * 2) -
                (uint)*(ushort *)(param_1 + 0x78)) + 1;
      }
      if (uVar2 < uVar3) {
        local_24 = local_20;
        local_28 = local_1c;
        do {
          if (local_18 != uVar2) {
            FUN_101ecdbb(local_28,local_24);
          }
          uVar2 = uVar2 + 1;
        } while (uVar3 != uVar2);
      }
    }
  }
  else if (*(char *)(param_1 + 0x1ce) != '\0') {
    *(undefined4 *)(param_1 + 0x10) = 0x86;
  }
  if (DAT_10388d00 == (local_14 ^ (uint)&local_28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

