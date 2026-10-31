/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101bff17 */

void * FUN_101bff17(undefined4 param_1,size_t param_2,int *param_3)

{
  void *_Dst;
  int local_18;
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)&local_18;
  _Dst = (void *)FUN_101c21f6(param_1,param_2,&local_18);
  if (((0 < (int)param_2) && (local_18 == 0)) && (_Dst != (void *)0x0)) {
    _memset(_Dst,0,param_2);
  }
  *param_3 = local_18;
  if (DAT_10388d00 == (local_14 ^ (uint)&local_18)) {
    return _Dst;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

