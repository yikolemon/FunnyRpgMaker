/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14018e4b0 */

undefined8 FUN_14018e4b0(undefined8 *param_1)

{
  int *piVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  piVar1 = (int *)*param_1;
  if ((*piVar1 == -0x1f928c9d) && (piVar1[6] == 4)) {
    if ((piVar1[8] + 0xe66cfae0U < 3) || (piVar1[8] == 0x1994000)) {
      puVar3 = (undefined8 *)FUN_140190430();
      *puVar3 = piVar1;
      uVar2 = param_1[1];
      puVar3 = (undefined8 *)FUN_140190450();
      *puVar3 = uVar2;
                    /* WARNING: Subroutine does not return */
      FUN_1401aa0e4();
    }
  }
  return 0;
}

