/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1408b6ac0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_1408b6ac0(uint param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  int iVar3;
  ulonglong uVar4;
  int *piVar5;
  ulonglong uStack_30;
  ulonglong uStack_28;
  
  piVar5 = (int *)(ulonglong)param_1;
  if (*piVar5 == 0) {
    uVar2 = (*_DAT_150c14a64)();
    iVar3 = piVar5[2];
    *(undefined4 *)(((ulonglong)&stack0xfffffffffffffff8 & 0xffffffff) - 4) = uVar2;
    if ((char)iVar3 == '\0') {
      piVar5[1] = 0;
      uStack_28 = 0;
      *(undefined1 *)(piVar5 + 2) = 1;
    }
    else {
      uStack_28 = (ulonglong)(uint)piVar5[1];
    }
    uStack_30 = (ulonglong)((int)&stack0xfffffffffffffff8 - 4);
    iVar3 = FUN_1408cc3be();
    uVar4 = (ulonglong)((int)&uStack_30 + 8);
    *piVar5 = iVar3;
    *(undefined8 *)(uVar4 - 8) =
         *(undefined8 *)(((ulonglong)&stack0xfffffffffffffff8 & 0xffffffff) - 4);
    pcVar1 = _DAT_150c14bb6;
    *(undefined8 *)(uVar4 - 0x10) = 0x1408b6b0a;
    (*pcVar1)();
    if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      *(undefined **)(uVar4 - 8) = &UNK_1408b6b1b;
      FUN_1408c4986();
    }
  }
  return *piVar5;
}

