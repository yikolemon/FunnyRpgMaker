/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1021ca13 */

undefined4 __fastcall FUN_1021ca13(int param_1,int param_2)

{
  undefined4 uVar1;
  
  if (param_2 != 0) {
    FUN_10041162();
    uVar1 = FUN_101c3567(param_1 + 0x30,&PTR_LAB_103224fc,param_1);
    FUN_10041162();
    return uVar1;
  }
  uVar1 = FUN_101c3567(param_1 + 0x30,&PTR_LAB_103224fc,param_1);
  return uVar1;
}

