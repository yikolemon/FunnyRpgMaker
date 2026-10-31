/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00484290 */

void tls_callback_0(undefined4 param_1,int param_2)

{
  int iVar1;
  code *pcVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  
  if ((param_2 == 3) || (param_2 == 0)) {
    iVar1 = *(int *)((int)ThreadLocalStoragePointer + _tls_index * 4);
    piVar6 = *(int **)(iVar1 + 8);
    if (piVar6 != (int *)0x0) {
      while( true ) {
        iVar5 = *piVar6;
        while (iVar4 = iVar5 + -1, -1 < iVar4) {
          pcVar2 = (code *)piVar6[iVar5 + 1];
          iVar5 = iVar4;
          if (pcVar2 != (code *)0x0) {
            (*(code *)PTR_guard_check_icall_00508898)();
            (*pcVar2)();
          }
        }
        piVar3 = (int *)piVar6[1];
        if (piVar3 == (int *)0x0) break;
        thunk_FUN_00495f00(piVar6);
        *(int **)(iVar1 + 8) = piVar3;
        piVar6 = piVar3;
      }
      *(undefined4 *)(iVar1 + 8) = 0;
    }
  }
  return;
}

