/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0041c638 */

int __cdecl FUN_0041c638(int *param_1)

{
  int iVar1;
  int iVar2;
  int local_10;
  uint local_c;
  
  local_c = DAT_0050e8c0 ^ (uint)&local_10;
  iVar2 = 0;
  if ((param_1[1] != 0) && (param_1[10] == 0)) {
    iVar1 = FUN_0041c6b3(*param_1,8,0,param_1[1] * 2,0,&local_10);
    param_1[10] = iVar1;
    iVar2 = local_10;
    if (local_10 == 0) {
      *(undefined1 *)(param_1 + 4) = 1;
      param_1[0xb] = iVar1 + param_1[1] * 8;
      FUN_0041c73c((int)param_1);
      iVar2 = 0;
    }
  }
  if (DAT_0050e8c0 == (local_c ^ (uint)&local_10)) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0047f2c0(local_c ^ (uint)&local_10);
}

