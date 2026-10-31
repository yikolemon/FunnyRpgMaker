/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14002fd26 */

undefined8 FUN_14002fd26(longlong *param_1,undefined2 *param_2,longlong param_3,char param_4)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14002fd6a((longlong)param_1);
  if ((char)uVar1 != '\0') {
    uVar1 = FUN_14002fd7a(param_1,param_2,param_3,param_4);
    return uVar1;
  }
  return 0;
}

