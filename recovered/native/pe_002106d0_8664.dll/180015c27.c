/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180015c27 */

undefined8 FUN_180015c27(undefined8 param_1,char *param_2,undefined8 *param_3)

{
  size_t sVar1;
  undefined8 *puVar2;
  
  sVar1 = strlen(param_2);
  if (sVar1 <= (param_3[2] ^ 0x7fffffffffffffff)) {
    puVar2 = param_3;
    if (0xf < (ulonglong)param_3[3]) {
      puVar2 = (undefined8 *)*param_3;
    }
    FUN_180015c90(param_1,puVar2,param_3,param_2,sVar1,puVar2,param_3[2]);
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1800013a5();
}

