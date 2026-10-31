/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100e1f62 */

bool __thiscall FUN_100e1f62(int *param_1,int *param_2)

{
  if ((char)param_1[1] == '\0') {
    FUN_100e1fa2();
  }
  if ((char)param_2[1] == '\0') {
    FUN_100e1fa2();
  }
  return *param_1 == 0 && *param_2 == 0 || *param_2 != 0 && *param_1 != 0;
}

