/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0043b8eb */

void __fastcall FUN_0043b8eb(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (**(code **)(param_1 + 0x1d0))
                    (param_1,*param_2,
                     *(undefined4 *)(param_1 + 0x108 + (*(byte *)(param_1 + 0x148) & 3) * 4));
  *param_2 = uVar1;
  return;
}

