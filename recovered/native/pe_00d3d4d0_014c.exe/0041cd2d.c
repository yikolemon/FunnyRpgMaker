/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0041cd2d */

undefined4 __cdecl FUN_0041cd2d(uint *param_1,undefined4 *param_2,undefined4 *param_3,int param_4)

{
  undefined4 *puVar1;
  uint uVar2;
  
  uVar2 = *param_1;
  if (uVar2 < *(uint *)(param_4 + 4)) {
    do {
      puVar1 = *(undefined4 **)(*(int *)(param_4 + 0x14) + uVar2 * 4);
      if (puVar1 != (undefined4 *)0x0) {
        if (param_2 != (undefined4 *)0x0) {
          *param_2 = *puVar1;
        }
        if (param_3 != (undefined4 *)0x0) {
          *param_3 = puVar1[1];
        }
        *param_1 = *param_1 + 1;
        return CONCAT31((int3)((uint)param_1 >> 8),1);
      }
      uVar2 = uVar2 + 1;
      *param_1 = uVar2;
    } while (uVar2 < *(uint *)(param_4 + 4));
  }
  return 0;
}

