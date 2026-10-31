/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10019ce4 */

void __thiscall FUN_10019ce4(uint *param_1,uint *param_2,uint *param_3,int param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined4 local_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)&local_24;
  if (param_4 != 0) {
    uVar2 = param_4 * 0x10;
    uVar3 = *param_2 & 3;
    uVar1 = 4 - uVar3;
    if (uVar3 == 0) {
      uVar1 = 0;
    }
    if (uVar2 <= *param_3 - uVar1 && uVar1 <= *param_3) {
      *param_2 = *param_2 + uVar1;
      *param_3 = *param_3 - uVar1;
      uVar1 = *param_2;
      if (uVar1 != 0) {
        local_24 = 0;
        uStack_20 = 0;
        uStack_1c = 0;
        uStack_18 = 0;
        FUN_1001a158(uVar1,uVar1 + uVar2,&local_24);
        *(undefined1 *)(param_1 + 2) = 0;
        *param_1 = uVar1;
        param_1[1] = uVar1 + uVar2;
        *param_2 = *param_2 + uVar2;
        *param_3 = *param_3 + param_4 * -0x10;
        goto LAB_10019d7a;
      }
    }
    FUN_1001a096(param_4);
  }
LAB_10019d7a:
  if (DAT_10388d00 == (local_14 ^ (uint)&local_24)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

