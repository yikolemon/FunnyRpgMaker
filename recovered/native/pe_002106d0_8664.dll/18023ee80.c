/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18023ee80 */

void FUN_18023ee80(longlong param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  undefined1 local_res8 [32];
  
  FUN_18023d240(local_res8,2);
  uVar2 = 1;
  *(undefined8 *)(param_1 + 8) = 1;
  do {
    lVar1 = *(longlong *)(uVar2 * 8 + 0x180418e20);
    if ((lVar1 == 0) || (lVar1 == param_1)) break;
    uVar2 = uVar2 + 1;
    *(ulonglong *)(param_1 + 8) = uVar2;
  } while (uVar2 < 8);
  (&DAT_180418e70)[uVar2] = (&DAT_180418e70)[uVar2] + '\x01';
  *(longlong *)(uVar2 * 8 + 0x180418e20) = param_1;
  FUN_18023d290(local_res8);
  return;
}

