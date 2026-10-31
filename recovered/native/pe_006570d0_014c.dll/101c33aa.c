/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101c33aa */

int FUN_101c33aa(int param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  int local_14;
  uint local_10;
  
  local_10 = DAT_10388d00 ^ (uint)&local_14;
  iVar2 = 6;
  if (param_2 != (int *)0x0 && param_1 != 0) {
    piVar1 = (int *)FUN_101bff17(param_1,0xd0,&local_14);
    iVar2 = local_14;
    if (local_14 == 0) {
      *piVar1 = param_1;
      piVar1[1] = 2;
      piVar1[2] = 0xe;
      piVar1[3] = 3;
      piVar1[0x33] = 1;
      *param_2 = (int)piVar1;
      iVar2 = 0;
    }
  }
  if (DAT_10388d00 == (local_10 ^ (uint)&local_14)) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

