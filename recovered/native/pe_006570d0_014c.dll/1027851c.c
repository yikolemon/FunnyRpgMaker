/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1027851c */

uint FUN_1027851c(undefined2 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  uint uVar1;
  uint local_8;
  
  uVar1 = FUN_102782b8(&local_8,param_2,param_3,param_4,param_5);
  if (uVar1 < 5) {
    if (0xffff < local_8) {
      local_8 = 0xfffd;
    }
    if (param_1 != (undefined2 *)0x0) {
      *param_1 = (short)local_8;
    }
  }
  return uVar1;
}

