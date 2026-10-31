/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1001a292 */

void __thiscall FUN_1001a292(uint *param_1,uint *param_2,uint *param_3,int param_4)

{
  uint uVar1;
  uint uVar2;
  undefined4 local_18;
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)&local_18;
  if (param_4 != 0) {
    uVar2 = *param_2 & 3;
    uVar1 = 4 - uVar2;
    if (uVar2 == 0) {
      uVar1 = 0;
    }
    if ((uint)(param_4 * 4) <= *param_3 - uVar1 && uVar1 <= *param_3) {
      *param_2 = *param_2 + uVar1;
      *param_3 = *param_3 - uVar1;
      uVar1 = *param_2;
      if (uVar1 != 0) {
        uVar2 = uVar1 + param_4 * 4;
        local_18 = 0;
        FUN_1001a408(uVar1,uVar2,&local_18);
        *(undefined1 *)(param_1 + 2) = 0;
        *param_1 = uVar1;
        param_1[1] = uVar2;
        *param_2 = *param_2 + param_4 * 4;
        *param_3 = *param_3 + param_4 * -4;
        goto LAB_1001a32a;
      }
    }
    FUN_1001a350(param_4);
  }
LAB_1001a32a:
  if (DAT_10388d00 == (local_14 ^ (uint)&local_18)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

