/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140030754 */

void FUN_140030754(longlong param_1,uint *param_2,uint param_3,undefined4 *param_4,
                  undefined4 *param_5)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14002fd6a(*(longlong *)(param_1 + 0x30));
  if ((char)uVar1 != '\0') {
    FUN_1400307af(param_1,param_2,param_3,param_4,param_5);
    return;
  }
  FUN_140030874(param_1,param_2,(longlong)param_4,param_5);
  return;
}

