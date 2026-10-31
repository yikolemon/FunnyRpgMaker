/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140188ef0 */

void FUN_140188ef0(longlong param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  undefined1 local_res8 [32];
  
  FUN_140188dc0(local_res8,2);
  uVar2 = 1;
  *(undefined8 *)(param_1 + 8) = 1;
  do {
    lVar1 = *(longlong *)(uVar2 * 8 + 0x140f2ab50);
    if ((lVar1 == 0) || (lVar1 == param_1)) break;
    uVar2 = uVar2 + 1;
    *(ulonglong *)(param_1 + 8) = uVar2;
  } while (uVar2 < 8);
  (&DAT_140f2aba0)[uVar2] = (&DAT_140f2aba0)[uVar2] + '\x01';
  *(longlong *)(uVar2 * 8 + 0x140f2ab50) = param_1;
  FUN_140188e10(local_res8);
  return;
}

