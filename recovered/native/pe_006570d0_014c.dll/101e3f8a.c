/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101e3f8a */

void __fastcall FUN_101e3f8a(uint *param_1)

{
  uint uVar1;
  
  if (*param_1 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = (uint)(param_1[1] != 0);
  }
  *param_1 = uVar1;
  return;
}

