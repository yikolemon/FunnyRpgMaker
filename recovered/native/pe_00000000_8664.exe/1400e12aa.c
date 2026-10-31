/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400e12aa */

void FUN_1400e12aa(longlong param_1)

{
  int iVar1;
  code *pcVar2;
  longlong lVar3;
  longlong lVar4;
  
  iVar1 = *(int *)(param_1 + 0x68);
  if ((longlong)iVar1 != 0) {
    lVar3 = *(longlong *)(param_1 + 0x70);
    lVar4 = 0;
    do {
      FUN_1400e132a(param_1,*(undefined8 *)(lVar3 + lVar4));
      lVar4 = lVar4 + 8;
    } while ((longlong)iVar1 * 8 != lVar4);
  }
  lVar3 = *(longlong *)(param_1 + 0x2b0);
  if (lVar3 == 0) {
    lVar3 = 0;
  }
  else if ((*(longlong *)(param_1 + 0x2b8) != 0) &&
          (pcVar2 = *(code **)(*(longlong *)(param_1 + 0x2b8) + 0x10), pcVar2 != (code *)0x0)) {
    (*pcVar2)(param_1);
    lVar3 = *(longlong *)(param_1 + 0x2b0);
  }
  FUN_1400e570d(lVar3);
  *(undefined8 *)(param_1 + 0x2b0) = 0;
  return;
}

