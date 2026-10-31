/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140129658 */

void FUN_140129658(longlong param_1,int param_2)

{
  undefined8 uVar1;
  
  if (param_1 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x30);
    FUN_140129646();
    if (param_2 == 0) {
      FUN_140128b39(uVar1,param_1);
      return;
    }
  }
  return;
}

