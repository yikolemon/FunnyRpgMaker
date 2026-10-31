/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101e4124 */

void __fastcall FUN_101e4124(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  if (param_2[1] != 0) {
    uVar1 = FUN_101c52f5(*param_2,0x40,param_2[1]);
    *param_2 = uVar1;
    return;
  }
  *(undefined4 *)(param_1 + 0x10) = 0x85;
  return;
}

