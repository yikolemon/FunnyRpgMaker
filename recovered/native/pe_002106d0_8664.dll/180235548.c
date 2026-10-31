/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180235548 */

void FUN_180235548(undefined8 *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1[2];
  uVar2 = param_1[6];
  if (lVar1 != 0) {
    FUN_180235513(lVar1);
    FUN_1801c9b65(uVar2,lVar1);
    param_1[2] = 0;
  }
  if (param_1[4] == 0) {
    FUN_1801c9b65(uVar2,*param_1);
    *param_1 = 0;
  }
  return;
}

