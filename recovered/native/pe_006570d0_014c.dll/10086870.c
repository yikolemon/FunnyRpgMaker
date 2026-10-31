/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10086870 */

int __fastcall FUN_10086870(char *param_1)

{
  char cVar1;
  int iVar2;
  
  cVar1 = *param_1;
  iVar2 = 0;
  if (cVar1 != '\0') {
    if (cVar1 == '\x01') {
      return ((*(int **)(param_1 + 8))[1] - **(int **)(param_1 + 8) >> 3) * -0x33333333;
    }
    if (cVar1 == '\x02') {
      return (*(int **)(param_1 + 8))[1] - **(int **)(param_1 + 8) >> 4;
    }
    iVar2 = 1;
  }
  return iVar2;
}

