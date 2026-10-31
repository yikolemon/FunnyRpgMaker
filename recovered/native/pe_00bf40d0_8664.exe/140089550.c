/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140089550 */

void FUN_140089550(longlong param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  int local_res8 [8];
  
  FUN_140086460(local_res8,2);
  uVar2 = 1;
  *(undefined8 *)(param_1 + 8) = 1;
  do {
    lVar1 = *(longlong *)(uVar2 * 8 + 0x14013ccc0);
    if ((lVar1 == 0) || (lVar1 == param_1)) break;
    uVar2 = uVar2 + 1;
    *(ulonglong *)(param_1 + 8) = uVar2;
  } while (uVar2 < 8);
  (&DAT_14013cd10)[uVar2] = (&DAT_14013cd10)[uVar2] + '\x01';
  *(longlong *)(uVar2 * 8 + 0x14013ccc0) = param_1;
  FUN_1400864b0(local_res8);
  return;
}

