/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101546a4 */

longlong FUN_101546a4(uint param_1,int param_2,uint param_3,int param_4,float param_5)

{
  return (longlong)
         ROUND((float)CONCAT44((param_4 - param_2) - (uint)(param_3 < param_1),param_3 - param_1) *
               param_5 + (float)CONCAT44(param_2,param_1));
}

