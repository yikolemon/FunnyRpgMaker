/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400761d3 */

byte FUN_1400761d3(undefined8 *param_1)

{
  ulonglong uVar1;
  undefined8 *puVar2;
  
  puVar2 = param_1;
  if (7 < (ulonglong)param_1[3]) {
    puVar2 = (undefined8 *)*param_1;
  }
  uVar1 = FUN_1400dd250(puVar2);
  if (uVar1 >> 0x20 == 0) {
    return (byte)uVar1 & 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140041f39("remove",uVar1 >> 0x20,param_1);
}

