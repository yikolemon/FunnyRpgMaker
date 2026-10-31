/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140074516 */

longlong FUN_140074516(longlong param_1,undefined8 param_2,undefined2 *param_3,undefined8 *param_4,
                      undefined8 *param_5,undefined8 *param_6)

{
  undefined1 *puVar1;
  undefined8 *local_38;
  longlong local_30;
  longlong local_28;
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  local_28 = param_1;
  FUN_140006874();
  *(undefined2 *)(local_28 + 0x20) = *param_3;
  *(undefined8 *)(local_28 + 0x28) = *param_4;
  *(undefined8 *)(local_28 + 0x30) = *param_5;
  local_30 = local_28 + 0x38;
  if (0xf < (ulonglong)param_6[3]) {
    param_6 = (undefined8 *)*param_6;
  }
  *(undefined8 *)(local_28 + 0x38) = 0;
  *(undefined8 *)(local_28 + 0x40) = 0;
  *(undefined8 *)(local_28 + 0x48) = 0;
  local_38 = param_6;
  FUN_14005872a();
  local_38 = (undefined8 *)((ulonglong)local_38 & 0xffffffffffffff00);
  puVar1 = *(undefined1 **)(local_28 + 0x40);
  if (puVar1 == *(undefined1 **)(local_28 + 0x48)) {
    FUN_1400660b8(local_30,puVar1,&local_38);
  }
  else {
    *puVar1 = 0;
    *(longlong *)(local_28 + 0x40) = *(longlong *)(local_28 + 0x40) + 1;
  }
  return local_28;
}

