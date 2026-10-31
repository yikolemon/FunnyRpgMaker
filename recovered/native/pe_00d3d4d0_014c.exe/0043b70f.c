/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0043b70f */

void __fastcall FUN_0043b70f(uint *param_1)

{
  uint uVar1;
  
  if (*param_1 == 0) {
    uVar1 = (uint)(param_1[1] != 0);
  }
  else {
    uVar1 = 1;
  }
  *param_1 = uVar1;
  return;
}

