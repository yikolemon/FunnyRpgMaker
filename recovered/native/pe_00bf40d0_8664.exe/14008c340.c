/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14008c340 */

undefined8 FUN_14008c340(undefined8 *param_1)

{
  int *piVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  piVar1 = (int *)*param_1;
  if (((*piVar1 == -0x1f928c9d) && (piVar1[6] == 4)) &&
     ((piVar1[8] + 0xe66cfae0U < 3 || (piVar1[8] == 0x1994000)))) {
    puVar3 = (undefined8 *)FUN_14008da20();
    *puVar3 = piVar1;
    uVar2 = param_1[1];
    puVar3 = (undefined8 *)FUN_14008da40();
    *puVar3 = uVar2;
                    /* WARNING: Subroutine does not return */
    FUN_14009ca6c();
  }
  return 0;
}

