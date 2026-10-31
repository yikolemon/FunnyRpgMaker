/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1020c0a2 */

void __fastcall FUN_1020c0a2(int *param_1,int param_2,int param_3,int param_4,int param_5)

{
  _memset(param_1,0,0xf1c);
  *(undefined1 *)((int)param_1 + 0xd) = *(undefined1 *)(param_2 + 0xb8);
  param_1[4] = param_5;
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = param_4;
  return;
}

