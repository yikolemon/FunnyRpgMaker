/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10281570 */

float10 FUN_10281570(undefined4 param_1,uint param_2,undefined4 param_3,uint param_4)

{
  return (float10)(double)CONCAT44(param_4 & 0x80000000 | param_2 & 0x7fffffff,param_1);
}

