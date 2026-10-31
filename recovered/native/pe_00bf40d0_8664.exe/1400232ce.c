/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 1400232ce */

ulonglong FUN_1400232ce(undefined8 param_1,longlong *param_2,undefined8 param_3,undefined8 *param_4,
                       uint *param_5)

{
  ulonglong uVar1;
  
  *param_4 = 0;
  if (param_2 != (longlong *)0x0) {
    uVar1 = FUN_14002360d(param_2,0x51600,param_5);
    return uVar1;
  }
  return 0x51;
}

