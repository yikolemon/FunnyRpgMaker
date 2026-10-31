/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0043b894 */

void __fastcall FUN_0043b894(int param_1,uint *param_2)

{
  uint uVar1;
  
  if (param_2[1] != 0) {
    uVar1 = FUN_0042136d(*param_2,0x40,param_2[1]);
    *param_2 = uVar1;
    return;
  }
  *(undefined4 *)(param_1 + 0x10) = 0x85;
  return;
}

