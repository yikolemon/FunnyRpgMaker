/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14016f443 */

void FUN_14016f443(undefined8 *param_1,int param_2,int param_3,longlong param_4)

{
  int iVar1;
  undefined4 *puVar2;
  
  if (*(int *)(param_1 + 1) == 0) {
    puVar2 = (undefined4 *)(param_4 + 4);
    param_3 = param_3 + 1;
    do {
      iVar1 = FUN_14016f4af((longlong)param_1 + (ulonglong)((uint)(param_2 != 0) * 0x30) + 0x18,
                            puVar2[-1],*puVar2,*param_1,0);
      if (iVar1 != 0) {
        *(int *)(param_1 + 1) = iVar1;
        return;
      }
      puVar2 = puVar2 + 2;
      param_3 = param_3 + -1;
    } while (1 < param_3);
  }
  return;
}

