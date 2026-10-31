/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1001f242 */

void __thiscall FUN_1001f242(uint *param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = *param_1;
  uVar2 = uVar1 >> 1;
  if (uVar1 >> 1 < param_2) {
    uVar2 = param_2;
  }
  uVar3 = 0x10;
  if (0x10 < uVar2) {
    uVar3 = uVar2;
  }
  uVar2 = uVar3 + uVar1;
  if (CARRY4(uVar3,uVar1)) {
    uVar2 = 0xffffffff;
  }
  if (param_2 == 0xffffffff) {
    uVar2 = 0xffffffff;
  }
  if (param_2 <= uVar2 - uVar1) {
    uVar1 = FUN_1026ff70(param_1[2],uVar2);
    if (uVar1 != 0) {
      param_1[2] = uVar1;
      *param_1 = uVar2;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_10228760(9);
}

