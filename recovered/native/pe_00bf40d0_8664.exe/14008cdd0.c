/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14008cdd0 */

bool FUN_14008cdd0(ulonglong *param_1,longlong param_2)

{
  int iVar1;
  PVOID pvVar2;
  longlong lVar3;
  uint uVar4;
  ulonglong uVar5;
  
  iVar1 = FUN_14009d7f0(param_2,param_1);
  uVar4 = *(uint *)(param_2 + 0xc);
  uVar5 = (ulonglong)uVar4;
  do {
    if (uVar4 == 0) {
      lVar3 = 0;
      break;
    }
    uVar4 = (int)uVar5 - 1;
    uVar5 = (ulonglong)uVar4;
    pvVar2 = FUN_14009d690();
    lVar3 = (longlong)*(int *)(param_2 + 0x10) +
            *(longlong *)((longlong)pvVar2 + 0x60) + uVar5 * 0x14;
  } while ((iVar1 <= *(int *)(lVar3 + 4)) || (*(int *)(lVar3 + 8) < iVar1));
  return lVar3 != 0;
}

