/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140015aa0 */

bool FUN_140015aa0(longlong *param_1,longlong *param_2)

{
  if ((char)param_1[1] == '\0') {
    FUN_140015aee(param_1);
  }
  if ((char)param_2[1] == '\0') {
    FUN_140015aee(param_2);
  }
  return *param_1 == 0 && *param_2 == 0 || *param_2 != 0 && *param_1 != 0;
}

