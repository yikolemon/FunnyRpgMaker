/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1407dfba0 */

void FUN_1407dfba0(ulonglong param_1)

{
  int iVar1;
  int *piVar2;
  undefined8 *puVar3;
  
  piVar2 = (int *)(param_1 & 0xffffffff);
  iVar1 = *(int *)(param_1 + 8);
  while( true ) {
    if (iVar1 < 1) {
      *piVar2 = 0;
      piVar2[1] = 1;
      if (piVar2[4] != 0) {
        piVar2[3] = 0;
        piVar2[2] = 0;
                    /* WARNING: Subroutine does not return */
        FUN_14075219b();
      }
      return;
    }
    puVar3 = (undefined8 *)(ulonglong)(uint)piVar2[4];
    if (*piVar2 == 0) {
      puVar3[2] = 0;
      *puVar3 = 0;
      puVar3[1] = 0;
      puVar3 = (undefined8 *)(ulonglong)(uint)piVar2[4];
    }
    if (*(int *)(puVar3 + 1) != 0) break;
    if (*(int *)((longlong)puVar3 + 0x14) != 0) {
      *(undefined4 *)(puVar3 + 2) = 0;
      *(undefined4 *)((longlong)puVar3 + 0xc) = 0;
                    /* WARNING: Subroutine does not return */
      FUN_14075219b();
    }
    iVar1 = piVar2[2];
  }
  *(undefined4 *)((longlong)puVar3 + 4) = 0;
  *(undefined4 *)puVar3 = 0;
                    /* WARNING: Subroutine does not return */
  FUN_14075219b();
}

