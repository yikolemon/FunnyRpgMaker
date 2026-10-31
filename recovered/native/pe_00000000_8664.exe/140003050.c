/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140003050 */

int * FUN_140003050(undefined8 param_1,int *param_2,int param_3)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_3 == 0) {
    param_3 = 0;
    uVar2 = FUN_1400031ff();
  }
  else {
    iVar1 = FUN_140189680(param_3);
    if (iVar1 == 0) {
      uVar2 = FUN_140002f76();
    }
    else {
      uVar2 = FUN_1400031ff();
      param_3 = iVar1;
    }
  }
  *param_2 = param_3;
  *(undefined8 *)(param_2 + 2) = uVar2;
  return param_2;
}

