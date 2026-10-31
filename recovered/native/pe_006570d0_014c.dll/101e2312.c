/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101e2312 */

void __fastcall FUN_101e2312(int param_1,undefined2 *param_2)

{
  char cVar1;
  
  cVar1 = FUN_101ec96f(*param_2,param_1 + 0xfc);
  if (cVar1 != '\0') {
    return;
  }
  FUN_101eaa22();
  return;
}

