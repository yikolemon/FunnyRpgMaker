/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00404f4c */

void __cdecl FUN_00404f4c(undefined4 param_1,LPVOID param_2)

{
  int *piVar1;
  
  piVar1 = *(int **)((int)param_2 + 0x2c);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))(piVar1 != (int *)((int)param_2 + 8));
    *(undefined4 *)((int)param_2 + 0x2c) = 0;
  }
  FUN_0047f280(param_2);
  return;
}

