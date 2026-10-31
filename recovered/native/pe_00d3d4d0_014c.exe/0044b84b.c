/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0044b84b */

undefined4 __fastcall FUN_0044b84b(int param_1,uint param_2)

{
  undefined4 uVar1;
  
  if (param_2 != 0xffff) {
    if (0x186 < param_2) {
      uVar1 = 0;
      if (param_2 - 0x187 < *(uint *)(param_1 + 0x54c)) {
        uVar1 = *(undefined4 *)(*(int *)(param_1 + 0x550) + (param_2 - 0x187) * 4);
      }
      return uVar1;
    }
    if (*(int *)(param_1 + 0xc08) != 0) {
      uVar1 = (**(code **)(*(int *)(param_1 + 0xc08) + 0x14))(param_2);
      return uVar1;
    }
  }
  return 0;
}

