/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140d43468 */

void FUN_140d43468(uint *param_1)

{
  uint uVar1;
  undefined8 unaff_R14;
  undefined2 unaff_retaddr;
  
  if ((*(int *)(ulonglong)param_1[8] != 0) && (0 < *(int *)(ulonglong)param_1[0xc])) {
    *(undefined8 *)(ulonglong)param_1[0xc] = unaff_R14;
    uVar1 = *(uint *)(ulonglong)param_1[8];
    *(uint *)(ulonglong)param_1[8] = uVar1 + 2;
    *(undefined2 *)(ulonglong)uVar1 = unaff_retaddr;
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000140d43496. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((ulonglong)*param_1 + 0xc))();
  return;
}

