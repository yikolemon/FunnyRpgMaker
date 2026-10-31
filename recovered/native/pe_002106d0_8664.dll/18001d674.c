/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18001d674 */

void FUN_18001d674(longlong *param_1)

{
  byte bVar1;
  char *pcVar2;
  
  pcVar2 = (char *)*param_1;
  if (pcVar2 != (char *)param_1[1]) {
    if (*pcVar2 == '\\') {
      bVar1 = FUN_18001ce82(param_1);
      pcVar2 = (char *)((ulonglong)bVar1 + *param_1);
    }
    *param_1 = (longlong)(pcVar2 + 1);
  }
  FUN_18001cbf4(param_1);
  return;
}

