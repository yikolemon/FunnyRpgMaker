/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400662b0 */

void FUN_1400662b0(longlong param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 auStack_38 [47];
  undefined1 local_9;
  ulonglong local_8;
  
  local_8 = DAT_1401c9640 ^ (ulonglong)auStack_38;
  *(undefined8 *)(param_1 + 0x60) = 0;
  if (*(ulonglong *)(param_1 + 0x68) < 0x10) {
    puVar1 = (undefined1 *)(param_1 + 0x50);
  }
  else {
    puVar1 = *(undefined1 **)(param_1 + 0x50);
  }
  *puVar1 = 0;
  puVar1 = *(undefined1 **)(param_1 + 0x38);
  puVar2 = *(undefined1 **)(param_1 + 0x40);
  if (puVar1 != *(undefined1 **)(param_1 + 0x40)) {
    *(undefined1 **)(param_1 + 0x40) = puVar1;
    puVar2 = puVar1;
  }
  local_9 = *(undefined1 *)(param_1 + 0x14);
  if (puVar2 == *(undefined1 **)(param_1 + 0x48)) {
    FUN_1400660b8(param_1 + 0x38,puVar2,&local_9);
  }
  else {
    *puVar2 = local_9;
    *(longlong *)(param_1 + 0x40) = *(longlong *)(param_1 + 0x40) + 1;
  }
  if (DAT_1401c9640 == (local_8 ^ (ulonglong)auStack_38)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1400d3720(local_8 ^ (ulonglong)auStack_38);
}

