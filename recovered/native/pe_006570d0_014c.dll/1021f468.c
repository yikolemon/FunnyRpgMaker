/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1021f468 */

void __fastcall FUN_1021f468(undefined4 *param_1,int *param_2)

{
  undefined4 *puVar1;
  
  do {
    puVar1 = param_1;
    param_1 = (undefined4 *)*puVar1;
    if (param_1 == (undefined4 *)0x0) break;
  } while ((int)param_1[6] < param_2[6]);
  *param_2 = (int)param_1;
  *puVar1 = param_2;
  return;
}

