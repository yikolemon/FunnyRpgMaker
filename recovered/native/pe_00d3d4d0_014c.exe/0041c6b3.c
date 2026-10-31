/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0041c6b3 */

int __cdecl
FUN_0041c6b3(int param_1,uint param_2,uint param_3,uint param_4,int param_5,int *param_6)

{
  int iVar1;
  int local_18;
  uint local_14;
  
  local_14 = DAT_0050e8c0 ^ (uint)&local_18;
  iVar1 = FUN_0041efcd(param_1,param_2,param_3,param_4,param_5,&local_18);
  if (((param_4 - param_3 != 0 && (int)param_3 <= (int)param_4) && (local_18 == 0)) && (iVar1 != 0))
  {
    _memset((void *)(param_3 * param_2 + iVar1),0,(param_4 - param_3) * param_2);
  }
  *param_6 = local_18;
  if (DAT_0050e8c0 == (local_14 ^ (uint)&local_18)) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0047f2c0(local_14 ^ (uint)&local_18);
}

