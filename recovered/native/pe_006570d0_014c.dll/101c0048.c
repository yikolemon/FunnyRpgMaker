/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101c0048 */

int FUN_101c0048(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  int local_10;
  uint local_c;
  
  local_c = DAT_10388d00 ^ (uint)&local_10;
  iVar2 = 0;
  if ((param_1[1] != 0) && (param_1[10] == 0)) {
    iVar1 = FUN_101c00c3(*param_1,8,0,param_1[1] * 2,0,&local_10);
    param_1[10] = iVar1;
    iVar2 = local_10;
    if (local_10 == 0) {
      *(undefined1 *)(param_1 + 4) = 1;
      param_1[0xb] = iVar1 + param_1[1] * 8;
      FUN_101c014c();
      iVar2 = 0;
    }
  }
  if (DAT_10388d00 == (local_c ^ (uint)&local_10)) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

