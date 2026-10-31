/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101e22db */

void __fastcall FUN_101e22db(int param_1,undefined2 *param_2)

{
  char cVar1;
  
  cVar1 = FUN_101ec96f(*param_2,param_1 + 0xf8);
  if (cVar1 != '\0') {
    return;
  }
  *(undefined4 *)(param_1 + 0xf4) = *(undefined4 *)(param_1 + 0xf8);
  FUN_101eaa22();
  return;
}

