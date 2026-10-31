/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14006d397 */

void FUN_14006d397(longlong *param_1,int param_2,int param_3,longlong param_4)

{
  ulonglong uVar1;
  int iVar2;
  int *piVar3;
  
  if ((int)param_1[1] == 0) {
    piVar3 = (int *)(param_4 + 4);
    iVar2 = param_3 + 1;
    do {
      uVar1 = FUN_14006d403((uint *)((longlong)param_1 +
                                    (ulonglong)((uint)(param_2 != 0) * 0x30) + 0x18),piVar3[-1],
                            *piVar3,*param_1,(uint *)0x0);
      if ((int)uVar1 != 0) {
        *(int *)(param_1 + 1) = (int)uVar1;
        return;
      }
      piVar3 = piVar3 + 2;
      iVar2 = iVar2 + -1;
    } while (1 < iVar2);
  }
  return;
}

