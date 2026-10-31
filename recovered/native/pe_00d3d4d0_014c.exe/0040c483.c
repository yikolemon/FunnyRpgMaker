/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0040c483 */

void __cdecl FUN_0040c483(undefined4 *param_1,char *param_2,char *param_3,undefined4 *param_4)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  
  for (; param_2 != param_3; param_2 = param_2 + 1) {
    cVar1 = *param_2;
    iVar3 = param_4[2];
    uVar2 = iVar3 + 1;
    if ((uint)param_4[3] < uVar2) {
      (**(code **)*param_4)(uVar2);
      iVar3 = param_4[2];
      uVar2 = iVar3 + 1;
    }
    param_4[2] = uVar2;
    *(short *)(param_4[1] + iVar3 * 2) = (short)cVar1;
  }
  *param_1 = param_4;
  return;
}

