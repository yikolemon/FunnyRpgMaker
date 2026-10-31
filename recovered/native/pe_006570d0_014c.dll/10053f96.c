/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10053f96 */

int * __thiscall FUN_10053f96(int *param_1,int *param_2,int param_3,int param_4)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  int local_28;
  int local_24;
  int *local_20;
  undefined1 local_1c [8];
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)&local_28;
  iVar1 = *param_1;
  uVar2 = param_1[3];
  if (uVar2 == 0) {
    uVar4 = 0;
    local_28 = iVar1;
  }
  else {
    uVar4 = param_4 + (param_3 - iVar1) * 8;
    local_28 = iVar1 + (uVar4 >> 5) * 4;
    if ((int)uVar4 < 0) {
      local_28 = local_28 + -0x20000000;
    }
    uVar4 = uVar4 & 0x1f;
  }
  iVar5 = 0;
  if (uVar4 != 0x1f) {
    iVar5 = uVar4 + 1;
  }
  local_24 = uVar4 + (local_28 - iVar1) * 8;
  local_20 = param_1;
  FUN_1001fd4d(local_1c,local_28 + (uint)(uVar4 == 0x1f) * 4,iVar5,
               ((int)uVar2 >> 0x1f & 0xe0000000U) + iVar1 + (uVar2 >> 5) * 4,uVar2 & 0x1f,local_28,
               uVar4);
  piVar3 = local_20;
  FUN_1001fca8(local_20[3] + -1);
  *param_2 = *piVar3;
  param_2[1] = 0;
  FUN_1001fd02(local_24);
  if (DAT_10388d00 == (local_14 ^ (uint)&local_28)) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

