/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180233c44 */

undefined8 FUN_180233c44(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  
  if (*(char *)(param_1 + 0x79) != '\0') {
    UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x98);
    if (*(char *)(param_1 + 0x78) == '\0') {
      (**(code **)(param_1 + 0x80))(param_1 + 0xa0);
      *(undefined1 *)(param_1 + 0x78) = 1;
    }
                    /* WARNING: Could not recover jumptable at 0x000180233c98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*UNRECOVERED_JUMPTABLE)(param_2,param_3,param_1 + 0xa0);
    return uVar1;
  }
  return 0x9e;
}

