/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0041c4b4 */

void __cdecl FUN_0041c4b4(int param_1,undefined4 *param_2)

{
  int *piVar1;
  int local_10;
  uint local_c;
  
  local_c = DAT_0050e8c0 ^ (uint)&local_10;
  piVar1 = FUN_0041c507(param_1,0x60,&local_10);
  if (local_10 == 0) {
    *piVar1 = param_1;
    *param_2 = piVar1;
  }
  if (DAT_0050e8c0 == (local_c ^ (uint)&local_10)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0047f2c0(local_c ^ (uint)&local_10);
}

