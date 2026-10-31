/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10220cf6 */

int FUN_10220cf6(int *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  undefined8 *local_10;
  uint local_c;
  
  local_c = DAT_10388d00 ^ (uint)&local_10;
  local_10 = (undefined8 *)0x0;
  piVar1 = *(int **)(param_2 + 4);
  if ((*piVar1 != *param_1) || (iVar2 = 0, piVar1[1] != param_1[1])) {
    iVar2 = FUN_10220f38();
    if (iVar2 == 0) {
      *(undefined4 *)(local_10 + 4) = 1;
      *local_10 = *(undefined8 *)piVar1;
      local_10[1] = *(undefined8 *)param_1;
      *(int *)((int)local_10 + 0x24) = piVar1[2];
      piVar1[2] = (int)local_10;
      *(undefined8 *)piVar1 = *(undefined8 *)param_1;
      iVar2 = 0;
    }
  }
  if (DAT_10388d00 == (local_c ^ (uint)&local_10)) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

