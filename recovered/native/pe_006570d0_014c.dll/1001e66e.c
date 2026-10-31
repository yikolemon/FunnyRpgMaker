/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1001e66e */

void __fastcall FUN_1001e66e(int param_1)

{
  char cVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  
  uVar4 = 1;
LAB_1001e679:
  while( true ) {
    iVar3 = FUN_1001e764(uVar4);
    if (iVar3 != 1) goto code_r0x1001e68e;
    cVar1 = *(char *)(param_1 + 0x4e);
    if ((*(byte *)(param_1 + 0x3a) & 8) == 0 && cVar1 == '\0') {
                    /* WARNING: Subroutine does not return */
      FUN_1001d9e4(2);
    }
    if (*(int *)(param_1 + 0x48) == 0x2d) break;
    FUN_1001e7fe((int)cVar1);
    uVar4 = 0;
  }
  goto LAB_1001e6b9;
code_r0x1001e68e:
  if (iVar3 == 0) {
    return;
  }
  uVar4 = 0;
  if (*(int *)(param_1 + 0x48) == 0x2d) {
    cVar1 = *(char *)(param_1 + 0x4e);
LAB_1001e6b9:
    cVar2 = *(char *)(param_1 + 0x4d);
    FUN_1001d8ea();
    iVar5 = FUN_1001e764(0);
    if (iVar5 == 0) {
      if (iVar3 != 2) {
        FUN_1001e7fe((int)cVar1);
      }
      FUN_1001e7fe((int)cVar2);
      return;
    }
    if ((iVar3 == 2) || (iVar5 == 2)) {
                    /* WARNING: Subroutine does not return */
      FUN_1001d9e4(8);
    }
    cVar2 = *(char *)(param_1 + 0x4e);
    if ((*(byte *)(param_1 + 0x41) & 1) != 0) {
      cVar1 = (**(code **)(**(int **)(*(int *)(param_1 + 0x30) + 4) + 0x10))((int)cVar1);
      cVar2 = (**(code **)(**(int **)(*(int *)(param_1 + 0x30) + 4) + 0x10))((int)cVar2);
    }
    FUN_1001e82a((int)cVar1,(int)cVar2);
    uVar4 = 0;
  }
  goto LAB_1001e679;
}

