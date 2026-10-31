/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10093b40 */

void __fastcall FUN_10093b40(int param_1)

{
  short sVar1;
  undefined2 uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  
  iVar6 = param_1 + 0x20;
  uVar4 = 1;
LAB_10093b4f:
  while( true ) {
    iVar3 = FUN_10093c54(uVar4);
    if (iVar3 != 1) goto code_r0x10093b64;
    sVar1 = *(short *)(param_1 + 0x50);
    if (sVar1 == 0 && (*(byte *)(param_1 + 0x3a) & 8) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1001d9e4(2,iVar6);
    }
    if (*(int *)(param_1 + 0x48) == 0x2d) break;
    FUN_10093cf2(sVar1);
    uVar4 = 0;
  }
  goto LAB_10093b9c;
code_r0x10093b64:
  if (iVar3 == 0) {
    return;
  }
  uVar4 = 0;
  if (*(int *)(param_1 + 0x48) == 0x2d) {
    sVar1 = *(short *)(param_1 + 0x50);
LAB_10093b9c:
    uVar2 = *(undefined2 *)(param_1 + 0x4e);
    FUN_1009301c();
    iVar5 = FUN_10093c54(0);
    if (iVar5 == 0) {
      if (iVar3 != 2) {
        FUN_10093cf2(sVar1);
      }
      FUN_10093cf2(uVar2);
      return;
    }
    if ((iVar3 == 2) || (iVar5 == 2)) {
                    /* WARNING: Subroutine does not return */
      FUN_1001d9e4(8,iVar6);
    }
    uVar2 = *(undefined2 *)(param_1 + 0x50);
    if ((*(byte *)(param_1 + 0x41) & 1) != 0) {
      sVar1 = (**(code **)(**(int **)(*(int *)(param_1 + 0x30) + 4) + 0x20))(sVar1);
      uVar2 = (**(code **)(**(int **)(*(int *)(param_1 + 0x30) + 4) + 0x20))(uVar2);
    }
    FUN_10093d2e(sVar1,uVar2);
    uVar4 = 0;
  }
  goto LAB_10093b4f;
}

