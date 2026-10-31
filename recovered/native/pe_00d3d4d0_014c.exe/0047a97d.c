/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0047a97d */

undefined4 __cdecl FUN_0047a97d(int *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  if (param_1 == (int *)0x0) {
    uVar1 = 0x21;
  }
  else if (param_2 == (undefined4 *)0x0) {
    uVar1 = 6;
  }
  else {
    FUN_0041c607(*param_1,param_2[3]);
    *(undefined8 *)(param_2 + 4) = 0;
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
    param_2[3] = 0;
    uVar1 = 0;
  }
  return uVar1;
}

