/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1001d8ea */

void __fastcall FUN_1001d8ea(int *param_1)

{
  uint uVar1;
  char *pcVar2;
  
  pcVar2 = (char *)*param_1;
  if (pcVar2 != (char *)param_1[1]) {
    if (*pcVar2 == '\\') {
      uVar1 = FUN_1001d106(pcVar2);
      pcVar2 = (char *)((uVar1 & 0xff) + *param_1);
    }
    *param_1 = (int)(pcVar2 + 1);
  }
  FUN_1001ce44();
  return;
}

