/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 1400434b0 */

void FUN_1400434b0(longlong param_1,undefined4 param_2,short param_3,short *param_4,short *param_5)

{
  short sVar1;
  short sVar2;
  short sVar3;
  
  if (*(char *)(param_1 + 400) != '\0') {
                    /* WARNING: Could not recover jumptable at 0x0001400434ce. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)(param_1 + 0x2d0) + 0x150))
              (param_1,CONCAT71((int7)((ulonglong)*(longlong *)(param_1 + 0x2d0) >> 8),1),param_2);
    return;
  }
  if (*(short *)(param_1 + 0x208) == -1) {
    *param_4 = (short)*(undefined4 *)(param_1 + 0x13c) - param_3;
    sVar1 = *(short *)(param_1 + 0x13c);
    sVar2 = *(short *)(param_1 + 0x13e);
  }
  else {
    *param_4 = *(short *)(param_1 + 0x24e) - param_3;
    sVar1 = *(short *)(param_1 + 0x24e);
    sVar2 = *(short *)(param_1 + 0x250);
  }
  sVar3 = sVar2 - sVar1;
  if (sVar2 < sVar1) {
    sVar3 = sVar1 - sVar2;
  }
  *param_5 = sVar3;
  return;
}

