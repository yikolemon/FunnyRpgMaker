/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140058eec */

void FUN_140058eec(longlong *param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  
  uVar2 = 0xfffffffffffffffe;
  if (param_2 != 0) {
    if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1400066bc();
    }
    FUN_140058f68();
    lVar1 = *param_1 + param_2 * 2;
    FUN_14003d090(*param_1,lVar1,param_3,param_4,param_1,uVar2);
    param_1[1] = lVar1;
  }
  return;
}

