/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 004a6378 */

int __cdecl
FUN_004a6378(ushort *param_1,DWORD param_2,PCNZWCH param_3,uint param_4,PCNZWCH param_5,uint param_6
            )

{
  int iVar1;
  
  if (0 < (int)param_4) {
    param_4 = FUN_004941c0(param_3,param_4);
  }
  if (0 < (int)param_6) {
    param_6 = FUN_004941c0(param_5,param_6);
  }
  if ((param_4 == 0) || (param_6 == 0)) {
    iVar1 = ((int)(param_4 - param_6) >> 0x1f & 0xfffffffeU) + 3;
    if (param_4 - param_6 == 0) {
      iVar1 = 2;
    }
  }
  else {
    iVar1 = ___acrt_CompareStringEx_36
                      ((void *)0x0,param_1,param_2,param_3,param_4,param_5,param_6,0,0,0);
  }
  return iVar1;
}

