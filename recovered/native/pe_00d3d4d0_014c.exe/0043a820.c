/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0043a820 */

void __fastcall FUN_0043a820(int param_1,ushort *param_2)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  uint local_28;
  uint local_24;
  uint local_20;
  uint local_1c;
  uint local_18;
  uint local_14;
  
  local_14 = DAT_0050e8c0 ^ (uint)&local_28;
  uVar3 = (uint)*param_2;
  if (*(short *)(param_1 + 0xf2) == 0) {
    uVar1 = 1;
  }
  else {
    uVar1 = (uint)*(ushort *)(param_1 + 0x62);
  }
  if (uVar3 < uVar1) {
    uVar2 = FUN_0044446b(param_1,&local_1c,&local_20,*(int *)(param_1 + 0x68),&local_18);
    if ((char)uVar2 == '\0') {
      if (uVar3 == 0) {
        uVar1 = 0;
      }
      else {
        uVar1 = ((uint)*(ushort *)(*(int *)(param_1 + 0x74) + -2 + uVar3 * 2) -
                (uint)*(ushort *)(param_1 + 0x78)) + 1;
      }
      if (*(short *)(param_1 + 0xf2) == 0) {
        uVar3 = (uint)*(ushort *)(param_1 + 0x60);
      }
      else {
        uVar3 = ((uint)*(ushort *)(*(int *)(param_1 + 0x74) + uVar3 * 2) -
                (uint)*(ushort *)(param_1 + 0x78)) + 1;
      }
      if (uVar1 < uVar3) {
        local_24 = local_20;
        local_28 = local_1c;
        do {
          if (local_18 != uVar1) {
            FUN_00444530(param_1,uVar1,local_28,local_24);
          }
          uVar1 = uVar1 + 1;
        } while (uVar3 != uVar1);
      }
    }
  }
  else if (*(char *)(param_1 + 0x1ce) != '\0') {
    *(undefined4 *)(param_1 + 0x10) = 0x86;
  }
  if (DAT_0050e8c0 == (local_14 ^ (uint)&local_28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0047f2c0(local_14 ^ (uint)&local_28);
}

