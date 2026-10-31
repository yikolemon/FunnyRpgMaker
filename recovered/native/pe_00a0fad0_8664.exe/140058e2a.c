/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140058e2a */

ulonglong FUN_140058e2a(longlong *param_1,uint param_2)

{
  int iVar1;
  undefined2 *puVar2;
  ulonglong uVar3;
  
  if (*(longlong *)param_1[8] != 0) {
    iVar1 = *(int *)param_1[0xb];
    if (0 < iVar1) {
      *(int *)param_1[0xb] = iVar1 + -1;
      puVar2 = *(undefined2 **)param_1[8];
      *(undefined2 **)param_1[8] = puVar2 + 1;
      *puVar2 = (short)param_2;
      return (ulonglong)param_2;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000140058e61. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar3 = (**(code **)(*param_1 + 0x18))();
  return uVar3;
}

