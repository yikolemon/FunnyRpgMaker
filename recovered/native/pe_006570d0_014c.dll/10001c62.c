/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10001c62 */

undefined4 __thiscall FUN_10001c62(undefined4 *param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 *local_18;
  int local_14;
  uint local_10;
  
  local_10 = DAT_10388d00 ^ (uint)&local_18;
  piVar1 = param_1 + 4;
  if (7 < (uint)param_1[5]) {
    param_1 = (undefined4 *)*param_1;
  }
  iVar4 = (int)param_1 + *piVar1 * 2;
  iVar2 = FUN_100020d5(param_1,iVar4);
  do {
    iVar3 = iVar4;
    iVar4 = iVar2;
    if (iVar3 == iVar2) goto LAB_10001cc0;
  } while ((*(short *)(iVar3 + -2) != 0x5c) && (iVar4 = iVar3 + -2, *(short *)(iVar3 + -2) != 0x2f))
  ;
  do {
    if ((*(short *)(iVar3 + -2) != 0x5c) && (iVar4 = iVar3, *(short *)(iVar3 + -2) != 0x2f)) break;
    iVar3 = iVar3 + -2;
    iVar4 = iVar2;
  } while (iVar3 != iVar2);
LAB_10001cc0:
  local_14 = iVar4 - (int)param_1 >> 1;
  local_18 = param_1;
  FUN_10002056(&local_18,0);
  if (DAT_10388d00 != (local_10 ^ (uint)&local_18)) {
                    /* WARNING: Subroutine does not return */
    FUN_102283e0();
  }
  return param_2;
}

