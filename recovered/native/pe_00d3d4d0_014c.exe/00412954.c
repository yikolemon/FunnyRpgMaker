/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00412954 */

void __cdecl FUN_00412954(undefined4 *param_1,undefined4 *param_2,int param_3,undefined2 *param_4)

{
  undefined2 uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  if (0 < param_3) {
    iVar4 = param_3 + 1;
    do {
      uVar1 = *param_4;
      iVar3 = param_2[2];
      uVar2 = iVar3 + 1;
      if ((uint)param_2[3] < uVar2) {
        (**(code **)*param_2)(uVar2);
        iVar3 = param_2[2];
        uVar2 = iVar3 + 1;
      }
      param_2[2] = uVar2;
      *(undefined2 *)(param_2[1] + iVar3 * 2) = uVar1;
      iVar4 = iVar4 + -1;
    } while (1 < iVar4);
  }
  *param_1 = param_2;
  return;
}

