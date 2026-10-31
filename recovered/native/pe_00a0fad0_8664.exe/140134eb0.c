/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140134eb0 */

undefined8 FUN_140134eb0(undefined4 *param_1,uint param_2,uint param_3)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  param_3 = param_3 & 0xfff7ffff;
  if ((param_2 & param_3 & 0xfcf0fce0) != 0) {
    if (param_1 != (undefined4 *)0x0) {
      uVar1 = thunk_FUN_140135a70(0,0);
      *param_1 = uVar1;
    }
    puVar2 = (undefined4 *)FUN_140113dd4();
    *puVar2 = 0x16;
    FUN_140120ee8();
    return 0x16;
  }
  if (param_1 != (undefined4 *)0x0) {
    uVar1 = thunk_FUN_140135a70(param_2,param_3);
    *param_1 = uVar1;
    return 0;
  }
  thunk_FUN_140135a70(param_2,param_3);
  return 0;
}

