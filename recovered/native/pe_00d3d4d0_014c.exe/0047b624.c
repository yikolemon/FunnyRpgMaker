/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0047b624 */

undefined4 __cdecl
FUN_0047b624(int param_1,int param_2,undefined4 *param_3,int param_4,undefined4 param_5)

{
  int iVar1;
  undefined4 uVar2;
  int local_4c;
  undefined4 local_48;
  int local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined1 *local_2c;
  undefined1 *local_28;
  int local_24;
  uint local_14;
  
  local_14 = DAT_0050e8c0 ^ (uint)&local_4c;
  uVar2 = 6;
  if (((param_2 != 0) && (param_1 != 0)) && (param_3 != (undefined4 *)0x0)) {
    local_4c = param_4;
    local_48 = param_5;
    local_40 = param_2;
    local_3c = *param_3;
    local_2c = &LAB_0047b6f7;
    local_28 = &LAB_0047b73f;
    local_24 = param_1;
    iVar1 = FUN_0047b744((int)&local_4c,0x2f);
    if (iVar1 == 0) {
      iVar1 = FUN_0047b7c3(&local_4c,4);
      if (iVar1 == 1) {
        *param_3 = local_38;
        iVar1 = FUN_0047d119((int)&local_4c);
      }
      else {
        FUN_0047d119((int)&local_4c);
        if (iVar1 == 0) {
          uVar2 = 10;
          goto LAB_0047b68a;
        }
      }
      uVar2 = 0;
      if (iVar1 + 5U < 8) {
        uVar2 = *(undefined4 *)(&DAT_004f7a90 + iVar1 * 4);
      }
    }
  }
LAB_0047b68a:
  if (DAT_0050e8c0 == (local_14 ^ (uint)&local_4c)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0047f2c0(local_14 ^ (uint)&local_4c);
}

