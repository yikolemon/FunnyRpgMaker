/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1407e0522 */

void FUN_1407e0522(int *param_1)

{
  int *piVar1;
  int unaff_retaddr;
  int unaff_retaddr_00;
  
  piVar1 = (int *)(((ulonglong)(uint)param_1[2] - 0x18) + (ulonglong)(uint)(*param_1 << 6));
  *piVar1 = *piVar1 - unaff_retaddr;
  param_1[6] = param_1[6] - unaff_retaddr_00;
  param_1[3] = param_1[3] - unaff_retaddr;
  return;
}

