/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00463596 */

void __fastcall FUN_00463596(int param_1,int param_2)

{
  int *piVar1;
  int local_c;
  int local_8;
  uint local_4;
  
  local_4 = DAT_0050e8c0 ^ (uint)&local_c;
  local_c = *(int *)(param_2 + 4);
  local_8 = *(int *)(param_2 + 8) - local_c;
  piVar1 = *(int **)(*(int *)(*(int *)(param_1 + 4) + 0x80) + 0x34);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 4))(piVar1[1],&local_c);
  }
  if (DAT_0050e8c0 == (local_4 ^ (uint)&local_c)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0047f2c0(local_4 ^ (uint)&local_c);
}

