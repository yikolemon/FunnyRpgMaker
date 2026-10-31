/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 004128bc */

undefined4 * __cdecl FUN_004128bc(undefined4 *param_1,undefined4 *param_2,char param_3,char param_4)

{
  uint uVar1;
  int iVar2;
  
  if (param_4 == '\0') {
    if (param_3 == '\x03') {
      iVar2 = param_2[2];
      uVar1 = iVar2 + 1;
      if ((uint)param_2[3] < uVar1) {
        (**(code **)*param_2)(uVar1);
        iVar2 = param_2[2];
        uVar1 = iVar2 + 1;
      }
      param_2[2] = uVar1;
      *(undefined2 *)(param_2[1] + iVar2 * 2) = 0x20;
    }
    else if (param_3 == '\x01') {
      iVar2 = param_2[2];
      uVar1 = iVar2 + 1;
      if ((uint)param_2[3] < uVar1) {
        (**(code **)*param_2)(uVar1);
        iVar2 = param_2[2];
        uVar1 = iVar2 + 1;
      }
      param_2[2] = uVar1;
      *(undefined2 *)(param_2[1] + iVar2 * 2) = 0x2b;
    }
  }
  else {
    iVar2 = param_2[2];
    uVar1 = iVar2 + 1;
    if ((uint)param_2[3] < uVar1) {
      (**(code **)*param_2)(uVar1);
      iVar2 = param_2[2];
      uVar1 = iVar2 + 1;
    }
    param_2[2] = uVar1;
    *(undefined2 *)(param_2[1] + iVar2 * 2) = 0x2d;
  }
  *param_1 = param_2;
  return param_1;
}

