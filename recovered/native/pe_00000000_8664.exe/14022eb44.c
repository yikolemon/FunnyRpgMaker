/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14022eb44 */

void FUN_14022eb44(longlong *param_1)

{
  byte bVar1;
  char *pcVar2;
  
  pcVar2 = (char *)*param_1;
  if (pcVar2 != (char *)param_1[1]) {
    if (*pcVar2 == '\\') {
      bVar1 = FUN_14022e352(param_1);
      pcVar2 = (char *)((ulonglong)bVar1 + *param_1);
    }
    *param_1 = (longlong)(pcVar2 + 1);
  }
  FUN_14022e0c4(param_1);
  return;
}

