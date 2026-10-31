/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1001b3d6 */

void __thiscall FUN_1001b3d6(int *param_1,uint param_2,uint param_3)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  undefined4 local_10;
  uint local_c;
  
  local_c = DAT_10388d00 ^ (uint)&local_10;
  if (param_2 < param_3) {
    uVar3 = ((param_3 >> 5) + 1) - (uint)((param_3 & 0x1f) == 0);
    puVar1 = (uint *)(*param_1 + (param_2 >> 5) * 4);
    *puVar1 = *puVar1 & ~(-1 << ((byte)param_2 & 0x1f));
    uVar2 = (param_2 >> 5) + 1;
    if (uVar2 < uVar3) {
      local_10 = 0;
      FUN_1001bd43(*param_1 + uVar2 * 4,*param_1 + uVar3 * 4,&local_10);
    }
  }
  if (DAT_10388d00 == (local_c ^ (uint)&local_10)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

