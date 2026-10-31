/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00469f16 */

undefined4 __cdecl FUN_00469f16(int param_1,int param_2,int param_3,int *param_4)

{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = FUN_0046e566(param_1,param_2);
  if (piVar1 == (int *)0x0) {
    uVar2 = 0x8e;
  }
  else {
    if (param_4 != (int *)0x0) {
      *param_4 = piVar1[3];
    }
    uVar2 = FUN_00420696(param_3,piVar1[2]);
  }
  return uVar2;
}

