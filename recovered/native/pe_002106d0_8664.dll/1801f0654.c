/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801f0654 */

int FUN_1801f0654(longlong param_1,uint param_2,longlong param_3)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  uint uVar4;
  uint *puVar5;
  
  puVar5 = *(uint **)(param_1 + 0x408);
  if (puVar5 == (uint *)0x0) {
    iVar2 = FUN_1801f0731(param_1,0);
    if (iVar2 != 0) {
      return iVar2;
    }
    puVar5 = *(uint **)(param_1 + 0x408);
  }
  if ((*(longlong *)(puVar5 + 2) == 0) && (iVar2 = FUN_1801f210a(param_1,0,0,1), iVar2 != 0)) {
    return iVar2;
  }
  uVar1 = *puVar5;
  uVar4 = uVar1;
  if (param_2 < uVar1) {
    uVar4 = param_2;
  }
  if (*(char *)(param_1 + 0x401) == '\0') {
    if (uVar4 != 0) {
      if (param_2 <= uVar1) {
        uVar1 = param_2;
      }
      FUN_1802a89a0(param_3,0,(ulonglong)uVar1 << 2);
      goto LAB_1801f06fd;
    }
  }
  else if (uVar4 != 0) {
    uVar3 = 0;
    do {
      *(undefined4 *)(param_3 + uVar3 * 4) = *(undefined4 *)(*(longlong *)(puVar5 + 4) + uVar3 * 4);
      uVar3 = uVar3 + 1;
    } while (uVar4 != uVar3);
    goto LAB_1801f06fd;
  }
  uVar4 = 0;
LAB_1801f06fd:
  if (uVar4 < param_2) {
    FUN_1802a89a0(param_3 + (ulonglong)uVar4 * 4,0,(ulonglong)(param_2 + ~uVar4) * 4 + 4);
  }
  return 0;
}

