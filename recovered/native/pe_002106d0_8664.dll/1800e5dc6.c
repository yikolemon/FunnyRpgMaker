/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800e5dc6 */

bool FUN_1800e5dc6(longlong *param_1,longlong *param_2)

{
  if ((char)param_1[1] == '\0') {
    FUN_1800e5e14(param_1);
  }
  if ((char)param_2[1] == '\0') {
    FUN_1800e5e14(param_2);
  }
  return *param_1 == 0 && *param_2 == 0 || *param_2 != 0 && *param_1 != 0;
}

