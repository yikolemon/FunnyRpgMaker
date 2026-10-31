/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00410e8c */

void __thiscall FUN_00410e8c(void *this,uint *param_1,uint param_2)

{
  short *psVar1;
  undefined1 auStack_10 [2];
  short local_e;
  uint local_c;
  
  local_c = DAT_0050e8c0 ^ (uint)auStack_10;
  if (2 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_0040ba4e(0x504b5f);
  }
  psVar1 = (short *)thunk_FUN_00410fe0(param_1,(int)param_1 + param_2 * 2,
                                       (uint *)(*(int *)this + 0x10));
  local_e = 0;
  FUN_00410f9a(psVar1,(short *)(*(int *)this + 0x14),&local_e);
  *(char *)(*(int *)this + 0xe) = (char)param_2;
  if (DAT_0050e8c0 == (local_c ^ (uint)auStack_10)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0047f2c0(local_c ^ (uint)auStack_10);
}

