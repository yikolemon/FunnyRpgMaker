/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1020be1e */

void __fastcall FUN_1020be1e(int param_1,int param_2)

{
  int *piVar1;
  int local_c;
  int local_8;
  uint local_4;
  
  local_4 = DAT_10388d00 ^ (uint)&local_c;
  local_c = *(int *)(param_2 + 4);
  local_8 = *(int *)(param_2 + 8) - local_c;
  piVar1 = *(int **)(*(int *)(*(int *)(param_1 + 4) + 0x80) + 0x34);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 4))(piVar1[1],&local_c);
  }
  if (DAT_10388d00 == (local_4 ^ (uint)&local_c)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

