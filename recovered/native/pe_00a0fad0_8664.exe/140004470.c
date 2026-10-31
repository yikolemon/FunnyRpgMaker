/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140004470 */

undefined8 FUN_140004470(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 local_38;
  
  local_38 = 0xfffffffffffffffe;
  FUN_1400319fb(&local_58);
  if ((undefined8 **)(param_1 + 0x3a0) != &local_58) {
    FUN_14000eeca();
    *(undefined8 **)(param_1 + 0x3a0) = local_58;
    *(undefined8 *)(param_1 + 0x3a8) = uStack_50;
    *(undefined8 *)(param_1 + 0x3b0) = local_48;
    local_58 = (undefined8 *)0x0;
    uStack_50 = 0;
    local_48 = 0;
  }
  FUN_14000eeca(&local_58);
  puVar1 = (undefined8 *)(param_1 + 0x3b8);
  if (*(longlong *)(param_1 + 0x3b8) != *(longlong *)(param_1 + 0x3c0)) {
    *(longlong *)(param_1 + 0x3c0) = *(longlong *)(param_1 + 0x3b8);
  }
  FUN_140031c5e(puVar1,*(longlong *)(param_1 + 0x3a8) - *(longlong *)(param_1 + 0x3a0) >> 5);
  puVar4 = *(undefined8 **)(param_1 + 0x3a0);
  puVar2 = *(undefined8 **)(param_1 + 0x3a8);
  if (puVar4 != puVar2) {
    do {
      local_58 = puVar4;
      if (0xf < (ulonglong)puVar4[3]) {
        local_58 = (undefined8 *)*puVar4;
      }
      puVar3 = *(undefined8 **)(param_1 + 0x3c0);
      if (puVar3 == *(undefined8 **)(param_1 + 0x3c8)) {
        FUN_1400322a6(puVar1,puVar3,&local_58);
      }
      else {
        *puVar3 = local_58;
        *(longlong *)(param_1 + 0x3c0) = *(longlong *)(param_1 + 0x3c0) + 8;
      }
      puVar4 = puVar4 + 4;
    } while (puVar4 != puVar2);
  }
  return *puVar1;
}

