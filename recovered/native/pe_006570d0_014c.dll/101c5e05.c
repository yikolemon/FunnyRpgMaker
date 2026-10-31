/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101c5e05 */

void FUN_101c5e05(undefined4 param_1,undefined4 param_2,byte *param_3)

{
  char cVar1;
  
  cVar1 = FUN_101c61a6(param_1,param_2);
  if (cVar1 == '\x02') {
    cVar1 = FUN_101c62b2(0,param_1,param_2);
  }
  if (((cVar1 == 'U') || (cVar1 == '\x02')) && ((*param_3 & 4) != 0)) {
    FUN_101c6401();
    return;
  }
  return;
}

