/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 004219a0 */

void __cdecl FUN_004219a0(int *param_1,undefined *param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  
  if (param_3 != 0 && param_1 != (int *)0x0) {
    iVar2 = *param_1;
    while (iVar2 != 0) {
      iVar1 = *(int *)(iVar2 + 4);
      if (param_2 != (undefined *)0x0) {
        (*(code *)param_2)(param_3,*(undefined4 *)(iVar2 + 8),param_4);
      }
      FUN_0041c607(param_3,iVar2);
      iVar2 = iVar1;
    }
    *param_1 = 0;
    param_1[1] = 0;
  }
  return;
}

