/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101f03f5 */

int FUN_101f03f5(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined1 auStack_1c [3];
  undefined1 local_19;
  undefined1 local_18 [8];
  uint local_10;
  
  local_10 = DAT_10388d00 ^ (uint)auStack_1c;
  iVar2 = FUN_101f0468(local_18,&local_19);
  if ((iVar2 == 0) &&
     (piVar1 = *(int **)(*(int *)(*(int *)(param_1 + 4) + 0x80) + 0x34), piVar1 != (int *)0x0)) {
    (**(code **)(*piVar1 + 4))(piVar1[1],local_18);
  }
  if (DAT_10388d00 == (local_10 ^ (uint)auStack_1c)) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

