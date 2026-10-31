/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00444bcc */

uint __fastcall FUN_00444bcc(int param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint local_28;
  uint local_24;
  int local_20;
  int local_1c;
  int local_18;
  uint local_14;
  
  local_14 = DAT_0050e8c0 ^ (uint)&local_28;
  uVar1 = *(uint *)(param_1 + 0x300);
  uVar3 = 0;
  if (uVar1 != 0) {
    uVar4 = 0;
    local_28 = uVar3;
    uVar3 = CONCAT31((int3)((uint)param_1 >> 8),1);
    do {
      while( true ) {
        local_24 = uVar3;
        uVar5 = uVar4;
        uVar4 = uVar5 + 1;
        FUN_00440110(param_1,uVar5,&local_20);
        if (local_20 != 0) break;
        uVar3 = local_24;
        if (uVar4 == uVar1) {
          if ((local_24 & 1) != 0) {
LAB_00444c3f:
            uVar3 = 0;
            goto LAB_00444c83;
          }
          goto LAB_00444c43;
        }
      }
      if ((local_24 & 1) == 0) goto LAB_00444c3f;
      local_28 = uVar5;
      uVar3 = 0;
    } while (uVar4 != uVar1);
LAB_00444c43:
    if (local_28 == 0) {
      uVar3 = CONCAT31((int3)(uVar5 >> 8),1);
    }
    else {
      iVar2 = FUN_0041f213(param_1,local_28,(undefined1 *)&local_1c,8);
      uVar3 = 0;
      if ((iVar2 == 0) && ((char)local_1c == '.')) {
        uVar3 = (uint)(local_18 == 0x666564 && local_1c == 0x746f6e2e);
      }
    }
  }
LAB_00444c83:
  if (DAT_0050e8c0 != (local_14 ^ (uint)&local_28)) {
                    /* WARNING: Subroutine does not return */
    FUN_0047f2c0(local_14 ^ (uint)&local_28);
  }
  return uVar3;
}

