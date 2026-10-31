/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400d3b20 */

void FUN_1400d3b20(longlong param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  undefined1 local_res8 [32];
  
  FUN_1400d39b0(local_res8,2);
  uVar2 = 1;
  *(undefined8 *)(param_1 + 8) = 1;
  do {
    lVar1 = *(longlong *)(uVar2 * 8 + 0x1401cc420);
    if ((lVar1 == 0) || (lVar1 == param_1)) break;
    uVar2 = uVar2 + 1;
    *(ulonglong *)(param_1 + 8) = uVar2;
  } while (uVar2 < 8);
  (&DAT_1401cc470)[uVar2] = (&DAT_1401cc470)[uVar2] + '\x01';
  *(longlong *)(uVar2 * 8 + 0x1401cc420) = param_1;
  FUN_1400d3a00(local_res8);
  return;
}

