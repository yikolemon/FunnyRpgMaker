/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0041c507 */

void * __cdecl FUN_0041c507(int param_1,size_t param_2,int *param_3)

{
  void *_Dst;
  int local_18;
  uint local_14;
  
  local_14 = DAT_0050e8c0 ^ (uint)&local_18;
  _Dst = (void *)FUN_0041e773(param_1,param_2,&local_18);
  if (((0 < (int)param_2) && (local_18 == 0)) && (_Dst != (void *)0x0)) {
    _memset(_Dst,0,param_2);
  }
  *param_3 = local_18;
  if (DAT_0050e8c0 == (local_14 ^ (uint)&local_18)) {
    return _Dst;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0047f2c0(local_14 ^ (uint)&local_18);
}

