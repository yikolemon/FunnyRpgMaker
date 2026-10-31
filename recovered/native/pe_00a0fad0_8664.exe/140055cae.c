/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140055cae */

undefined8 FUN_140055cae(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  
  lVar1 = *(longlong *)(param_2 + 0x10);
  uVar2 = FUN_14011cf50(param_3);
  if (uVar2 <= 0x7ffffffffffffffeU - lVar1) {
    FUN_140059cb0(param_1);
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_14000626f();
}

