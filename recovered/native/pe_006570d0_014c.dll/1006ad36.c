/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1006ad36 */

undefined4 __thiscall FUN_1006ad36(undefined4 *param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int local_1c;
  int local_18;
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)&local_1c;
  piVar1 = param_1 + 4;
  if (7 < (uint)param_1[5]) {
    param_1 = (undefined4 *)*param_1;
  }
  iVar2 = (int)param_1 + *piVar1 * 2;
  iVar5 = FUN_100020d5(param_1,iVar2);
  iVar4 = 0;
  do {
    iVar6 = iVar4;
    local_1c = iVar2 + iVar6;
    if ((local_1c == iVar5) || (sVar3 = *(short *)(iVar2 + -2 + iVar6), sVar3 == 0x5c)) break;
    iVar4 = iVar6 + -2;
  } while (sVar3 != 0x2f);
  local_18 = -iVar6 >> 1;
  FUN_10002056(&local_1c,0);
  if (DAT_10388d00 == (local_14 ^ (uint)&local_1c)) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

