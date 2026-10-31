/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14018f670 */

bool FUN_14018f670(undefined8 param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  uint uVar3;
  ulonglong uVar4;
  
  iVar1 = FUN_1401aaf90(param_2,param_1);
  uVar3 = *(uint *)(param_2 + 0xc);
  uVar4 = (ulonglong)uVar3;
  do {
    if (uVar3 == 0) {
      lVar2 = 0;
      break;
    }
    uVar3 = (int)uVar4 - 1;
    uVar4 = (ulonglong)uVar3;
    lVar2 = FUN_1401aae30();
    lVar2 = (longlong)*(int *)(param_2 + 0x10) + *(longlong *)(lVar2 + 0x60) + uVar4 * 0x14;
  } while ((iVar1 <= *(int *)(lVar2 + 4)) || (*(int *)(lVar2 + 8) < iVar1));
  return lVar2 != 0;
}

