/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14012ff31 */

undefined8
FUN_14012ff31(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 *param_4,
             undefined8 param_5)

{
  undefined8 uVar1;
  
  *param_4 = 0;
  if (param_2 != 0) {
    uVar1 = FUN_140130294(param_2,0x51607,param_5);
    return uVar1;
  }
  return 0x51;
}

