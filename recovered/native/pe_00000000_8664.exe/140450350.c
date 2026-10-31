/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140450350 */

void FUN_140450350(longlong param_1)

{
  ulonglong uVar1;
  undefined1 local_res8 [32];
  
  FUN_14044e710(local_res8,2);
  uVar1 = 1;
  *(undefined8 *)(param_1 + 8) = 1;
  do {
    if ((*(longlong *)(&UNK_14062a2f0 + uVar1 * 8) == 0) ||
       (*(longlong *)(&UNK_14062a2f0 + uVar1 * 8) == param_1)) break;
    uVar1 = uVar1 + 1;
    *(ulonglong *)(param_1 + 8) = uVar1;
  } while (uVar1 < 8);
  (&DAT_14062a340)[uVar1] = (&DAT_14062a340)[uVar1] + '\x01';
  *(longlong *)(&UNK_14062a2f0 + uVar1 * 8) = param_1;
  FUN_14044e760(local_res8);
  return;
}

