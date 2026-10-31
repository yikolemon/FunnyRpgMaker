/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0040bb79 */

undefined8 __cdecl FUN_0040bb79(undefined2 *param_1,undefined2 *param_2,undefined4 *param_3)

{
  undefined2 uVar1;
  undefined2 *puVar2;
  uint uVar3;
  int iVar4;
  
  puVar2 = param_1;
  for (; param_1 != param_2; param_1 = param_1 + 1) {
    uVar1 = *param_1;
    iVar4 = param_3[2];
    uVar3 = iVar4 + 1;
    if ((uint)param_3[3] < uVar3) {
      (**(code **)*param_3)(uVar3);
      iVar4 = param_3[2];
      uVar3 = iVar4 + 1;
    }
    param_3[2] = uVar3;
    *(undefined2 *)(param_3[1] + iVar4 * 2) = uVar1;
    puVar2 = param_2;
  }
  return CONCAT44(param_3,puVar2);
}

